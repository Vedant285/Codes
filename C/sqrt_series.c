#include<stdio.h>
#include<math.h>
int series(int);
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=series(a);
    printf("%d",b);
    return 0;
}
int series(int k)
{
    int sum=0,l;
    for (int i = 1; i <=k ; i++)
    {
        l=pow(i,2);
        sum=sum+l;
    }
    return sum;
    
}
