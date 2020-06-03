public class KattenAdapter implements Hondable {

    Katable kat;// an instance of Katable to convert it's behavior

    public KattenAdapter(Katable katAdaptee){
        this.kat = katAdaptee;
    }

    @Override
    public void loopt() {
        kat.klimt();
    }

    @Override
    public void blaft() {
        kat.miauwt();
    }

}
