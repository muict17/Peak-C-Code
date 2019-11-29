#include <stdio.h>
int main()
{
    int n; 
    int i; 
    int max;
    int countM;
    int j;
    scanf("%d", &n);
    int num[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    max = num[0];
    countM = num[0];
    for (i = 0; i < n; i++) 
    {
        int count = 0;
        for (j = 0; j < n; j++) 
        {
        if (num[j] == num[i])
        count++;
        }
      
      if (count > countM) 
      {
         countM = count;
         max = num[i];
      }
    }
    printf("%d ", max);

    return 0;
}