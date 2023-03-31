package pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.gory.beskidy;
import pl.edu.pg.eti.ksg.po.lab2.symulatorwycieczki.atrakcje.Atrakcja;

public class DrewnianaCerkiew extends Atrakcja {
    private String nazwa;
    
    public DrewnianaCerkiew(String nowaNazwa) {
        super(0.5);
        this.nazwa = nowaNazwa;
    }

    public String getNazwa() {
        return nazwa;
    }
}
