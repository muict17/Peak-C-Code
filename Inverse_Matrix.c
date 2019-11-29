#include <stdio.h>
#include <math.h>
#define n 3
int main()
{
    float ai[n][n];
    float aj[n][1];
    //float count;
    printf("Please Enter the number in the the Matrix.\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &ai[i][j]);
        }
        scanf("%f", &aj[i][0]);
    }
    float determinant;
    for (int i = 0; i < 3; i++)
    {
        determinant = determinant + (ai[0][i] * (ai[1][(i + 1) % 3] * ai[2][(i + 2) % 3] - ai[1][(i + 2) % 3] * ai[2][(i + 1) % 3]));
    }
    //printf("Determinant : %.2f\n", determinant);
    float inverse[n][n];
    float inverse2[n][n];
    printf("Inverse of matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            inverse[i][j] = ((ai[(i + 1) % 3][(j + 1) % 3] * ai[(i + 2) % 3][(j + 2) % 3]) - (ai[(i + 1) % 3][(j + 2) % 3] * ai[(i + 2) % 3][(j + 1) % 3]));
            //printf("%.2f ", inverse[i][j]);
        }
        //printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inverse2[i][j] = inverse[j][i];
            //printf("%.2f ", inverse2[i][j]);
        }
        //printf("\n");
    }
    float go[n][1];
    float un[n];
    for (int i = 0; i < n; i++)
    {
        un[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if (ai[i][j] == 0)
            {
                un[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        go[i][0] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            go[i][0] = go[i][0] + inverse2[i][j] * aj[j][0];
            // if (go[i][j] == 0)
            // {
            //     count++;
            // }
        }
        //printf("%.2f", go[i][0]);
        go[i][0] = go[i][0] / determinant;
        // if (go[i][0] == 0)
        // {
        //     go[i][0] = fabsf(go[i][0]);
        // }
    }
    if (isnan(go[0][0]) && isnan(go[1][0]) && isnan(go[2][0]))
    {
        printf("Infinitely Many Solution");
    }
    else if (isinf(go[0][0]) && isinf(go[1][0]) && isinf(go[2][0]))
    {
        printf("No Solution");
    }
    // else if (count == 9)
    // {
    //     printf("No Solution");
    // }
    // else if (un[0] || un[1] || un[2] == 3)
    // {
    //     printf("No Solution");
    // }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("%.2f ", go[i][0]);
        }
    }
    return 0;
}