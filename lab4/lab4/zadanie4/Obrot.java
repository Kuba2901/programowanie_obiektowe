package zadanie4;

public class Obrot implements Transformacja {

    private final double alfa;

    public Obrot(double alfa) {
        this.alfa = alfa;
    }

    @Override
    public Transformacja getTransformacjaOdwrotna() {
        return new Obrot(-alfa);
    }

    @Override
    public Punkt transformuj(Punkt p) {
        return new Punkt(p.getX() * Math.cos(alfa) - p.getY() * Math.sin(alfa), p.getX() * Math.sin(alfa) + p.getY() * Math.cos(alfa));
    }

    public double getAlfa() {
        return alfa;
    }

    

    @Override
    public String toString() {
        return "Obrot o kat (" + alfa +")";
    }

}
