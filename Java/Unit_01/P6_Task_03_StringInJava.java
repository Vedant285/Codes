import java.util.*;

public class P6_Task_03_StringInJava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String[] words = s.split(" ");
        StringBuilder rev = new StringBuilder();
        for (int i = words.length - 1; i >= 0; i--) {
            rev.append(words[i]).append(" ");
        }
        System.out.println(rev.toString().trim());
    }
}
