#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class ProcessingUnit : public Komponen{

    private:
        int jumlahCore;
        float kecepatanGHz;
        string tipeUnit;

    
    public:
        ProcessingUnit(){
        }

        ProcessingUnit(string merk, string nama, int jumlahCore, float kecepatanGHz, string tipeUnit) : Komponen(merk, nama){
            this->jumlahCore = jumlahCore;
            this->kecepatanGHz = kecepatanGHz;
            this->tipeUnit = tipeUnit;
        }

        void setJumlahCore(int jumlahCore){
            this->jumlahCore = jumlahCore;
        }

        int getJumlahCore(){
            return jumlahCore;
        }

        void setKecepatanGHz(float kecepatanGHz){
            this->kecepatanGHz = kecepatanGHz;
        }

        float getKecepatanGHz(){
            return kecepatanGHz;
        }

        void setTipeUnit(string tipeUnit){
            this->tipeUnit = tipeUnit;
        }

        string getTipeUnit(){
            return tipeUnit;
        }

        ~ProcessingUnit(){
        }

};