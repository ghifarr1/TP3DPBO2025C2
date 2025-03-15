from ProcessingUnit import ProcessingUnit

class Cpu(ProcessingUnit):

    def __init__(self, merk, nama, jumlahCore, kecepatanGHz, tipeUnit, cacheSizeMB):
        super().__init__(merk, nama, jumlahCore, kecepatanGHz, tipeUnit)
        self.cacheSizeMB = cacheSizeMB

    def setCacheSizeMB(self, cacheSizeMB):
        self.cacheSizeMB = cacheSizeMB

    def getCacheSizeMB(self):
        return self.cacheSizeMB
    
    