#include "magicMap.h"

CMagicMap::CMagicMap()
{
    m_size = 0;
    map_data = NULL;
}

CMagicMap::~CMagicMap(){
    m_size = 0;
    if (map_data != NULL)
        delete map_data;
}

CMagicMap::setSize(unsigned int map_size){
    m_size = map_size;
    if (map_data != NULL)
        delete map_data;
    map_data = new CMagicData(m_size);
    map_data->evolveData();
}

CMagicMap::printDesign(){
    cout<<"m_size:"<<m_size<<endl;
    map_data->printData();
    //for(unsigned int i = 0; i < m_size; i++){
        //for(unsigned int j = 0; j< m_size; j++){
            //if (j == i){
                //cout <<" * ";
            //else{
                //cout<<" - ";
}