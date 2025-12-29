import java.io.*;
public class fileInfo {
    public static void main(String[] args) {
        File f = new File("/Users/labib/Desktop/CodeVault/OOP_java/AMY_MAM/File/file/abc.txt");

        if(f.exists()){
            System.out.println("File name: "+f.getName());
            System.out.println("File Location: "+f.getAbsolutePath());
            System.out.println("File Writable: "+f.canWrite());
            System.out.println("File Readable: "+f.canRead());
            System.out.println("File size: "+f.length());
            System.out.println("File Delete: "+f.delete());
            
        }

        else{
            System.out.println("file doesnot exist");
        }
    }
}
