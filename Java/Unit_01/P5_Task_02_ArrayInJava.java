class Task_02 {
    void Rotate() {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Size of array ");
        n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        for (int i = 0; i < 2; i++) {
            int first = arr[0], j;
            for (j = 0; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[j] = first;
        }
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }

    }
}

public class P5_Task_02_ArrayInJava {
    public static void main(String[] args) {
        Task_02 b = new Task_02();
        b.Rotate();
    }
}
