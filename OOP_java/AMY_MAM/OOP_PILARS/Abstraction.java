public class Abstraction {
    public static void main(String[] args) {
        BMW b1 = new BMW();
        b1.start();
    }
}

class BMW extends car{
    void start(){
        System.out.println("BMW is running...");
    }
}

class audi extends car{
    @Override
    void start() {
        System.out.println("Audi is running..");
    }
}
abstract class car{
    abstract void start(); 
}
