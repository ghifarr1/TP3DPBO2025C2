#include <bits/stdc++.h>
#include "Komponen.cpp"
#include "Komputer.cpp"
#include "Performance.cpp"
#include "Portable.cpp"
#include "ProcessingUnit.cpp"
#include "Cpu.cpp"
#include "Gpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "PcGaming.cpp"
#include "Laptop.cpp"

using namespace std;

int main() {

    ios::sync_with_stdio(0); cin.tie();

    // Membuat objek PC Gaming
    Cpu cpu("Intel", "Core i7", 8, 3.4, "CPU Unit", 512);
    Ram ram1("Corsair", "Vengeance", 16, "DDR5");
    Harddrive harddrive1("Samsung", "Evo", 1024, "SSD");
    Gpu gpu1("Nvidia", "RTX 2060", 6, 6.0, "GPU Unit", 128);

    PcGaming PcGaming1("PC Abdul", cpu, {ram1, Ram("Corsair", "Vengeance", 8, "DDR4")}, {harddrive1, Harddrive("Samsung", "Evo", 512, "HDD")}, "PFX-213K", {gpu1, Gpu("Nvidia", "RTX 3060", 8, 8.0, "GPU Unit", 128)}, {"GTA V", "Apex"});
    PcGaming1.addRam(Ram("Kingston", "FURY", 16, "DDR5"));
    PcGaming1.addHardDrive(Harddrive("Toshiba", "Canvio", 512, "HDD"));
    PcGaming1.addGpu(Gpu("MSI Gaming", "GTX 1650", 4, 6.0, "GPU Unit", 64));
    PcGaming1.addGame("Marvel Rivals");
    PcGaming1.addGame("Balatro");

    cout << "=========================================================================" << endl;
    cout << "Informasi PC Gaming:" << endl;
    cout << "Nama             : " << PcGaming1.getNama() << endl;
    cout << "CPU              : " << PcGaming1.getCpu().getMerk() 
                           << " " 
                           << PcGaming1.getCpu().getNama() 
                           << " (" 
                           << PcGaming1.getCpu().getJumlahCore() 
                           << " Core) " 
                           << "~" 
                           << PcGaming1.getCpu().getKecepatanGHz() 
                           << "GHz" 
                           << " Type: " 
                           << PcGaming1.getCpu().getTipeUnit() 
                           << " (" 
                           << PcGaming1.getCpu().getCacheSizeMB() 
                           << "MB) "<< endl;

    cout << "RAM              : " << endl;
    for (Ram& ram : PcGaming1.getRamList()){
        cout << " -> "
             << ram.getMerk() 
             << " " 
             << ram.getNama() 
             << " (" 
             << ram.getKapasitasGB()
             << " GB) "
             << ram.getDdr() << endl;
    }

    cout << "Hard Drive       : " << endl;
    for (Harddrive& harddrive : PcGaming1.getHardDriveList()){
        cout << " -> "
             << harddrive.getMerk() 
             << " " 
             << harddrive.getNama() 
             << " (" 
             << harddrive.getKapasitasGB()
             << " GB) "
             << harddrive.getTipeDrive() << endl;
    }

    cout << "Kode Performance : " << PcGaming1.getKodePerformance() << endl;

    cout << "GPU              : " << endl;
    for (Gpu& gpu : PcGaming1.getGpuList()){
        cout << " -> "
             << gpu.getMerk() 
             << " " 
             << gpu.getNama() 
             << " (" 
             << gpu.getJumlahCore() 
             << " Core) " 
             << "~" 
             << gpu.getKecepatanGHz() 
             << "GHz" 
             << " Type: " 
             << gpu.getTipeUnit() 
             << " (" 
             << gpu.getVramGB() 
             << " GB VRAM) " << endl;
    }

    cout << "Game             : " << endl;
    for (string& game : PcGaming1.getListDaftarGame()){
        cout << " -> " << game << endl;
    }
    cout << "=========================================================================" << endl;

    // Membuat objek Laptop
    Cpu laptopCpu("Intel", "Core i5", 6, 2.9, "CPU Unit", 256);
    Ram laptopRam1("Crucial", "Ballistix", 8, "DDR4");
    Harddrive laptopHDD("WD", "Blue", 512, "SSD");

    Laptop laptop1("Asus ROG Zephyrus", laptopCpu, 
                  {laptopRam1, Ram("Kingston", "FURY", 8, "DDR4")}, 
                  {laptopHDD, Harddrive("Seagate", "BarraCuda", 1024, "HDD")}, 
                  "LPX-500A", 2, 15);

    cout << "\n=========================================================================" << endl;
    cout << "Informasi Laptop:" << endl;
    cout << "Nama             : " << laptop1.getNama() << endl;
    cout << "CPU              : " << laptop1.getCpu().getMerk() 
         << " " << laptop1.getCpu().getNama() 
         << " (" << laptop1.getCpu().getJumlahCore() 
         << " Core) ~" << laptop1.getCpu().getKecepatanGHz() 
         << "GHz Type: " << laptop1.getCpu().getTipeUnit() 
         << " (" << laptop1.getCpu().getCacheSizeMB() << "MB)" << endl;

    cout << "RAM              : " << endl;
    for (Ram& ram : laptop1.getRamList()){
        cout << " -> " << ram.getMerk() 
             << " " << ram.getNama() 
             << " (" << ram.getKapasitasGB()
             << " GB) " << ram.getDdr() << endl;
    }

    cout << "Hard Drive       : " << endl;
    for (Harddrive& harddrive : laptop1.getHardDriveList()){
        cout << " -> " << harddrive.getMerk() 
             << " " << harddrive.getNama() 
             << " (" << harddrive.getKapasitasGB()
             << " GB) " << harddrive.getTipeDrive() << endl;
    }

    cout << "Kode Portable    : " << laptop1.getKodePortable() << endl;
    cout << "Berat            : " << laptop1.getBeratKG() << " KG" << endl;
    cout << "Ukuran Layar     : " << laptop1.getUkuranInci() << " inci" << endl;
    cout << "=========================================================================" << endl;

    return 0;

}