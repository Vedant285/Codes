class Task_03 {
    void Remove() {
        int n, j = 0, k;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the element you  want to delete ");
        k = sc.nextInt();
        System.out.println("Enter size of Array");
        n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == k) {
                j = i;

            }
        }
        for (int i = j; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        for (int i = 0; i < n - 1; i++) {
            System.out.print(arr[i] + " ");
        }

    }
}

public class P5_Task_03_ArrayInJava {
    public static void main(String[] args) {
        Task_03 c = new Task_03();
        c.Remove();
    }
}
