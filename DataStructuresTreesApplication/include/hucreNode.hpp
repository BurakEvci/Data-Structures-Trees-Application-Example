/**
* Burak Can Evci 
* G211210091
* 2B
* 2. Ödev
* hucreNode.hpp
**/

#ifndef HUCRENODE_HPP
#define HUCRENODE_HPP



#include <iostream>
using namespace std;

class hucreNode {
public:
    int dna;
    hucreNode *next;
    hucreNode *prev;

    hucreNode(const int dna, hucreNode *next, hucreNode *prev);
    hucreNode(const int dna, hucreNode *next);
    hucreNode(const int dna);
};



#endif /* HUCRENODE_HPP */

