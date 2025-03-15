import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        
        // Membuat objek PC Gaming
        Cpu cpu = new Cpu("Intel", "Core i7", 8, 3.4, "CPU Unit", 512);
        Ram ram1 = new Ram("Corsair", "Vengeance", 16, "DDR5");
        Harddrive harddrive1 = new Harddrive("Samsung", "Evo", 1024, "SSD");
        Gpu gpu1 = new Gpu("Nvidia", "RTX 2060", 6, 6.0, "GPU Unit", 128);
        
        // Membuat list untuk komponen-komponen PcGaming
        List<Ram> pcRamList = new ArrayList<>();
        pcRamList.add(ram1);
        pcRamList.add(new Ram("Corsair", "Vengeance", 8, "DDR4"));
        
        List<Harddrive> pcHarddriveList = new ArrayList<>();
        pcHarddriveList.add(harddrive1);
        pcHarddriveList.add(new Harddrive("Samsung", "Evo", 512, "HDD"));
        
        List<Gpu> pcGpuList = new ArrayList<>();
        pcGpuList.add(gpu1);
        pcGpuList.add(new Gpu("Nvidia", "RTX 3060", 8, 8.0, "GPU Unit", 128));
        
        List<String> pcGameList = new ArrayList<>();
        pcGameList.add("GTA V");
        pcGameList.add("Apex");
        
        PcGaming pcGaming1 = new PcGaming("PC Abdul", cpu, pcRamList, pcHarddriveList, "PFX-213K", pcGpuList, pcGameList);

        // Menambahkan komponen tambahan ke PcGaming
        pcGaming1.addRam(new Ram("Kingston", "FURY", 16, "DDR5"));
        pcGaming1.addHardDrive(new Harddrive("Toshiba", "Canvio", 512, "HDD"));
        pcGaming1.addGpu(new Gpu("MSI Gaming", "GTX 1650", 4, 6.0, "GPU Unit", 64));
        pcGaming1.addGame("Marvel Rivals");
        pcGaming1.addGame("Balatro");
        
        System.out.println("=========================================================================");
        System.out.println("Informasi PC Gaming:");
        System.out.println("Nama             : " + pcGaming1.getNama());
        
        Cpu pcCpu = pcGaming1.getCpu();
        System.out.println("CPU              : " + pcCpu.getMerk() + " " + pcCpu.getNama() +
                           " (" + pcCpu.getJumlahCore() + " Core) " +
                           "~" + pcCpu.getKecepatanGHz() + "GHz " +
                           "Type: " + pcCpu.getTipeUnit() + " (" + pcCpu.getCacheSizeMB() + "MB)");
        
        System.out.println("RAM              : ");
        for (Ram ram : pcGaming1.getRamList()) {
            System.out.println(" -> " + ram.getMerk() + " " + ram.getNama() +
                               " (" + ram.getKapasitasGB() + " GB) " + ram.getDdr());
        }
        
        System.out.println("Hard Drive       : ");
        for (Harddrive hd : pcGaming1.getHardDriveList()) {
            System.out.println(" -> " + hd.getMerk() + " " + hd.getNama() +
                               " (" + hd.getKapasitasGB() + " GB) " + hd.getTipeDrive());
        }
        
        System.out.println("Kode Performance : " + pcGaming1.getKodePerformance());
        
        System.out.println("GPU              : ");
        for (Gpu gpu : pcGaming1.getGpuList()) {
            System.out.println(" -> " + gpu.getMerk() + " " + gpu.getNama() +
                               " (" + gpu.getJumlahCore() + " Core) " +
                               "~" + gpu.getKecepatanGHz() + "GHz " +
                               "Type: " + gpu.getTipeUnit() + " (" + gpu.getVramGB() + " GB VRAM)");
        }
        
        System.out.println("Game             : ");
        for (String game : pcGaming1.getListDaftarGame()) {
            System.out.println(" -> " + game);
        }
        System.out.println("=========================================================================");
        
        // Membuat objek Laptop
        Cpu laptopCpu = new Cpu("Intel", "Core i5", 6, 2.9, "CPU Unit", 256);
        Ram laptopRam1 = new Ram("Crucial", "Ballistix", 8, "DDR4");
        Harddrive laptopHDD = new Harddrive("WD", "Blue", 512, "SSD");
        
        List<Ram> laptopRamList = new ArrayList<>();
        laptopRamList.add(laptopRam1);
        laptopRamList.add(new Ram("Kingston", "FURY", 8, "DDR4"));
        
        List<Harddrive> laptopHarddriveList = new ArrayList<>();
        laptopHarddriveList.add(laptopHDD);
        laptopHarddriveList.add(new Harddrive("Seagate", "BarraCuda", 1024, "HDD"));
        
        // Asumsikan konstruktor Laptop: 
        // Laptop(String nama, Cpu cpu, List<Ram> ramList, List<Harddrive> harddriveList, 
        //        String kodePortable, int beratKG, int ukuranInci)
        Laptop laptop1 = new Laptop("Asus ROG Zephyrus", laptopCpu, laptopRamList, laptopHarddriveList, "LPX-500A", 2, 15);
        
        System.out.println("\n=========================================================================");
        System.out.println("Informasi Laptop:");
        System.out.println("Nama             : " + laptop1.getNama());
        
        Cpu lapCpu = laptop1.getCpu();
        System.out.println("CPU              : " + lapCpu.getMerk() + " " + lapCpu.getNama() +
                           " (" + lapCpu.getJumlahCore() + " Core) " +
                           "~" + lapCpu.getKecepatanGHz() + "GHz " +
                           "Type: " + lapCpu.getTipeUnit() + " (" + lapCpu.getCacheSizeMB() + "MB)");
        
        System.out.println("RAM              : ");
        for (Ram ram : laptop1.getRamList()) {
            System.out.println(" -> " + ram.getMerk() + " " + ram.getNama() +
                               " (" + ram.getKapasitasGB() + " GB) " + ram.getDdr());
        }
        
        System.out.println("Hard Drive       : ");
        for (Harddrive hd : laptop1.getHardDriveList()) {
            System.out.println(" -> " + hd.getMerk() + " " + hd.getNama() +
                               " (" + hd.getKapasitasGB() + " GB) " + hd.getTipeDrive());
        }
        
        System.out.println("Kode Portable    : " + laptop1.getKodePortable());
        System.out.println("Berat            : " + laptop1.getBeratKG() + " KG");
        System.out.println("Ukuran Layar     : " + laptop1.getUkuranInci() + " inci");
        System.out.println("=========================================================================");
    }

}
