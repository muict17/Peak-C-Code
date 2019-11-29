#include <stdio.h>
int intersect(int *arr1, int *arr2, int n, int *out);
int main()
{
    int a;
    int h;
    scanf("%d", &a);
    int ai[a];
    int aj[a];
    int ag[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ai[i]);
    }
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &aj[i]);
    }
    h = intersect(&ai[0], &aj[0], a, &ag[0]);
    if (h == 0)
    {
        printf("No intersect");
    }
    else
    {
        for (int i = 0; i < h; i++)
        {
            printf("%d ", ag[i]);
        }
    }
    return 0;
}
int intersect(int *arr1, int *arr2, int n, int *out)
{
    int i;
    int j;
    int g = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (*(arr1 + i) == *(arr2 + j))
            {
                *(out + g) = *(arr1 + i);
                g++;
            }
        }
    }
    return g;
}