#include <stdio.h>
int isprime(k);
int main()
{
    int n, p;
    scanf("%d", &n);
    p = isprime(n);
    printf("%d", p);
}
int isprime(int k)
{
    int c = 0;
    for (int i = 1; i <= k; i++)
    {
        if (k % i == 0)
            c++;
    }
    if (c == 2)
        return 1;
    else
        return 0;
}
