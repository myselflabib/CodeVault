import java.util.Scanner;

public class ATM {
    float Balance;
    int PIN = 1234;

    public void checkPin(){
        System.out.println("Enter your PIN: ");
        Scanner sc = new Scanner(System.in);
        int enterPin = sc.nextInt();

        if(enterPin == PIN){
            menu();
        }
        else{
            System.out.println("Invalid PIN");
        }

    }

    public void menu(){
        System.out.println("Enter your Choice: ");
        System.out.println("1. Check A/C Balance.");
        System.out.println("2. Withdraw Money.");
        System.out.println("3. Deposit Money.");
        System.out.println("4. EXIT");

        Scanner sc = new Scanner(System.in);
        int opt = sc.nextInt();

        if(opt ==1){
            checkBalance();
        }
        else if(opt == 2){
            withDraw();
        }

        else if(opt == 3){
            depositMoney();
        }
        else if(opt == 4){
            return;
        }

        else{
            System.out.println("Enter a valid Choice.");
        }
    }

    public void checkBalance(){
        System.out.println("Balance: "+ Balance);
        menu();
    }

    public void withDraw(){
        System.out.println("Enter Amount to Withdraw: ");
        Scanner sc = new Scanner(System.in);
        float amount = sc.nextFloat();
        if(amount>Balance){
            System.out.println("Insufficient Balance");
            menu();

        }
        else{
            Balance-=amount;
            System.out.println("Money Withdraw Successfull");
            menu();
        }
    }

    public void depositMoney(){
        System.out.println("Enter Amount to Deposit: ");
        Scanner sc = new Scanner(System.in);
        float amount = sc.nextFloat();
        Balance+=amount;
        System.out.println("Money Deposit Successfull");
        menu();
    }
}
