import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;

public class BufferedWriterExample {
    public static void main(String[] args) {
        try {
            BufferedWriter bw = new BufferedWriter(
                    new FileWriter("/Users/labib/Desktop/CodeVault/OOP_java/AMY_MAM/File/file/abc.txt", true)
            );

            bw.write("BufferedWriter writes text fast");
            bw.newLine();
            bw.write("This is second line");
            bw.newLine();

            bw.close();
            System.out.println("Data written using BufferedWriter");

        } catch (IOException e) {
            System.out.println(e);
        }
    }
}
