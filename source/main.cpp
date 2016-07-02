
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