/**
* Burak Can Evci 
* G211210091
* 2B
* 2. Ödev
* doku.hpp
**/


#ifndef DOKU_HPP
#define DOKU_HPP

#include <iostream>

#include "hucre.hpp"
#include "dokuNode.hpp"
#include <stdlib.h>     
#include <time.h>       


class doku {
private:

    int size;
    dokuNode *head;

    dokuNode* FindPreviousByPosition(int index);
    dokuNode* FindPosition(int index);
    

public:

    doku();
	bool isEmpty()const;
    int Count()const;
    void ekle(hucre*& item);
	void sil(hucre*& item);     
	void silme(int index);
    int indexOf(hucre*& item);  
	void insert(int index, hucre*& item);
    hucre*& first();
    hucre*& last();
    void DugumTasi(int from, int to);
    hucre*& elementAt(int index);
    
    ~doku();

};


#endif 

