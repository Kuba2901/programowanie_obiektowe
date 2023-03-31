package zadanie4;

public class Punkt {
    private final double x,y;

    public Punkt(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof Punkt) {
            Punkt innyPunkt = (Punkt)obj;
            
            return x == innyPunkt.x && y == innyPunkt.y;
        }

        return false;
    }

    @Override
    public int hashCode() {
        return 60 * (Double.hashCode(x) + Double.hashCode(y)) + 13;
    }

    @Override
    public String toString() {
        return "Instancja Punktu(" + x + "," + y + ")";
    }

    public static final Punkt O = new Punkt(0,0);
    public static final Punkt E_X = new Punkt(1, 0);
    public static final Punkt E_Y = new Punkt(0, 1);

 }
