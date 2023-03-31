package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Wedrowka;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.atrakcje.Atrakcja;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.Droga;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy.Silownia;

/**
 *
 * @author TB
 */
public class Trapkowski extends Czlowiek{

    public Trapkowski(String imie, String nazwisko, Plec plec) {
        super(imie, nazwisko, plec, 300);
    }

    protected Trapkowski(String imie, String nazwisko, Plec plec, double maksymalnaPredkosc) {
        super(imie, nazwisko, plec, maksymalnaPredkosc);
    }

    protected Trapkowski(String imie, String nazwisko, Plec plec, double maksymalnaPredkosc, double czasPelnejRegeneracji, double czasPelnegoZmeczenia) {
        super(imie, nazwisko, plec, maksymalnaPredkosc, czasPelnejRegeneracji, czasPelnegoZmeczenia);
    }    

    @Override
    public int getUmiejetnosciNawigacyjne() {
        return 1;
    }

    @Override
    public void reagujNaWedrowke(Wedrowka w, double czas) {
            if (w instanceof Droga) {
                mow("Znowu chodzenie??");
            } 
            super.reagujNaWedrowke(w, czas);
    }

    @Override
    public void reagujNaAtrakcje(Atrakcja a, double czas) {
        if (a instanceof Silownia) {
            mow("Silownia to moja pasja...");
        }

        super.reagujNaAtrakcje(a, czas);
    }
    
    
}
