import java.util.Queue;

public class No_Of_Island_With_BFS {
    public static void main(String[] args) {
        int n;
        int m;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter row and column of Ocean");
        n = sc.nextInt();
        m = sc.nextInt();
        int arr[][] = new int[n][m];
        System.out.println("Enter water and island ");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        Queue<Integer>q=new Queue<>();
        
        
    }
}
