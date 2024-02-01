import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.File;
import java.util.*;

class Filehandling {
    // Total no. of character
    int totalChar = 0;

    // total no. of words
    int totalWords = 0;

    // total no of lines
    int totalLines = 0;

    void writeIntoFile() throws IOException {
        FileWriter myObj = null;
        try {
            myObj = new FileWriter("C:\\Users\\Sunit Dwivedi\\Documents\\code\\Java\\Unit_03\\output.txt");
        } catch (IOException e) {
            e.printStackTrace();
        }
        BufferedWriter f_writer = new BufferedWriter(myObj);
        String text = "Hello";
        f_writer.write(text);
        String txt = "\nTotal no of words in input file are: " + (totalWords + 1)
                + "\nTotal no of character in input file are: " + (totalChar + 1)
                + "\nTotal no of lines in input file are: "
                + (totalLines + 1);
        f_writer.write(txt);
        f_writer.close();
    }

    void performTasks() {
        try {
            String path = "C:\\Users\\Sunit Dwivedi\\Documents\\code\\Java\\Unit_03\\input.txt";
            File file = new File(path);
            FileReader obj = new FileReader(file);
            BufferedReader br = new BufferedReader(obj);
            int prev = 0;
            int next = 0;
            // Count no. of Words

            prev = br.read();
            while (prev != -1) {
                next = br.read();
                if ((prev == ' ' || prev == '\n') && (next != ' ')) {
                    totalWords++;
                }
                if (next == '\n')
                    totalLines++;
                prev = next;
                if (prev >= 65 && prev < 90 || prev >= 97 && prev <= 122)
                    totalChar++;
            }
            System.out.println("Total words"+totalWords + 1);
            System.out.println("Total Lines"+totalLines + 1);
            System.out.println("Total CHaracter "+totalChar + 1);
            br.close();
        } catch (Exception e) {
            System.out.println(" ");
        }
    }
}

public class P13_Task01_FileHandlingInJava {
    public static void main(String[] args) throws IOException {
        Filehandling f = new Filehandling();
        f.performTasks();
        f.writeIntoFile();
    }
}