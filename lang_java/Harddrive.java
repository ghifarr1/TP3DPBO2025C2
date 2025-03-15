class Harddrive extends Komponen{

    private int kapasitasGB;
    private String tipeDrive;

    public Harddrive(){
    }

    public Harddrive(String merk, String nama, int kapasitasGB, String tipeDrive){
        super(merk, nama);
        this.kapasitasGB = kapasitasGB;
        this.tipeDrive = tipeDrive;
    }

    public void setKapasitasGB(int kapasitasGB){
        this.kapasitasGB = kapasitasGB;
    }

    public int getKapasitasGB(){
        return kapasitasGB;
    }

    public void setTipeDrive(String tipeDrive){
        this.tipeDrive = tipeDrive;
    }

    public String getTipeDrive(){
        return tipeDrive;
    }

}