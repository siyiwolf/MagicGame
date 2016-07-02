#ifndef __MAPLIST__
#define __MAPLIST__
#include <iostream>
using namespace std;

template<class T>
class CMagicNode{
private:
    T magic_data;
    CMagicNode<T>* pNext;
public:
    CMagicNode();
    CMagicNode(T mag_data);
    ~CMagicNode();
    void printArray();
};

template<class T>
class CMagicList{
private:
    CMagicNode<T>* head;
public:
    CMagicList();
    CMagicList(CMagicList m_list);
    ~CMagicList();
    void insertNode();
    void deleteNode();
};

#endif

