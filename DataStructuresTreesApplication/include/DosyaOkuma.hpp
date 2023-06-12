/**
* Burak Can Evci 
* G211210091
* 2B
* 2. Ödev
* DosyaOkuma.hpp
**/


#ifndef DOSYAOKUMA_HPP
#define DOSYAOKUMA_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

#include "hucre.hpp"
#include "doku.hpp"

class DosyaOkuma {
private:
    std::string DosyaAdi;
    int lineCount();
    hucre **lines;
    void readLine();
public:
    DosyaOkuma(std::string);
    ~DosyaOkuma();
    doku* FillDoku();



};

#endif 

