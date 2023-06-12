/**
* Burak Can Evci 
* G211210091
* 2B
* 2. Ödev
* hucreNode.cpp
**/

#include "hucreNode.hpp"

hucreNode::hucreNode(const int dna, hucreNode *next , hucreNode *prev ) {
    this->dna = dna;
    this->next = next;
    this->prev = prev;
}
hucreNode::hucreNode(const int dna, hucreNode *next) {
    this->dna = dna;
    this->next = next;
    this->prev = prev;
}
hucreNode::hucreNode(const int dna) {
    this->dna = dna;
    this->next = next;
    this->prev = prev;
}
