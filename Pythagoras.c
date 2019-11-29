#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    if (a * a + b * b == c * c)
    {
        printf("VALID!");
    }
    else if (a > b)
    {
        printf("Not Valid! a must be less than b");
    }
    else if (b > c)
    {
        printf("Not Valid! b must be less than c");
    }
    else if (a == b && b == c)
    {
        printf("Not Valid! because all three numbers are the same!");
    }
    else
    {
        printf("Not Valid!");
    }
    return 0;
}