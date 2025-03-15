#pragma once
#include <iostream>
#include <string>
#include "ProcessingUnit.cpp"

using namespace std;

class Gpu : public ProcessingUnit{

    private:
        int vramGB;


    public:
        Gpu(){
        }

        Gpu(string merk, string nama, int jumlahCore, float kecepatanGHz, string tipeUnit, int vramGB) : ProcessingUnit(merk, nama, jumlahCore, kecepatanGHz, tipeUnit){
            this->vramGB = vramGB;
        }

        void setVramGB(int vramGB){
            this->vramGB = vramGB;
        }

        int getVramGB(){
            return vramGB;
        }

        ~Gpu(){
        }

};