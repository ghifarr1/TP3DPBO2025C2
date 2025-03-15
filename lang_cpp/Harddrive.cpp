#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Harddrive : public Komponen{

    private:
        int kapasitasGB;
        string tipeDrive;


    public:
        Harddrive(){
        }

        Harddrive(string merk, string nama, int kapasitasGB, string tipeDrive) : Komponen(merk, nama){
            this->kapasitasGB = kapasitasGB;
            this->tipeDrive = tipeDrive;
        }

        void setKapasitasGB(int kapasitasGB){
            this->kapasitasGB = kapasitasGB;
        }

        int getKapasitasGB(){
            return kapasitasGB;
        }

        void setTipeDrive(string tipeDrive){
            this->tipeDrive = tipeDrive;
        }

        string getTipeDrive(){
            return tipeDrive;
        }

        ~Harddrive(){
        }

};