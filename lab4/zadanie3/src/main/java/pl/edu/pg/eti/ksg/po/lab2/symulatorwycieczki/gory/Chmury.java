package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.Wedrowka;

/**
 *
 * @author TB
 */
public class Chmury extends Wedrowka{

    public Chmury(double odleglosc) {
        super(odleglosc);
    }

    @Override
    public double modyfikujPredkoscGrupy(double predkosc) {
        return predkosc*0.8;
    }

    @Override
    public int getTrudnoscNawigacyjna() {
        // 2 - wymaga umiejętności, ale szybsze poruszanie
        return 2;
    }    

    @Override
    public String getNazwa() {
        return "Chmury";
    }
    
}
