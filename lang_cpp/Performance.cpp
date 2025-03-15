#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Gpu.cpp"

using namespace std;

class Performance{

    private:
        string kodePerformance;
        vector<Gpu> gpuList;


    public:
        Performance(){
        }

        Performance(string kodePerformance, vector<Gpu> gpuList){
            this->kodePerformance = kodePerformance;
            this->gpuList = gpuList;
        }

        void setKodePerformance(string kodePerformance){
            this->kodePerformance = kodePerformance;
        }

        string getKodePerformance(){
            return kodePerformance;
        }

        void setGpuList(vector<Gpu> gpuList){
            this->gpuList = gpuList;
        }

        vector<Gpu> getGpuList(){
            return gpuList;
        }

        void addGpu(Gpu gpu){
            this->gpuList.push_back(gpu);
        }

        ~Performance(){
        }

};