package zadanie4;

public class Main {
    public static void main(String[] args) {
            Punkt p1 = Punkt.E_X;
            System.out.println(p1);
            
            Transformacja tr = new Obrot(90);
            Punkt p2 = tr.transformuj(p1);
            System.out.println(p2);

            Transformacja tr2 = new Skalowanie(10, 10);
            Punkt p3 = tr2.transformuj(p2);
            System.out.println(p3);
            
            ZlozenieTransformacji zlozenieTransformacji = new ZlozenieTransformacji(2);
            
            zlozenieTransformacji.tab[0] = tr;
            zlozenieTransformacji.tab[1] = tr2;
            
            Punkt p4 = zlozenieTransformacji.transformuj(p3);
            System.out.println(p4);

            ZlozenieTransformacji zlozenieTransformacji2 = zlozenieTransformacji.getTransformacjaOdwrotna();
            Punkt p5 = zlozenieTransformacji2.transformuj(p4);
            System.out.println(p5);
        
    }

}