/**
* Burak Can Evci 
* G211210091
* 2B
* 2. Ödev
* doku.cpp
**/

#include "doku.hpp"

dokuNode* doku::FindPreviousByPosition(int index) {
    if (index < 0 || index > size) cout << "Gecerli deger girin";
    dokuNode *prv = head;
    int i = 1;
    for (dokuNode *itr = head; itr->next != NULL && i != index; itr = itr->next, i++) {
        prv = prv->next;
    }
    return prv;
}

dokuNode* doku::FindPosition(int index) {
    if (index < 0 || index >= size) cout << "Gecerli deger girin";
    return this->FindPreviousByPosition(index + 1);

}

doku::doku() {
    head = NULL;
    size = 0;
}

bool doku::isEmpty()const {
    return size == 0;
}

int doku::Count()const {
    return size;
}


void doku::insert(int index, hucre*& item) {
    if (index < 0 || index > size) cout << "Gecerli deger girin";
    if (index == 0) {
        head = new dokuNode(item, head);
        if (head->next != NULL) head->next->prev = head;
    } else {
        dokuNode *prv = FindPreviousByPosition(index);
        prv->next = new dokuNode(item, prv->next, prv);
        if (prv->next->next != NULL)
            prv->next->next->prev = prv->next;
    }
    size++;
}



void doku::ekle(hucre*& item) {
    insert(size, item);
}



int doku::indexOf(hucre*& item) {
    int index = 0;
    for (dokuNode *itr = head; itr != NULL; itr = itr->next) {
        if (itr->data == item) return index;
        index++;
    }
    cout << "Gecerli deger girin";
}


hucre*& doku::first() {
    if (isEmpty()) cout << "Listemiz bos";;
    return head->data;
}   

hucre*& doku::last() {
    if (isEmpty()) cout << "Listemiz bos";;
    return FindPreviousByPosition(size)->data;
}

void doku::silme(int index) {
    if (index < 0 || index >= size) cout << "Gecerli deger girin";
    dokuNode *del;
    if (index == 0) {
        del = head;
        head = head->next;
        if (head != NULL) head->prev = NULL;
    } else {
        dokuNode *prv = FindPreviousByPosition(index);
        del = prv->next;
        prv->next = del->next;
        if (del->next != NULL)
            del->next->prev = prv;
    }
    size--;
    delete del;
}

void doku::DugumTasi(int from, int to) {
    if (from < 0 || from >= size) cout << "Gecerli deger girin";;
    dokuNode *del;
    if (from == 0) {
        del = head;
        head = head->next;
        if (head != NULL) head->prev = NULL;
    } else {
        dokuNode *prv = FindPreviousByPosition(from);
        del = prv->next;
        prv->next = del->next;
        if (del->next != NULL)
            del->next->prev = prv;
    }
    size--;
    if (to < 0 || to > size) cout << "Gecerli deger girin";
    if (to == 0) {

        del->next = head;
        del->prev = NULL;
        head = del;
        if (head->next != NULL) head->next->prev = head;
    } else {
        dokuNode *prv = FindPreviousByPosition(to);

        del->next = prv->next;
        del->prev = prv;
        prv->next = del;
        if (prv->next->next != NULL)
            prv->next->next->prev = prv->next;
    }
    size++;
}

hucre*& doku::elementAt(int index) {
    if (index < 0 || index >= size) cout << "Gecerli deger girin";
    if (index == 0) return head->data;
    return FindPreviousByPosition(index)->next->data;
}
