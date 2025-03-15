from Komponen import Komponen

class Ram(Komponen):
    def __init__(self, merk, nama, kapasitasGB, ddr):
        super().__init__(merk, nama)
        self.kapasitasGB = kapasitasGB
        self.ddr = ddr

    def setKapasitasGB(self, kapasitasGB):
        self.kapasitasGB = kapasitasGB

    def getKapasitasGB(self):
        return self.kapasitasGB
    
    def setDdr(self, ddr):
        self.ddr = ddr

    def getDdr(self):
        return self.ddr