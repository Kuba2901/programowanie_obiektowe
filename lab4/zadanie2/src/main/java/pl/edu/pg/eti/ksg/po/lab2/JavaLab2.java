package pl.edu.pg.eti.ksg.po.lab2;

import java.util.HashSet;
import java.util.Set;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Grupa;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.SymulatorWycieczki;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Uczestnik;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Wycieczka;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.atrakcje.Atrakcja;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.Bagno;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.Chmury;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.Droga;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.Las;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.SankiZGory;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.TorSaneczkowy;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy.DrewnianaCerkiew;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.Czlowiek;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.PrzewodnikStudencki;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.Student;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie.StudentKSG;

/**
 *
 * @author TB
 */
public class JavaLab2 {
    public static void main(String[] args) {
        // Wycieczka w = doDydiowki();
        Wycieczka w = doLodzi();
        
        PrzewodnikStudencki przewodnik = new PrzewodnikStudencki("Stefan", "Długonogi", Czlowiek.Plec.MEZCZYZNA);
        Set<Uczestnik> uczestnicy = new HashSet<>();
        uczestnicy.add(new Student("Alojzy", "Mechanik", Czlowiek.Plec.MEZCZYZNA));
        uczestnicy.add(new Student("Ada", "Lovelace", Czlowiek.Plec.KOBIETA));
        uczestnicy.add(new Student("Jan", "Elektronik", Czlowiek.Plec.MEZCZYZNA));
        uczestnicy.add(new StudentKSG("Piotr","Teledetekcyjny", Czlowiek.Plec.MEZCZYZNA));
        
        Grupa g = new Grupa(przewodnik, uczestnicy);
        
        SymulatorWycieczki symulator = new SymulatorWycieczki(g, w);
        
        symulator.symuluj();
    }
    
    public static Wycieczka doDydiowki() {
        Wycieczka ret = new Wycieczka("Do Dydiówki");
        ret.dodajElementWycieczki(new Droga(1.0));
        ret.dodajElementWycieczki(new DrewnianaCerkiew("Smolnik"));
        ret.dodajElementWycieczki(new Droga(4.0));
//        ret.dodajElementWycieczki(new PrzeprawaPrzezRzeke(1.0));
//        ret.dodajElementWycieczki(new GestyLas(2.0));
        ret.dodajElementWycieczki(new Las(2.0));
        ret.dodajElementWycieczki(new Droga(5.0));
        
        return ret;
    }

    public static Wycieczka doLodzi() {
        Wycieczka ret = new Wycieczka("Do Łodzi");
        ret.dodajElementWycieczki(new Droga(1.0));
        ret.dodajElementWycieczki(new TorSaneczkowy("Tor saneczkowy"));
        ret.dodajElementWycieczki(new Chmury(4.0));
        ret.dodajElementWycieczki(new SankiZGory(4.0));
        ret.dodajElementWycieczki(new DrewnianaCerkiew("Drewniana cerkiew w Skierniewicach"));
        ret.dodajElementWycieczki(new Bagno(5.0));
        ret.dodajElementWycieczki(new Las(10.0));
        ret.dodajElementWycieczki(new Droga(5.0));
        
        return ret;
    }
   
}
