#include <stdio.h>
int main()
{
    float a;
    float b = 0;
    float n;
    printf("Please input speed km/h : ");
    scanf("%f", &n);
    for(a = 0; a <= 700; a += n/2)
    {
        printf("At %.2f hr, drive for %.2f km \n ", b, a);
        b+= 0.5;
    }
    printf("%.2f %.2f \n", 700-(a-n/2),(700-(a-n/2))/n);
    return 0;
}