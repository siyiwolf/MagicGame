//注意:代码模板中的代码将会被复制到任何新创建的文件中，编辑代码模板中的代码，让他帮你自动增加固定代码吧
#include "main.h"
using namespace std;
void main(){
    CMagicMap* pMmap = new CMagicMap();
    unsigned int m_size;
    cout<<"please input the size of map:";
    cin>>m_size;
    pMmap->setSize(m_size);
    pMmap->printDesign();
    cout<<"hello world\n";//test
    delete pMmap;
}