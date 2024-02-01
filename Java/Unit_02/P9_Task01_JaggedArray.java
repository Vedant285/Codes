import java.util.*;

public class P9_Task01_JaggedArray {
    public static void main(String[] args) {
        M1();
        M2();
    }

    public static void M1() {
        int arr[][] = new int[][] {
                new int[] { 1, 2, 3, 4 },
                new int[] { 5, 6, 7 },
                new int[] { 8, 9, 10, 11, 12 }
        };
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

    }

    public static void M2() {
        int arr[][] = new int[3][];
        arr[0] = new int[3];
        arr[1] = new int[2];
        arr[2] = new int[3];
        int c = 0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                arr[i][j] = c++;
            }
        }
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

    }
}
