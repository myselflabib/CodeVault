public class TClass extends Thread{
    public void run(){
        try{
            for(int i = 0; i<5; i++){
            System.out.println("LABIB");
            Thread.sleep(1000);
            }
        }
        catch(InterruptedException e){

        }
        
    }
}

