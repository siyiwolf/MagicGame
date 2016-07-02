#ifndef __MAPDATA__
#define __MAPDATA__

#include <iostream>

using namespace std;

class CMagicData{
private:
    unsigned int rd_size;
    unsigned int mp_size;
    unsigned int elv_num;
    unsigned int* pData;
public:
    CMagicData();
    CMagicData(unsigned int map_size);
    CMagicData(unsigned int* preData, unsigned int map_size, unsigned int a_size);
    CMagicData(CMagicData c_data);
    ~CMagicData();
    bool evolveData();
    //bool updataArraySize(unsigned int index);
    void printData();
private:
    bool verityData(unsigned int i_value);
    void upDataArraySize(unsigned int index);
    bool fAbs(unsigned int f_value, unsigned int index);
    bool retireData(unsigned int index);
};

#endif

