#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int k;
    int p;
    printf("====[Entertaining Menu]==== \n");
    printf("1 for pork buffet \n2 for seafood buffet \n");
    printf("Please select your choice : ");
    scanf("%d", &k);
    printf("Please select your plan\n");
    printf("1 for eating with you \n");
    printf("2 for eating with you and do some talks \n");
    printf("3 for eating with you and peel shrimp skin for you \n");
    scanf("%d", &p);
    if (k == 1)
    {
        b += 200;
    }
    else if (k == 2)
    {
        b += 300;
    }
    if (p == '1')
    {
        b += 0;
    }
    else if (p == 2)
    {
        b += 200;
    }
    else if (p == 3)
    {
        b += 400;
    }
    printf("Your price is : %d \n", b);
    printf("You paid : ");
    scanf("%d", &a);
    if (b > a)
    {
        printf("Go Away!");
    }
    else
    {
        printf("Here is your changes %d", a - b);
    }
    return 0;
}