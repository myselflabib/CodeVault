public class TScedular extends Thread{
    public void run(){
        String n = Thread.currentThread().getName();
        for(int i = 0; i<3; i++){
            System.out.println(n);
        }
    }
}
