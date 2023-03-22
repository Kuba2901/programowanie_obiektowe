package zadanie1;

public class Main {
    public static void main(String[] args) {
        Punkt p1 = new Punkt(10, 20);

        // Wypisywanie informacji o klasie
        System.out.println(p1);

        // Gettery
        System.out.println(p1.getX());
        System.out.println(p1.getY());

        // Tworzenie instancji drugiego punktu
        Punkt p2 = new Punkt(10, 20);

        // Wypisywanie informacji o klasie
        System.out.println(p2);

        // Porownanie klas przez referencje
        System.out.println(p1 == p2);

        // Porownanie klas przez equals()
        System.out.println(p1.equals(p2));

        // hashcodes
        System.out.println(p1.hashCode());
        System.out.println(p2.hashCode());
        
        // Static points
        System.out.println(Punkt.E_X);
        System.out.println(Punkt.E_Y);
        System.out.println(Punkt.O);


    }
}
