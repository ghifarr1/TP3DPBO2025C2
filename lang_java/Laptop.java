import java.util.ArrayList;
import java.util.List;

class Laptop extends Komputer implements Portable{

    private String kodePortable;
    private int beratKG;
    private int ukuranInci;

    public Laptop(){
    }

    public Laptop(String nama, Cpu cpu, List<Ram> ramList, List<Harddrive> harddriveList, String kodePortable, int beratKG, int ukuranInci){
        super(nama, cpu, ramList, harddriveList);
        this.kodePortable = kodePortable;
        this.beratKG = beratKG;
        this.ukuranInci = ukuranInci;
    }

    @Override
    public void setKodePortable(String kodePortable){
        this.kodePortable = kodePortable;
    }

    @Override
    public String getKodePortable(){
        return kodePortable;
    }

    @Override
    public void setBeratKG(int beratKG){
        this.beratKG = beratKG;
    }

    @Override
    public int getBeratKG(){
        return beratKG;
    }

    public void setUkuranInci(int ukuranInci){
        this.ukuranInci = ukuranInci;
    }

    public int getUkuranInci(){
        return ukuranInci;
    }

}