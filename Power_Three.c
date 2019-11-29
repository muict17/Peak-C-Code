#include <stdio.h>
int POWERThree (int a);
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 3)
    {
        printf("%d is not a Power of 3\n", n);
    }
    else if (POWERThree(n) == 1)
    {
        printf("%d is a Power of 3\n", n);
    }
    else
    {
       printf("%d is not a Power of 3\n", n);
    }
    return 0;
}
int POWERThree (int a)
{
    if (a == 0)
        return 0;
    while (a != 3)
    {
        if (a % 3 != 0)
            return 0;
            a /= 3;
    }
    return 1;
}