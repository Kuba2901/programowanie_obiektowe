package zadanie4;


public class Uklad {
    private Punkt center;
    private static Uklad instance;

    public Uklad() {
        instance = this;
    };

    public static Uklad getInstance()  {
        if(instance == null) {
            instance = new Uklad();
        }
        
        return instance;
    }

    public void setCenter(Punkt punkt) {
        this.center = punkt;
    }

    public Punkt getCenter() throws BrakUkladuException {
        if (center == null) {
            throw new BrakUkladuException(
                "Brak centrum ukladu"
            );
        } else {
            return center;
        }
    }


}
