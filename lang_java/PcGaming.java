import java.util.ArrayList;
import java.util.List;

class PcGaming extends Komputer implements Performance{

    private String kodePerformance;
    private List<Gpu> gpuList;
    private List<String> listDaftarGame;

    public PcGaming(){
        this.gpuList = new ArrayList<>();
        this.listDaftarGame = new ArrayList<>();
    }    

    public PcGaming(String nama, Cpu cpu, List<Ram> ramList, List<Harddrive> harddriveList, String kodePerformance, List<Gpu> gpuList, List<String> listDaftarGame){
        super(nama, cpu, ramList, harddriveList);
        this.kodePerformance = kodePerformance;
        this.gpuList = gpuList;
        this.listDaftarGame = listDaftarGame;
    }

    @Override
    public void setKodePerformance(String kodePerformance){
        this.kodePerformance = kodePerformance;
    }

    @Override
    public String getKodePerformance(){
        return this.kodePerformance;
    }

    @Override
    public void setGpuList(List<Gpu> gpuList){
        this.gpuList = gpuList;
    }

    @Override
    public List<Gpu> getGpuList(){
        return this.gpuList;
    }

    @Override
    public void addGpu(Gpu gpu){
        this.gpuList.add(gpu);
    }

    public void setListDaftarGame(List<String> listDaftarGame){
        this.listDaftarGame = listDaftarGame;
    }

    public List<String> getListDaftarGame(){
        return this.listDaftarGame;
    }

    public void addGame(String game){
        this.listDaftarGame.add(game);
    }

}