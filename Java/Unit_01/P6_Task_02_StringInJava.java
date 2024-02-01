import java.util.*;
class Task_02 {
    void Equal_String_Check() {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String k = sc.nextLine();
        int n = s.length(), m = k.length();
        int i = 0, j = 0;
        if (n > m || m > n) {
            System.out.println("Not equal ");
            return;
        }
        while (i < n && j < m) {
            if (s.charAt(i) != k.charAt(j)) {
                System.out.println("Not equal ");
                return;
            }
            i++;
            j++;
        }
        System.out.println("Both are Equal ");

    }
}

public class P6_Task_02_StringInJava {
    public static void main(String[] args) {
        Task_02 b = new Task_02();
        b.Equal_String_Check();
    }
    
}
