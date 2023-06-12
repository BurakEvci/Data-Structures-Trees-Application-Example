/**
* Burak Can Evci 
* G211210091
* 2B
* 2. Ödev
* dokuNode.cpp
**/

#include "dokuNode.hpp"

dokuNode::dokuNode(hucre* data, dokuNode *next , dokuNode *prev) {
    
    this->data = data;
    this->next = next;
    this->prev = prev;
}

dokuNode::dokuNode(hucre* data, dokuNode *next ) {
    
    this->data = data;
    this->next = next;
    this->prev = prev;
}
    
dokuNode::dokuNode(hucre* data) {
    
    this->data = data;
    this->next = next;
    this->prev = prev;
}