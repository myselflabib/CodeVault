import java.io.*;

public class createFile {
    public static void main(String[] args) {
        File f = new File("/Users/labib/Desktop/CodeVault/OOP_java/AMY_MAM/File/file/abc.txt");

        try{
            if(f.createNewFile()){
            System.out.println("file create Successfully..!");
            }
            else{
            System.out.println("file already exists");
            }
        }

        catch(IOException e){
            System.out.println("Exception Handled..!");
        }
    }
}
