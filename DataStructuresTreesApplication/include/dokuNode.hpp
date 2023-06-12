/**
* Burak Can Evci 
* G211210091
* 2B
* 2. Ödev
* dokuNode.hpp
**/


#ifndef DOKUNODE_HPP
#define DOKUNODE_HPP


#include "hucre.hpp"

class dokuNode {
public:
    hucre* data;
    dokuNode *next;
    dokuNode *prev;
    


    dokuNode(hucre* data, dokuNode *next, dokuNode *prev);
    dokuNode(hucre* data, dokuNode *next);
    dokuNode(hucre* data);
    
};


#endif 

