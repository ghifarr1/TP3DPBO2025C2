class ProcessingUnit extends Komponen{

    private int jumlahCore;
    private double kecepatanGHz;
    private String tipeUnit;

    public ProcessingUnit(){
    }

    public ProcessingUnit(String merk, String nama, int jumlahCore, double kecepatanGHz, String tipeUnit){
        super(merk, nama);
        this.jumlahCore = jumlahCore;
        this.kecepatanGHz = kecepatanGHz;
        this.tipeUnit = tipeUnit;
    }

    public void setJumlahCore(int jumlahCore){
        this.jumlahCore = jumlahCore;
    }

    public int getJumlahCore(){
        return jumlahCore;
    }

    public void setKecepatanGHz(double kecepatanGHz){
        this.kecepatanGHz = kecepatanGHz;
    }

    public double getKecepatanGHz(){
        return kecepatanGHz;
    }

    public void setTipeUnit(String tipeUnit){
        this.tipeUnit = tipeUnit;
    }

    public String getTipeUnit(){
        return tipeUnit;
    }

}