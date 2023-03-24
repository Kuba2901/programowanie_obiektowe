package zadanie4;

public class Obrot implements Transformacja {

    private final double alfa;

    public Obrot(double alfa) {
        this.alfa = alfa * 3.14;
    }

    @Override
    public Transformacja getTransformacjaOdwrotna() {
        return new Obrot(-alfa);
    }

    @Override
    public Punkt transformuj(Punkt punkt) {
        try {
            Punkt center = Uklad.getInstance().getCenter();

        // Translacja punktu
        Transformacja translacja = new Translacja(Punkt.O.getX() - center.getX(), Punkt.O.getY() - center.getY());

        // Nowy punkt przesuniety wzgledem centrum ukladu
        Punkt p1 = translacja.transformuj(punkt);


        // Obrot wzgledem (0,0)
        Punkt p2 =  new Punkt(p1.getX() * Math.cos(alfa) - p1.getY() * Math.sin(alfa), p1.getX() * Math.sin(alfa) + p1.getY() * Math.cos(alfa));

        System.out.println(p2);
        
        try {
            Transformacja odwrotna = translacja.getTransformacjaOdwrotna();
            Punkt p3 = odwrotna.transformuj(p2);
            return p3;
        } catch (BrakTransformacjiOdwrotnejException e) {
            e.printStackTrace();
            return new Punkt(0,0);
        }
        
        }
        catch (BrakUkladuException e) {
            e.printStackTrace();
            return new Punkt(0,0);

        }

    }

    public double getAlfa() {
        return alfa;
    }

    

    @Override
    public String toString() {
        return "Obrot o kat (" + alfa +")";
    }

}
