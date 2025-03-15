from Komponen import Komponen

class Harddrive(Komponen):

    def __init__(self, merk, nama, kapasitasGB, tipeDrive):
        super().__init__(merk, nama)
        self.kapasitasGB = kapasitasGB
        self.tipeDrive = tipeDrive

    def setKapasitasGB(self, kapasitasGB):
        self.kapasitasGB = kapasitasGB

    def getKapasitasGB(self):
        return self.kapasitasGB
    
    def setTipeDrive(self, tipeDrive):
        self.tipeDrive = tipeDrive
    
    def getTipeDrive(self):
        return self.tipeDrive
    
