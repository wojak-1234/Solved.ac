#include<stdio.h>
#include<string.h>
int notprime = 0;
void isprime(int k)
{
    for (int p = 2; p < k; p++)
    {
        if (k % p == 0)
        {
            notprime += 1;
            break;
        }
    }
}
int main()
{
    int a, b;
    scanf_s("%d", &a);
    for (int k = 0; k < a; k++)
    {
        scanf_s("%d", &b);
        if (b == 1)
        {
            notprime += 1;
        }
        else
            isprime(b);
    }
    printf("%d", a - notprime);
}