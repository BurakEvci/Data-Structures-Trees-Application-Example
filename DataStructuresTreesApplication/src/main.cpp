/**
* Burak Can Evci 
* G211210091
* 2B
* 2. Ödev
* main.cpp
**/

#include <iostream>
#include "DosyaOkuma.hpp"
#include "hucre.hpp"
#include "hucreNode.hpp"
#include "doku.hpp"
#include "dokuNode.hpp"
#include "Queue.hpp"
#include "Radix.hpp"
#include "bst.hpp"
using namespace std;

int main(int argc,char** argv){
    DosyaOkuma *dosyaoku = new DosyaOkuma("veriler.txt");
    doku *Doku = dosyaoku->FillDoku();
    Radix *radix;

    BST *organ = new BST();



    for(int i=0;i<32000;i++){
        if(i%20==0)
        {    

            if(organ->Check()==0)
            {
                cout << "#";
            }
        
            else
            {
                cout << " ";
            }
            organ->Clear();
        }
        if(i%2000==0)
        {
            cout << endl;
        }

        int dizi[Doku->elementAt(i)->elemanSayisi()];
        Doku->elementAt(i);

        for(int j=0;j<Doku->elementAt(i)->elemanSayisi();j++){
            dizi[j] = Doku->elementAt(i)->elementAt(j);
        }

        radix = new Radix(dizi,Doku->elementAt(i)->elemanSayisi());
        int *sirali = radix->Sort();

        
        organ->Add(sirali[(Doku->elementAt(i)->elemanSayisi()+1)/2-1]);
    
    }


}