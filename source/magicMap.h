//注意:代码模板中的代码将会被复制到任何新创建的文件中，编辑代码模板中的代码，让他帮你自动增加固定代码吧
#ifndef __MAGICMAP__
#define __MAGICMAP__

#include "mapList.h"
#include "mapData.h"

class CMagicMap{
private:
    CMagicList<CMagicData>
    m_list;
    CMagicData* map_data;
    unsigned int m_size;
public:
    CMagicMap();
    CMagicMap(unsigned int map_size);
    CMagicMap(CMagicMap m_Mapobj);
    ~CMagicMap();
    unsigned int getSize();
    void setSize(unsigned int mSize);
    unsigned int getNumMethod();
    void printDesign();
};

#endif


