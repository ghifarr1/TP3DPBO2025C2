from Gpu import Gpu

class Performance:

    def __init__(self, kodePerformance, gpuList):
        self.kodePerformance = kodePerformance
        self.gpuList = gpuList

    def setKodePerformance(self, kodePerformance):
        self.kodePerformance = kodePerformance

    def getKodePerformance(self):
        return self.kodePerformance
    
    def setGpuList(self, gpuList):
        self.gpuList = gpuList

    def getGpuList(self):
        return self.gpuList
    
    def addGpu(self, gpu):
        self.gpuList.append(gpu)