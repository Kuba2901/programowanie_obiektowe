package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ludzie;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Wedrowka;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.atrakcje.Atrakcja;

/**
 *
 * @author TB
 */
public class StudentAWF extends Czlowiek{

    public StudentAWF(String imie, String nazwisko, Plec plec) {
        super(imie, nazwisko, plec, 1000);
    }

    protected StudentAWF(String imie, String nazwisko, Plec plec, double maksymalnaPredkosc) {
        super(imie, nazwisko, plec, maksymalnaPredkosc);
    }

    protected StudentAWF(String imie, String nazwisko, Plec plec, double maksymalnaPredkosc, double czasPelnejRegeneracji, double czasPelnegoZmeczenia) {
        super(imie, nazwisko, plec, maksymalnaPredkosc, czasPelnejRegeneracji, czasPelnegoZmeczenia);
    }    

    @Override
    public int getUmiejetnosciNawigacyjne() {
        return 4;
    }

    @Override
    public void reagujNaWedrowke(Wedrowka w, double czas) {
            mow("Kocham biegac po kazdym terenie");
            super.reagujNaWedrowke(w, czas);
    }

    @Override
    public void reagujNaAtrakcje(Atrakcja a, double czas) {
        mow("Nie ma czasu na odpoczynek, trzeba trenowac!");

        super.reagujNaAtrakcje(a, czas);
    }
    
    
}
