#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d", &a);
    int arr[a];
    int c = 0;
    int arr1[a];
    int d = 0;
    while (c < a)
    {
        scanf("%d", &arr[c]);
        c++;
    }
    while (d < a)
    {
        scanf("%d", &arr1[d]);
        d++;
    }
    for (c = 0; c < a ; c++)
    {
        if (arr[c] == arr1[c])
        {
            printf("%d ", c);
        } 
    }
    return 0;
}
