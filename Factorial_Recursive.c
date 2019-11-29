#include <stdio.h>
int fac(int num)
{
    if (num >= 1)
    {
        return num * fac(num - 1);
    }   
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d ", fac(num));
    return 1;
}