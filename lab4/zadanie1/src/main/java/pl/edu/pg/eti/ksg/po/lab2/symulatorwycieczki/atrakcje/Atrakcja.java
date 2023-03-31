package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.atrakcje;

import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.ElementWycieczki;

public abstract class Atrakcja implements ElementWycieczki {
    private double czas;

    public Atrakcja(double czas) {
        this.czas = czas;
    }

    public double getCzas() {
        return czas;
    }
}
