import java.io.*;

public class fileReader {
    public static void main(String[] args) {
        try{
            FileReader r = new FileReader("/Users/labib/Desktop/CodeVault/OOP0_java/AMY_MAM/File/file/abc.txt");

            try{
                int i;
                while((i=r.read())!=-1){
                    System.out.print(((char)i));
                }
            }
            finally{
                r.close();
            }
        }
        catch(IOException e){
            System.out.println("Exception Handled");
        }
    }
}
