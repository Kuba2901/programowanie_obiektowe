package zadanie3;

public class Main {
    public static void main(String[] args) {
        Punkt p1 = Punkt.E_X;
        System.out.println(p1);
        Transformacja tr2 = new Obrot(180);
        Punkt p2 = tr2.transformuj(p1);
        System.out.println(tr2);
        System.out.println(p2);
        
        Transformacja tr3 = new Obrot(-180);
        Punkt p3 = tr3.transformuj(p2);
        System.out.println(p3);

        
    }

}