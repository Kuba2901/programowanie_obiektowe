package zadanie4;

public class ZlozenieTransformacji implements Transformacja {
    public final Transformacja[] tab;
    private final int len;

    public ZlozenieTransformacji(int n) {
        this.len = n;
        this.tab = new Transformacja[n];
    }

    public ZlozenieTransformacji(Transformacja[] tab, int n) {
        this.len = n;
        this.tab = tab;
    }

    @Override
    public ZlozenieTransformacji getTransformacjaOdwrotna() {
        ZlozenieTransformacji trans1 = new ZlozenieTransformacji(len);

        for (int i = 0; i < len; i++) {
            try {
                trans1.tab[i] = tab[i].getTransformacjaOdwrotna();

            } catch (BrakTransformacjiOdwrotnejException e) {
                e.printStackTrace();
            }
        }

        return trans1;
    }


    @Override
    public Punkt transformuj(Punkt p) {
        Punkt p1 = p;

        for (int i = 0; i < len; i++) {
            p1 = tab[i].transformuj(p1);    
        }

        return p1;
    }
    

    @Override
    public String toString() {
        return "Zlozenie transformacji o dlugosci " + len + ".";
    }

}
