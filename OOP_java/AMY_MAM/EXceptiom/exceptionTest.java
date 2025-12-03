conditions
import java.io.*;

public class exceptionTest {
    public static void main(String[] args) {
        try{
            int x = 100/0;
            System.out.println(x);
        }

        catch(ArithmeticException e){
            System.out.println();
            System.out.println("Cannot Devide by Zero!!!");
            System.out.println();
        }
    }
}
