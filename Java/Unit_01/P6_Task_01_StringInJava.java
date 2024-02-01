import java.util.*;

class Task_01 {
    void Palindrome() {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int k = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s.charAt(i) != s.charAt(k)) {
                System.out.println("No it is not a palindrome ");
                return;
            }
            k++;
        }
        System.out.println("Yes it is Palindrome ");
    }
}
public class P6_Task_01_StringInJava {
    public static void main(String[] args) {
        Task_01 a = new Task_01();
        a.Palindrome();
    }
}
