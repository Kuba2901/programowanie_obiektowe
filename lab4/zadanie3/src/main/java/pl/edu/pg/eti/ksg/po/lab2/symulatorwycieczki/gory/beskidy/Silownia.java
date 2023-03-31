package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.atrakcje.Atrakcja;

public class Silownia extends Atrakcja {
    private String nazwa;
    
    public Silownia(String nowaNazwa) {
        super(4);
        this.nazwa = nowaNazwa;
    }

    public String getNazwa() {
        return nazwa;
    }
}
