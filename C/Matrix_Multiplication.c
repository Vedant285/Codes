#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k;
    printf("Enter Value of row and column of 1st matrix :");
    scanf("%d %d",&r1,&c1);
    printf("Enter Value of row and column of 2nd matrix :");
    scanf("%d %d",&r2,&c2);
    int a[r1][c1],b[r2][c2];
    if(r1!=c2)
    {
        printf("Multiplication is not possible");
    }
    printf("Enter elements of 1st matrix : ");
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter elements of 2nd matrix : ");
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("Matrix after multiplication : \n");
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            int s=0;
            for (k = 0; k < r2; k++)
            {
                s+=a[i][k]*b[k][j];
            }
            printf("%d\t",s);
        }
        printf("\n");
        
    }
    
}