package zadanie4;


public class Main {
    public static void main(String[] args) {
            Uklad uklad = Uklad.getInstance();
            uklad.setCenter(new Punkt(0,0));

            Punkt p1 = new Punkt(3,0);
            System.out.println(p1);
            
            // Transformacja tr = new Skalowanie(10, 10);
            Transformacja tr = new Obrot(2 );
            Punkt p2 = tr.transformuj(p1);
            System.out.println(p2);

                    
    }

}