#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Komputer.cpp"
#include "Portable.cpp"
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"

using namespace std;

class Laptop : public Komputer, public Portable {

    private:
        int ukuranInci;

    
    public:
        Laptop(){
        }

        Laptop(string nama, Cpu cpu, vector<Ram> ramList, vector<Harddrive> harddriveList, string kodePortable, int beratKG, int ukuranInci) : Komputer(nama, cpu, ramList, harddriveList), Portable(kodePortable, beratKG){
            this->ukuranInci = ukuranInci;
        }

        void setUkuranInci(int ukuranInci){
            this->ukuranInci = ukuranInci;
        }

        int getUkuranInci(){
            return ukuranInci;
        }

        ~Laptop(){
        }
};