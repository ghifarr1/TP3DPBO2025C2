import java.util.ArrayList;
import java.util.List;

class Komputer{

    private String nama;
    private Cpu cpu;
    private List<Ram> ramList;
    private List<Harddrive> harddriveList;

    public Komputer(){
        this.ramList = new ArrayList<>();
        this.harddriveList = new ArrayList<>();
    }

    public Komputer(String nama, Cpu cpu, List<Ram> ramList, List<Harddrive> harddriveList){
        this.nama = nama;
        this.cpu = cpu;
        this.ramList = ramList;
        this.harddriveList = harddriveList;
    }

    public void setNama(String nama){
        this.nama = nama;
    }

    public String getNama(){
        return this.nama;
    }

    public void setCpu(Cpu cpu){
        this.cpu = cpu;
    }

    public Cpu getCpu(){
        return this.cpu;
    }

    public void setRamList(List<Ram> ramList){
        this.ramList = ramList;
    }

    public List<Ram> getRamList(){
        return this.ramList;
    }

    public void addRam(Ram ram){
        this.ramList.add(ram);
    }

    public void setHardDriveList(List<Harddrive> harddriveList){
        this.harddriveList = harddriveList;
    }

    public List<Harddrive> getHardDriveList(){
        return this.harddriveList;
    }

    public void addHardDrive(Harddrive harddrive){
        this.harddriveList.add(harddrive);
    }

}