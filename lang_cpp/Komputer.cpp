#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"

using namespace std;

class Komputer{

    private:
        string nama;
        Cpu cpu;
        vector<Ram> ramList;
        vector<Harddrive> harddrive;

    
    public:
        Komputer(){
        }

        Komputer(string nama, Cpu cpu, vector<Ram> ramList, vector<Harddrive> harddrive){
            this->nama = nama;
            this->cpu = cpu;
            this->ramList = ramList;
            this->harddrive = harddrive;
        }

        void setNama(string nama){
            this->nama = nama;
        }

        string getNama(){
            return nama;
        }

        void setCpu(Cpu cpu){
            this->cpu = cpu;
        }

        Cpu getCpu(){
            return cpu;
        }

        void setRamList(vector<Ram> ramList){
            this->ramList = ramList;
        }

        vector<Ram> getRamList(){
            return ramList;
        }

        void addRam(Ram ram){
            this->ramList.push_back(ram);
        }

        void setHardDriveList(vector<Harddrive> harddrive){
            this->harddrive = harddrive;
        }

        vector<Harddrive> getHardDriveList(){
            return harddrive;
        }

        void addHardDrive(Harddrive harddrive){
            this->harddrive.push_back(harddrive);
        }

        ~Komputer(){
        }

};