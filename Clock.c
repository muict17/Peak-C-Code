#include <stdio.h>
int main()
{
    int a;
    int b;
    int time;
    printf("Short Hand : \n");
    scanf("%d", &a);
    printf("Long Hand : \n");
    scanf("%d", &b);
    time = a - b;
    if (time > 6)
    {
        time -= 12;
    }
    if (time < 0)
    {
        time *= -1;
    }
    printf("The angle inside the Clock is : %d \n", time * 30);
    return 0;
}