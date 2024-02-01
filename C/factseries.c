#include<stdio.h>
int series(int);
int main()
{
    int a;
    float b;
    printf("Enter no. ");
    scanf("%d",&a);
    b=series(a);
    printf("%0.2f",b);
    return 0;
}
int series(int k)
{
    int f=1;
    float sum=0.0;
    for (int i = 1; i <= k; i++)
    {
        f=f*i;
        sum=sum+(i/f);
    }
    return sum;
}
