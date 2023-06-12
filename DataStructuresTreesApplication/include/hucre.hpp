/**
* Burak Can Evci 
* G211210091
* 2B
* 2. Ödev
* hucre.hpp
**/

#ifndef HUCRE_HPP
#define HUCRE_HPP

#include "hucreNode.hpp"

#include <iomanip>

class hucre {
private:
    hucreNode *head;
    int size;
    int dna;
    hucreNode* FindPreviousByPosition(int index);
public:
    hucre();
	bool isEmpty()const;
    int Count()const;
    void insert(const int& dna,int index);
    const int& ilk();
    const int& son();
    int indexOf(const int& dna);  
	void ekle(const int& dna);
    void sil(const int& dna);      
    void silme(int index);
    const int& elementAt(int index);
    int elemanSayisi();


};


#endif 

