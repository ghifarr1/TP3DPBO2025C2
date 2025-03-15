class Cpu extends ProcessingUnit{

    private int cacheSizeMB;

    public Cpu(){
    }

    public Cpu(String merk, String nama, int jumlahCore, double kecepatanGHz, String tipeUnit, int cacheSizeMB){
        super(merk, nama, jumlahCore, kecepatanGHz, tipeUnit);
        this.cacheSizeMB = cacheSizeMB;
    }

    public void setCacheSizeMB(int cacheSizeMB){
        this.cacheSizeMB = cacheSizeMB;
    }

    public int getCacheSizeMB(){
        return cacheSizeMB;
    }

}