from ProcessingUnit import ProcessingUnit

class Gpu(ProcessingUnit):

    def __init__(self, merk, nama, jumlahCore, kecepatanGHz, tipeUnit, vramGB):
        super().__init__(merk, nama, jumlahCore, kecepatanGHz, tipeUnit)
        self.vramGB = vramGB

    def setVramGB(self, vramGB):
        self.vramGB = vramGB

    def getVramGB(self):
        return self.vramGB
    
    