import java.util.*;

class Multiply {
    void Matrix_Multiply() {
        int r1, c1, r2, c2, i, j, k;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter row of first row ");
        r1 = sc.nextInt();
        System.out.println("Enter  column of first row ");
        c1 = sc.nextInt();
        System.out.println("Enter row of 2nd row ");
        r2 = sc.nextInt();
        System.out.println("Enter  column of 2nd row ");
        c2 = sc.nextInt();
        int a[][] = new int[r1][c1];
        int b[][] = new int[r2][c2];
        if (r2 != c1) {
            System.out.println("Multiplication is not possible");
        }
        System.out.println("Enter elements of 1st matrix : ");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                a[i][j] = sc.nextInt();
            }

        }
        System.out.println("Enter elements of 2nd matrix : ");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                b[i][j] = sc.nextInt();
            }

        }
        System.out.println("Matrix after multiplication : \n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                int s = 0;
                for (k = 0; k < r2; k++) {
                    s += a[i][k] * b[k][j];
                }
                System.out.print(s + " ");
            }
            System.out.println();
        }

    }

}

class P4_Task_01_GenericMatricMultiplication {
    public static void main(String[] args) {
        Multiply m = new Multiply();
        m.Matrix_Multiply();
    }
}