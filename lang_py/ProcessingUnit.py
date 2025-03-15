from Komponen import Komponen

class ProcessingUnit(Komponen):

    def __init__(self, merk, nama, jumlahCore, kecepatanGHz, tipeUnit):
        super().__init__(merk, nama)
        self.jumlahCore = jumlahCore
        self.kecepatanGHz = kecepatanGHz
        self.tipeUnit = tipeUnit

    def setJumlahCore(self, jumlahCore):
        self.jumlahCore = jumlahCore

    def getJumlahCore(self):
        return self.jumlahCore
    
    def setKecepatanGHz(self, kecepatanGHz):
        self.kecepatanGHz = kecepatanGHz

    def getKecepatanGHz(self):
        return self.kecepatanGHz
    
    def setTipeUnit(self, tipeUnit):
        self.tipeUnit = tipeUnit

    def getTipeUnit(self):
        return self.tipeUnit