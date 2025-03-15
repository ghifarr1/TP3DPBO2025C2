class Gpu extends ProcessingUnit{

    private int vramGB;

    public Gpu(){
    }

    public Gpu(String merk, String nama, int jumlahCore, double kecepatanGHz, String tipeUnit, int vramGB){
        super(merk, nama, jumlahCore, kecepatanGHz, tipeUnit);
        this.vramGB = vramGB;
    }

    public void setVramGB(int vramGB){
        this.vramGB = vramGB;
    }

    public int getVramGB(){
        return vramGB;
    }

}