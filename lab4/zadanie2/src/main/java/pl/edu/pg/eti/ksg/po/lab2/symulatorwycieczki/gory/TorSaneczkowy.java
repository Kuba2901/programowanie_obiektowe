package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.atrakcje.Atrakcja;

public class TorSaneczkowy extends Atrakcja {
    private String nazwa;
    
    public TorSaneczkowy(String nowaNazwa) {
        super(2);
        this.nazwa = nowaNazwa;
    }

    public String getNazwa() {
        return nazwa;
    }
}
