#pragma once
#include <iostream>
#include <string>

using namespace std;

class Portable{

    private:
        string kodePortable;
        int beratKG;

    
    public:
        Portable(){
        }

        Portable(string kodePortable, int beratKG){
            this->kodePortable = kodePortable;
            this->beratKG = beratKG;
        }
        
        void setKodePortable(string kodePortable){
            this->kodePortable = kodePortable;
        }

        string getKodePortable(){
            return kodePortable;
        }

        void setBeratKG(int beratKG){
            this->beratKG = beratKG;
        }

        int getBeratKG(){
            return beratKG;
        }

        ~Portable(){
        }

};