from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive

class Komputer:

    def __init__(self, nama, cpu, ramList, harddriveList):
        self.nama = nama
        self.cpu = cpu
        self.ramList = ramList
        self.harddriveList = harddriveList

    def setNama(self, nama):
        self.nama = nama

    def getNama(self):
        return self.nama
    
    def setCpu(self, cpu):
        self.cpu = cpu

    def getCpu(self):
        return self.cpu
    
    def setRamList(self, ramList):
        self.ramList = ramList

    def getRamList(self):
        return self.ramList

    def addRam(self, ram):
        self.ramList.append(ram)

    def setHardDriveList(self, harddriveList):
        self.harddriveList = harddriveList

    def getHardDriveList(self):
        return self.harddriveList
    
    def addHardDrive(self, harddrive):
        self.harddriveList.append(harddrive)