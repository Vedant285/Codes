import java.util.Scanner;

class Task_01 {
    static void Find_Duplicate() {
        int[] arr = new int[10];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Values of Array ");
        for (int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
        }
        int d = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = i + 1; j < 10; j++) {
                if (arr[i] == arr[j]) {
                    System.out.println("Found duplicate " + arr[j]);
                    d++;
                }
            }
        }
        if (d == 0) {
            System.out.println("No Duplicate found ");
        }
    }

}

public class P5_Task_01_ArrayInJava {
    public static void main(String[] args) {
        Task_01 a = new Task_01();
        a.Find_Duplicate();
    }
}
