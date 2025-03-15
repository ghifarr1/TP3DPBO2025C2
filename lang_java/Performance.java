import java.util.List;

public interface Performance {

    // Deklarasi metode getter dan setter untuk kodePerformance
    String getKodePerformance();
    void setKodePerformance(String kodePerformance);
    
    // Deklarasi metode getter dan setter untuk gpuList
    List<Gpu> getGpuList();
    void setGpuList(List<Gpu> gpuList);
    
    // Deklarasi metode untuk menambahkan Gpu ke dalam list
    void addGpu(Gpu gpu);
}
