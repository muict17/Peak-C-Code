#include <stdio.h>
int main()
{
    int t;
    int odd = 0;
    int even = 0;
    scanf("%d", &t);
    int arr[t];
    int a = 0;
    while (a < t)
    {
        scanf("%d", &arr[a]);
        a++;
    }
    a = 0;
    while(a<t)
    {
        printf("%d ", arr[a]);
        a++;
    }
    for (a = 0; a < t; a++)
    {
        if (a % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d ", even);
    printf("%d ", odd);
    return 0;
}