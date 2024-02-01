#include<stdio.h>
int main()
{
    int i,j,n=1,c=0;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 1; j <=6-c; j++)
        {
            printf(" ");
        }c=c+2;
        for ( j = 0; j <= i; j++)
        {
            printf("%3d ",n);
            n++;
        }
        printf("\n");
        
        
    }
}
