#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Komputer.cpp"
#include "Performance.cpp"
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"
#include "Gpu.cpp"

using namespace std;

class PcGaming : public Komputer, public Performance{

    private:
        vector<string> listDaftarGame;

    
    public:
        PcGaming(){
        }

        PcGaming(string nama, Cpu cpu, vector<Ram> ramList, vector<Harddrive> harddriveList, string kodePerformance, vector<Gpu> gpuList, vector<string> listDaftarGame) : Komputer(nama, cpu, ramList, harddriveList), Performance(kodePerformance, gpuList){
            this->listDaftarGame = listDaftarGame;
        }

        void setListDaftarGame(vector<string> listDaftar){
            this->listDaftarGame = listDaftar;
        }

        vector<string> getListDaftarGame(){
            return listDaftarGame;
        }

        void addGame(string game){
            listDaftarGame.push_back(game);
        }

        ~PcGaming(){
        }

};