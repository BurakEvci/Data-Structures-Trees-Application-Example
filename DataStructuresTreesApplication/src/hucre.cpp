/**
* Burak Can Evci 
* G211210091
* 2B
* 2. Ödev
* hucre.cpp
**/


#include "hucre.hpp"


hucreNode* hucre::FindPreviousByPosition(int index) {
    if (index < 0 || index > size) cout << "Listemiz bos";
    hucreNode *prv = head;
    int i = 1;
    for (hucreNode*itr = head; itr->next != NULL && i != index; itr = itr->next, i++) {
        prv = prv->next;
    }
    return prv;
}

hucre::hucre() {
    head = NULL;
    size = 0;
}


bool hucre::isEmpty()const {
    return size == 0;
}

int hucre::Count()const {
    return size;
}


void hucre::ekle(const int& dna) {
    insert(dna, size);
}

void hucre::insert(const int& dna, int index) {
    if (index < 0 || index > size) cout << "Listemiz bos";
    if (index == 0) {
        head = new hucreNode(dna, head);
        if (head->next != NULL) head->next->prev = head;
    } else {
        hucreNode *prv = FindPreviousByPosition(index);
        prv->next = new hucreNode(dna, prv->next, prv);
        if (prv->next->next != NULL)
            prv->next->next->prev = prv->next;
    }
    size++;
}

const int& hucre::ilk() {
    if (isEmpty()) cout << "Listemiz bos";
    return head->dna;   
}

const int& hucre::son() {
    if (isEmpty()) cout << "Listemiz bos";
    return FindPreviousByPosition(size)->dna;
}


void hucre::silme(int index) {
    if (index < 0 || index >= size) cout<<"Gecerli deger girin";
    hucreNode *del;
    if (index == 0) {
        del = head;
        head = head->next;
        if (head != NULL) head->prev = NULL;
    } else {
        hucreNode *prv = FindPreviousByPosition(index);
        del = prv->next;
        prv->next = del->next;
        if (del->next != NULL)
            del->next->prev = prv;
    }
    size--;
    delete del;
}

const int& hucre::elementAt(int index) {
    if (index < 0 || index >= size) cout << "Gecerli deger girin";
    if (index == 0) return head->dna;
    return FindPreviousByPosition(index)->next->dna;
}

int hucre::elemanSayisi() {
    int sayac = 0;
    for(hucreNode *hucreNode=this->head; hucreNode!=NULL; hucreNode=hucreNode->next) sayac++;
    return sayac;
    
} 





