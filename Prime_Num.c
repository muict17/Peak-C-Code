#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    int j = 0;
    scanf("%d", &n);
    for(i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            j = 1;
        }
    }
    if (n == 1 || n == 0)
    {
      printf("not prime");
    }
    else
    {
        if (j == 0)
          printf("prime");
        else
          printf("not prime");
    }
    return 0;
}
