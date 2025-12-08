
import java.io.*;
import java.util.Scanner;

import javax.management.RuntimeErrorException;

public class exceptionTest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        if(age<18){
            throw new RuntimeException("You cannot vote");
        }
        else{
            System.out.println("You are elegible to vote!!");
        }








        // int dividen = sc.nextInt();
        // int divisor = sc.nextInt();

        // int arr[] = new int[5];

        // try{
        //     System.out.println("This is my first try block!!");
        //     try{
        //         arr[6]=10;
        //     }
        //     catch(Exception e){
        //         System.out.println(e.getMessage());
        //     }
        // }
        // catch(Exception e){
        //     System.out.println(e.getMessage());
        // }







        
        // try{
        //     arr[6]=10/0;
        // }
        // catch(ArrayIndexOutOfBoundsException | ArithmeticException e){
        //     System.out.println(e.getMessage());
        // }
    
        // try{
        //     int x = dividen/divisor;
        //     System.out.println(x);
        // }

        // catch(ArithmeticException e){
        //     System.out.println();
        //     System.out.println(e.getMessage());
        //     System.out.println();
        // }
    }
}
