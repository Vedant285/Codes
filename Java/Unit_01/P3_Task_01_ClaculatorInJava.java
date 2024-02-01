import java.util.*;

public class P3_Task_01_ClaculatorInJava {
    public static void main(String[] args) {
        int a, b, c;
        // String k;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 2 numbers ");

        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println("1 for + 2 for - 3 for * 4 for / 5 for %");
        c = sc.nextInt();

        switch (c) {
            case 1:
                System.out.println(a + b);
                break;
            case 2:
                System.out.println(a - b);
                break;
            case 3:
                System.out.println(a * b);
                break;
            case 4:
                System.out.println(a / b);
                break;
            case 5:
                System.out.println(a % b);
                break;
            default:
                break;
        }
    }
}
