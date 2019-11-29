#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int r1 = 10, r2 = 7, d = 5;
int findx(int x, int y);
int findy(int x, int y, int z);
int main()
{
    int x_max = findx(r1, r2);
    int y_max = findy(r1, r2, d);
    int Centerofr1[2] = {x_max / 2, r1};//(h,k) of circle 1
    int Centerofr2[2] = {x_max / 2, r1 + d};//(h,k) of circle 2
    time_t t;
    float i, x, y, area = 0, pointinside = 0, Pointgenerate;
    scanf("%f", &Pointgenerate);
    for (int i = 0; i < Pointgenerate; i++)
    {
        float x = ((float)rand() / (float)RAND_MAX) * x_max;
        float y = ((float)rand() / (float)RAND_MAX) * y_max;
        float check1 = ((x - Centerofr1[0]) * (x - Centerofr1[0])) + ((y - Centerofr1[1]) * (y - Centerofr1[1]));//check when outside circle 1
        float check2 = ((x - Centerofr2[0]) * (x - Centerofr2[0])) + ((y - Centerofr2[1]) * (y - Centerofr2[1]));//check when inside circle 2
        if (check1 > (r1 * r1) && check2 <= (r2 * r2))
        {
            pointinside++;
        }
    }
    printf("Pointinside the area = %.2f\n", pointinside);
    area = (float)pointinside * 2 * (float)r1 * ((float)r1 + (float)d + (float)r2) / (float)Pointgenerate;
    printf("Area = %.3f", area);
    return 0;
}

int findx(int x, int y)
{
    int result;
    if (x > y)
    {
        result = 2 * x;
    }
    else
    {
        result = 2 * y;
    }
    return result;
}
int findy(int x, int y, int z)
{
    int findy = x + y + z;
    return findy;
}