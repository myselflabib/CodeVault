import java.io.PrintWriter;
import java.io.IOException;

public class PrintWriterExample {
    public static void main(String[] args) {
        try {
            PrintWriter pw = new PrintWriter("/Users/labib/Desktop/CodeVault/OOP_java/AMY_MAM/File/file/print.txt");

            pw.println("PrintWriter is easy");
            pw.println(100);
            pw.println(45.67);
            pw.println(true);

            pw.close();
            System.out.println("Data written using PrintWriter");

        } catch (IOException e) {
            System.out.println(e);
        }
    }
}
