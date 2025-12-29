import java.io.FileOutputStream;
import java.io.IOException;

public class FileOutputStreamExample {
    public static void main(String[] args) {
        try {
            FileOutputStream fos =
                    new FileOutputStream("/Users/labib/Desktop/CodeVault/OOP_java/AMY_MAM/File/file/fileoutput.txt");

            String data = "FileOutputStream works with bytes";
            fos.write(data.getBytes());

            fos.close();
            System.out.println("Data written using FileOutputStream");

        } catch (IOException e) {
            System.out.println(e);
        }
    }
}
