
/*
->Detection of perfect number
->@copyright : Vedant Shukla
*/
#include<stdio.h>
int perfect(int);
int main()
{
    int g,c,d;
    printf("Enter a number : ");
    scanf("%d",&g);
    d=g;
    c=perfect(g);
    if (d==c)
    printf("perfect");
    else
    printf("Not");
}

int perfect(int a)
{
    int sum=0;
    for (int i = 1; i < a; i++)
    {
        if (a%i==0)
        {
            sum=sum+i;
        }
        
    }
    return sum;
}