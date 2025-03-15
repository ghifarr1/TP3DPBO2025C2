from Komputer import Komputer
from Performance import Performance
from Cpu import Cpu
from Gpu import Gpu
from Ram import Ram
from Harddrive import Harddrive

class PcGaming(Komputer, Performance):

    def __init__(self, nama, cpu, ramList, harddriveList, kodePerformance, gpuList, listDaftarGame):
        Komputer.__init__(self, nama, cpu, ramList, harddriveList)
        Performance.__init__(self, kodePerformance, gpuList)
        self.listDaftarGame = listDaftarGame

    def setListDaftarGame(self, listDaftarGame):
        self.listDaftarGame = listDaftarGame

    def getListDaftarGame(self):
        return self.listDaftarGame
    
    def addGame(self, game):
        self.listDaftarGame.append(game)
