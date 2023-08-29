#ifndef INODECONTAINER_H_INCLUDED
#define INODECONTAINER_H_INCLUDED

#include <iostream>
#include <list>
#include "Root.h"
using namespace std;

class InodeContainer{

private:
    static const  int maxInodes=1048576;
    static list<int> container;
    InodeContainer();
    static list<int> getInstance();

public:
    static int getFreshInode();
    static void addFreshInode(int i);
};

#endif // INODECONTAINER_H_INCLUDED
