#pragma once
#include <iostream>
#include <string>
#include "ProcessingUnit.cpp"

using namespace std;

class Cpu : public ProcessingUnit{

    private:
        int cacheSizeMB;

    
    public:
        Cpu(){
        }

        Cpu(string merk, string nama, int jumlahCore, float kecepatanGHz, string tipeUnit, int cacheSizeMB) : ProcessingUnit(merk, nama, jumlahCore, kecepatanGHz, tipeUnit){
            this->cacheSizeMB = cacheSizeMB;
        }
        
        void setCacheSizeMB(int cacheSizeMB){
            this->cacheSizeMB = cacheSizeMB;
        }

        int getCacheSizeMB(){
            return cacheSizeMB;
        }

        ~Cpu(){
        }

};