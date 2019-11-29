#include <stdio.h>
int add(int a, int b);
int c;
int main()
{
    c = 10;
    printf("%d\n", add(4,5));
    printf("%d\n", c);
    return 0;
}
int add(int a, int b)
{
    int c = a + b;
    return c;
}
