import java.util.Scanner;

public class Encapsulation {
    private String name = "Labib";
    private int age = 22;

    void setName(String name){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter admin pass: ");
        int pass = sc.nextInt();
        if(pass==123){
            this.name = name;
        }
        else{
            System.out.println("you enter Wrong pass Or youre not admin.");
        }
    }
    void setAge(int age){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter admin pass: ");
        int pass = sc.nextInt();
        if(pass==123){
            this.age = age;
        }
        else{
            System.out.println("you enter Wrong pass Or youre not admin.");
        }
    }

    String getName(){
        return this.name;
    }

    int getAge(){
        return this.age;
    }

}
