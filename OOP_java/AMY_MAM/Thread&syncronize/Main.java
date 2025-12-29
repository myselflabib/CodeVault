import java.lang.classfile.instruction.TableSwitchInstruction;

class Music extends Thread {
    public void run() {
        try{
            for(int i = 0; i<5; i++){
            System.out.println("Mughdo");
            Thread.sleep(1000);
            }

        }
        catch(InterruptedException e){

        }
    }
}

class Cooking extends Thread {
    public void run() {
        try{
            for(int i = 0; i<5; i++){
            System.out.println("Hadi");
            Thread.sleep(1000);
            }
        }
        catch(InterruptedException e){

        }
    }
}

public class Main {
    public static void main(String[] args) {
        // Music t1 = new Music();
        // Cooking t2 = new Cooking();
        // TClass t3 = new TClass();

        // t3.start();
        // t1.start(); // Starts playing music
        // t2.start(); // Starts cooking immediately, doesn't wait for music
        
        // TScedular t1 = new TScedular();
        // TScedular t2 = new TScedular();
        // TScedular t3 = new TScedular();

        // t1.setName("Thread 1");
        // t2.setName("Thread 2");
        // t3.setName("Thread 3");

        // t1.start();
        // t2.start();
        // t3.start();

        Person p1 = new Person("Labib", 23);
        Person p2 = new Person();
        Person p3 = new Person(45);
        Person p4 = new Person(45);
        Person p5 = new Person(45);
    }
}