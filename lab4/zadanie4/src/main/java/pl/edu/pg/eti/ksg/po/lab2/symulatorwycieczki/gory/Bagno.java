package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Wedrowka;

/**
 *
 * @author TB
 */
public class Bagno extends Wedrowka{

    public Bagno(double odleglosc) {
        super(odleglosc);
    }

    @Override
    public double modyfikujPredkoscGrupy(double predkosc) {
        //Brak modyfikacji
        return predkosc*0.5;
    }

    @Override
    public int getTrudnoscNawigacyjna() {
        // 5 - najtrudniejsza
        return 4;
    }    

    @Override
    public String getNazwa() {
        return "Bagno";
    }
    
}
