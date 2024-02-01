//find shortest from (0,0) to (n-1,n-1) and can only travel 0.
import java.util.*;
 class pair{
    int first,second,third;
    pair(int first,int second,int thrid)
    {
        this.first=first;
        this.second=second;
        this.third=third;
    }
}
public class Shortest_path_in_Matrix{
    static int findShortest(int[][] mat)
    {
        int n=mat.length;
        if(mat[0][0]!=0 || mat[n-1][n-1]!=0)return -1;
        if(n-1==0) return 1;
        Queue<pair>q=new LinkedList<>();
        int arr[][]=new int[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=Integer.MAX_VALUE;
            }
        }
        arr[0][0]=1;
        q.add( new pair(0,0,0));
        while(!q.isEmpty()){
            int k=q.peek();
            q.poll();
            int x=k.first;
            int y=k.second;
            int z=k.third;
            int dr[]={-1,0,1,0};
            int dc[]={0,-1,0,1};
            for(int i=0;i<4;i++)
            {
                int nr=y+dr[i];
                int nc=z+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<n && mat[nr][nc]==0 && x+1<arr[nr][nc])
                {
                    arr[nr][nc]=x+1;
                    if(nr==n-1 && nc==n-1){
                        return x+2;
                    }
                    q.add(new pair(z+1,nr,nc));
                }
            }

        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[][]=new int[n][n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        System.out.println("Shortest path have length : " + findShortest(arr));

    }
}