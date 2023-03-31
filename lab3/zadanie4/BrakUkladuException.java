package zadanie4;

public class BrakUkladuException extends Exception{
    public BrakUkladuException() {}

    public BrakUkladuException(String message) {
        super(message);
    }

    public BrakUkladuException(Throwable cause) {
        super(cause);
    }

    public BrakUkladuException(String message, Throwable cause) {
        super(message, cause);
    }

    
}
