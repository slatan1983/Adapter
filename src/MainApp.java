public class MainApp {

    public static void main(String args[]){

        Hondable labrador = new Labrador();
        labrador.loopt();
        labrador.blaft();


        Hondable siamees = new KattenAdapter(new Siamees());
        siamees.loopt();
        siamees.blaft();


        Hondable abessijn = new KattenAdapter(new Abessijn());
        abessijn.loopt();
        abessijn.blaft();

    }

}
