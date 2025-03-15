#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Ram : public Komponen{

    private:
        int kapasitasGB;
        string ddr;


    public:
        Ram(){
        }

        Ram(string merk, string nama, int kapasitasGB, string ddr) : Komponen(merk, nama){
            this->kapasitasGB = kapasitasGB;
            this->ddr = ddr;
        }

        void setKapasitasGB(int kapasitasGB){
            this->kapasitasGB = kapasitasGB;
        }

        int getKapasitasGB(){
            return kapasitasGB;
        }

        void setDdr(string ddr){
            this->ddr = ddr;
        }

        string getDdr(){
            return ddr;
        }

        ~Ram(){
        }

};