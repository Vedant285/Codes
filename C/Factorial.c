#include<stdio.h>
long int factorial(int n);
int main() {
    int n;
    printf("Enter a integer: ");
    scanf("%d",&n);
    printf("factorial= %ld",factorial(n));
    return 0;
}

long int factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}
