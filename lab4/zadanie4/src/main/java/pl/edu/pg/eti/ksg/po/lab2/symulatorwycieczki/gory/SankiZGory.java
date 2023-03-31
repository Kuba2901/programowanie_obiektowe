package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Wedrowka;

/**
 *
 * @author TB
 */
public class SankiZGory extends Wedrowka{

    public SankiZGory(double odleglosc) {
        super(odleglosc);
    }

    @Override
    public double modyfikujPredkoscGrupy(double predkosc) {
        return predkosc * 2;
    }

    @Override
    public int getTrudnoscNawigacyjna() {
        // 1 - zjedzaja
        return 1;
    }    

    @Override
    public String getNazwa() {
        return "Sanki z Gory";
    }
    
}
