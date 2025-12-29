import java.io.*;

public class fileWrite {
    public static void main(String[] args) {
        try{
            FileWriter f = new FileWriter("/Users/labib/Desktop/CodeVault/OOP_java/AMY_MAM/File/file/abc.txt", true);
            try{
                f.write("Java programming is the best Language");
            }
            finally{
                f.close();
            }
            System.out.println("Succesfully data Wrote in file");
        }

        catch(IOException e){
            System.out.println(e);
        }
    }
}
