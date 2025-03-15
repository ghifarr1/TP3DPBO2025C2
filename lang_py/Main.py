from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Gpu import Gpu
from PcGaming import PcGaming
from Laptop import Laptop

def main():

    # Membuat objek PC Gaming
    cpu = Cpu("Intel", "Core i7", 8, 3.4, "CPU Unit", 512)
    ram1 = Ram("Corsair", "Vengeance", 16, "DDR5")
    harddrive1 = Harddrive("Samsung", "Evo", 1024, "SSD")
    gpu1 = Gpu("Nvidia", "RTX 2060", 6, 6.0, "GPU Unit", 128)
    
    PcGaming1 = PcGaming(
        "PC Abdul",
        cpu,
        [ram1, Ram("Corsair", "Vengeance", 8, "DDR4")],
        [harddrive1, Harddrive("Samsung", "Evo", 512, "HDD")],
        "PFX-213K",
        [gpu1, Gpu("Nvidia", "RTX 3060", 8, 8.0, "GPU Unit", 128)],
        ["GTA V", "Apex"]
    )
    
    # Menambahkan komponen tambahan ke PcGaming
    PcGaming1.addRam(Ram("Kingston", "FURY", 16, "DDR5"))
    PcGaming1.addHardDrive(Harddrive("Toshiba", "Canvio", 512, "HDD"))
    PcGaming1.addGpu(Gpu("MSI Gaming", "GTX 1650", 4, 6.0, "GPU Unit", 64))
    PcGaming1.addGame("Marvel Rivals")
    PcGaming1.addGame("Balatro")
    
    print("=" * 73)
    print("Informasi PC Gaming:")
    print("Nama             : ", PcGaming1.getNama())
    print("CPU              : ", PcGaming1.getCpu().getMerk(),
                                 PcGaming1.getCpu().getNama(),
                                 f"({PcGaming1.getCpu().getJumlahCore()} Core) ~{PcGaming1.getCpu().getKecepatanGHz()}GHz",
                                 "Type:", PcGaming1.getCpu().getTipeUnit(),
                                 f"({PcGaming1.getCpu().getCacheSizeMB()}MB)")
    
    print("RAM              :")
    for ram in PcGaming1.getRamList():
        print(" ->", ram.getMerk(), ram.getNama(), f"({ram.getKapasitasGB()} GB)", ram.getDdr())
    
    print("Hard Drive       :")
    for hd in PcGaming1.getHardDriveList():
        print(" ->", hd.getMerk(), hd.getNama(), f"({hd.getKapasitasGB()} GB)", hd.getTipeDrive())
    
    print("Kode Performance :", PcGaming1.getKodePerformance())
    
    print("GPU              :")
    for gpu in PcGaming1.getGpuList():
        print(" ->", gpu.getMerk(), gpu.getNama(), f"({gpu.getJumlahCore()} Core) ~{gpu.getKecepatanGHz()}GHz",
              "Type:", gpu.getTipeUnit(), f"({gpu.getVramGB()} GB VRAM)")
    
    print("Game             :")
    for game in PcGaming1.getListDaftarGame():
        print(" ->", game)
    print("=" * 73)
    
    # Membuat objek Laptop
    laptop_cpu = Cpu("Intel", "Core i5", 6, 2.9, "CPU Unit", 256)
    laptop_ram1 = Ram("Crucial", "Ballistix", 8, "DDR4")
    laptop_hdd = Harddrive("WD", "Blue", 512, "SSD")
    
    laptop1 = Laptop(
        "Asus ROG Zephyrus",
        laptop_cpu,
        [laptop_ram1, Ram("Kingston", "FURY", 8, "DDR4")],
        [laptop_hdd, Harddrive("Seagate", "BarraCuda", 1024, "HDD")],
        "LPX-500A",
        2,   # Berat dalam KG
        15   # Ukuran Layar dalam inci
    )
    
    print("\n" + "=" * 73)
    print("Informasi Laptop:")
    print("Nama             :", laptop1.getNama())
    print("CPU              :", PcGaming1.getCpu().getMerk(),
                                PcGaming1.getCpu().getNama(),
                                f"({PcGaming1.getCpu().getJumlahCore()} Core) ~{PcGaming1.getCpu().getKecepatanGHz()}GHz",
                                "Type:", PcGaming1.getCpu().getTipeUnit(),
                                f"({PcGaming1.getCpu().getCacheSizeMB()}MB)")
    
    print("RAM              :")
    for ram in laptop1.getRamList():
        print(" ->", ram.getMerk(), ram.getNama(), f"({ram.getKapasitasGB()} GB)", ram.getDdr())
    
    print("Hard Drive       :")
    for hd in laptop1.getHardDriveList():
        print(" ->", hd.getMerk(), hd.getNama(), f"({hd.getKapasitasGB()} GB)", hd.getTipeDrive())
    
    print("Kode Portable    :", laptop1.getKodePortable())
    print("Berat            :", f"{laptop1.getBeratKG()} KG")
    print("Ukuran Layar     :", f"{laptop1.getUkuranInci()} inci")
    print("=" * 73)

if __name__ == "__main__":
    main()
