package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Wedrowka;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.atrakcje.Atrakcja;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.Chmury;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.TorSaneczkowy;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy.DrewnianaCerkiew;

/**
 *
 * @author TB
 */
public class Architekt extends Czlowiek{

    public Architekt(String imie, String nazwisko, Plec plec) {
        super(imie, nazwisko, plec, .5);
    }

    protected Architekt(String imie, String nazwisko, Plec plec, double maksymalnaPredkosc) {
        super(imie, nazwisko, plec, maksymalnaPredkosc);
    }

    protected Architekt(String imie, String nazwisko, Plec plec, double maksymalnaPredkosc, double czasPelnejRegeneracji, double czasPelnegoZmeczenia) {
        super(imie, nazwisko, plec, maksymalnaPredkosc, czasPelnejRegeneracji, czasPelnegoZmeczenia);
    }    

    @Override
    public int getUmiejetnosciNawigacyjne() {
        return 1;
    }

    @Override
    public void reagujNaWedrowke(Wedrowka w, double czas) {
            if (w instanceof Chmury) {
                mow("Boje sie chmur");
            } 
            super.reagujNaWedrowke(w, czas);
    }

    @Override
    public void reagujNaAtrakcje(Atrakcja a, double czas) {
        if (a instanceof DrewnianaCerkiew) {
            mow("Boze jak ja kocham koscioly...");
        } else if (a instanceof TorSaneczkowy) {
            mow("Sanek tez sie boje...");
        }

        super.reagujNaAtrakcje(a, czas);
    }
    
    
}
