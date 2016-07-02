//注意:代码模板中的代码将会被复制到任何新创建的文件中，编辑代码模板中的代码，让他帮你自动增加固定代码吧
#include "mapData.h"

CMagicData::CMagicData(){
    mp_size = 0;
    rd_size = 0;
    elv_num = 0;
    pData = NULL;
}

CMagicData::CMagicData(unsigned int map_size){
    mp_size = map_size;
    rd_size = 0;
    if (mp_size == 0){
        pData = NULL;
        return;
    }
    pData = new unsigned int[mp_size];
    for (unsigned int i = 0; i < mp_size; i++){
        pData[i] = i + 1;
    }
}

CMagicData::CMagicData(unsigned int* pre_data, unsigned int map_size, unsigned int array_size){
    mp_size = map_size;
    rd_size = array_size;
    pData = new unsigned int[mp_size];
    for (unsigned int i = 0; i < mp_size; i++){
        pData[i] = pre_data[i];
    }
}

bool CMagicData::verityData(unsigned int i_value){
    for (unsigned int i = mp_size - rd_size; i < mp_size;  i++){
        if (fAbs(i_value ,i))
            return false;
    }
    return true;
}

bool CMagicData::evolveData(){
    unsigned int insertValue = 0;
    bool eFlag = false;
    for (unsigned int i = 0; i < mp_size-rd_size; i++){
        //cout<<"verityBegin"<<i+1<<endl;
        insertValue = pData[i];
        if (!verityData(insertValue))
            continue;
        
        //cout<<"updata begin!"<<endl;
        updataArraySize(i);
        if (mp_size == rd_size){
            elv_num++;
            return true;
        }
        if(evolveData()){
            //continue;
            return true;
        }
        else{
            //cout<<"RetireBegin!"<<endl;
            retireData(i);
        }
    }
    return false;
}

CMagicData::~CMagicData(){
    mp_size = 0;
    rd_size = 0;
    if (pData != NULL){
        delete []pData;
    }
}

CMagicData::updataArraySize(unsigned int index){
    unsigned int t_value = pData[index];
    for (unsigned int i = index; i < mp_size - 1; i++){
        pData[i] = pData[i + 1];
    }
    pData[mp_size - 1] = t_value;
    rd_size++;
    //cout<<"rd_size:"<<rd_size<<endl;
    //printData();
}

CMagicData::printData(){
    for (unsigned int i = 0; i < mp_size; i++){
        cout<<pData[i]<<"::";
        for (unsigned int j = 0; j < mp_size; j++){
            if (j + 1 == pData[i])
                cout<<" # ";
            else
                cout<<" - ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool CMagicData::fAbs(unsigned int f_value, unsigned int index){
    if (f_value > pData[index])
        return ((f_value - pData[index]) == (mp_size - index));
    else
        return ((pData[index] - f_value) == (mp_size - index));
}

bool CMagicData::retireData(unsigned int index){
    unsigned int l_value = pData[mp_size - 1];
    for (unsigned int i = mp_size - 1; i > index; i--){
        pData[i] = pData[i - 1];
    }
    pData[index] = l_value;
    rd_size--;
    //cout<<"rd_size:"<<rd_size<<endl;
    //printData();
}
