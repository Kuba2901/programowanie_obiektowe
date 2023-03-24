package zadanie4;

public class Skalowanie implements Transformacja {
    private final double skalaX, skalaY;

    public Skalowanie(double skalaX, double skalaY) {
        this.skalaX = skalaX;
        this.skalaY = skalaY;
    }

    @Override
    public Transformacja getTransformacjaOdwrotna() throws BrakTransformacjiOdwrotnejException {
        if (skalaX == 0 || skalaY == 0) {
            throw new BrakTransformacjiOdwrotnejException(
                "Brak transformacji odwrotnej. Przynajmniej jeden z czynnikow skalowania jest rowny 0."
            );
       } return new Skalowanie(1/skalaX, 1/skalaY);
    }

    @Override
    public Punkt transformuj(Punkt p) {
        try {
            Punkt center = Uklad.getInstance().getCenter();
            // Translacja punktu
            Transformacja translacja = new Translacja(Punkt.O.getX() - center.getX(), Punkt.O.getY() - center.getY());

            // Nowy punkt przesuniety wzgledem centrum ukladu
            Punkt p1 = translacja.transformuj(p);

            // Skalowanie po translacji
            Punkt p2 = new Punkt(skalaX * p1.getX(), skalaY * p1.getY());


            try {
                Transformacja odwrotna = translacja.getTransformacjaOdwrotna();
                Punkt p3 = odwrotna.transformuj(p2);
                return p3;
            } catch (BrakTransformacjiOdwrotnejException e) {
                e.printStackTrace();
            }
            } catch (BrakUkladuException e) {
                System.out.println(e.getStackTrace());
            }
        

        return new Punkt(0,0);

    }

    public double getSkalaX() {
        return skalaX;
    }

    public double getSkalaY() {
        return skalaY;
    }
     
    @Override
    public String toString() {
        return "Skalowanie " + skalaX + "x oraz " + skalaY + "y";
    }
}
