#include<stdio.h>
void Factorial(int,int *);
int main()
{
    int i;
    int factorial = 1;
    int n;
    scanf("%d",&n);
    Factorial(n,&factorial);
    printf("%d", factorial);
    return 0;
}
void Factorial(int n,int *factorial)
{
    int i;
    for(i = 1;i <= n;i++)
    {
    *factorial = *factorial * i;
    }
}