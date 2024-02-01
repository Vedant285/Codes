import java.util.Scanner;

import java.util.*;
public class P5_Task_05_ArrayInJava {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int a[] = new int[n + 1];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
            
        }
        
        System.out.println("\nEnter Element  You want to add ");
        int k;
        k = sc.nextInt();
        a[n] = k;
        for (int i = 0; i <= n; i++) {
            System.out.print(a[i] + " ");
            ;
        }

    }
}
