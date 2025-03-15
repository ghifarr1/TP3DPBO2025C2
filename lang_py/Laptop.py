from Komputer import Komputer
from Portable import Portable
from Cpu import Cpu
from Gpu import Gpu
from Ram import Ram
from Harddrive import Harddrive

class Laptop(Komputer, Portable):

    def __init__(self, nama, cpu, ramList, harddriveList, kodePortable, beratKG, ukuranInci):
        Komputer.__init__(self, nama, cpu, ramList, harddriveList)
        Portable.__init__(self, kodePortable, beratKG)
        self.ukuranInci = ukuranInci

    def setUkuranInci(self, ukuranInci):
        self.ukuranInci = ukuranInci

    def getUkuranInci(self):
        return self.ukuranInci