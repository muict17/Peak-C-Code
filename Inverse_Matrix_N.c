#include <stdio.h>
#include <math.h>
#define n 100
void trans(float[][n], float[][n], int, float *ptr); //for transpose of matrix
void cofac(float[][n], int, float *ptr);             //for cofactors of matrix
float determin(float[][n], int);                     //for determinant of matrix
int main()
{
    float matrix[n][n];
    float deter;
    int a;
    int b;
    int row;
    int col;
    printf("Enter size of the Matrix : ");
    scanf("%d %d", &row, &col);
    float result[row];
    if (row == col)
    {
        printf("Enter the elements of %d X %d matrix : \n", row, col);
        for (a = 0; a < row; ++a)
        {
            for (b = 0; b < col; ++b)
            {
                scanf("%f", &matrix[a][b]);
            }
            scanf("%f", &result[a]);
        }
        deter = determin(matrix, row);
        printf("\n The Determinant of the Matrix is : %f", deter);
        if (deter == 0)
            printf("\n Inverse of Matrix is not possible for the matrices having 0 Determinant value !!\n");
        else
            cofac(matrix, row, &result[0]);
    }
    else
        printf("\n Inverse of Matrix is possible for Square matrix !! Kindly give same number of rows and columns \n");
    return (0);
}

// This function is to find the determinant value of matrix . . .

float determin(float matrix[n][n], int k)
{
    float deter = 0.0, z = 1.0, mt[n][n];
    int a, b, c, x, y;
    if (k == 1)
    {
        return (matrix[0][0]);
    }
    else
    {
        deter = 0;
        for (a = 0; a < k; ++a)
        {
            x = 0;
            y = 0;
            for (b = 0; b < k; ++b)
            {
                for (c = 0; c < k; ++c)
                {
                    mt[b][c] = 0;
                    if ((b != 0) && (c != a))
                    {
                        mt[x][y] = matrix[b][c];
                        if (y < (k - 2))
                            y++;
                        else
                        {
                            y = 0;
                            x++;
                        }
                    }
                }
            }
            deter = deter + z * (matrix[0][a] * determin(mt, k - 1));
            z = -1 * z;
        }
    }
    return (deter);
}

// This function is to find cofactors of matrix . . .

void cofac(float comatr[n][n], int f, float *ptr)
{
    float matr[n][n], cofact[n][n];
    int a, b, c, d, x, y;
    for (c = 0; c < f; ++c)
    {
        for (d = 0; d < f; ++d)
        {
            x = 0;
            y = 0;
            for (a = 0; a < f; ++a)
            {
                for (b = 0; b < f; ++b)
                {
                    if (a != c && b != d)
                    {
                        matr[x][y] = comatr[a][b];
                        if (y < (f - 2))
                            y++;
                        else
                        {
                            y = 0;
                            x++;
                        }
                    }
                }
            }
            cofact[c][d] = pow(-1, c + d) * determin(matr, f - 1);
        }
    }
    trans(comatr, cofact, f, ptr + 0);
}

// This function is to transpose of matrix . . .

void trans(float matr[n][n], float m1[n][n], int r, float *ptr)
{
    float inv_matrix[n][n], tran[n][n], d;
    int a, b;
    for (a = 0; a < r; ++a)
    {
        for (b = 0; b < r; ++b)
        {
            tran[a][b] = m1[b][a];
        }
    }
    d = determin(matr, r);
    for (a = 0; a < r; ++a)
    {
        for (b = 0; b < r; ++b)
        {
            inv_matrix[a][b] = tran[a][b] / d;
        }
    }
    printf("\n\n\n The Inverse of matrix is . . . \n\n");
    float result = 0;
    for (a = 0; a < r; ++a)
    {
        result = 0;
        for (b = 0; b < r; ++b)
        {
            result = result + (inv_matrix[a][b] * *(ptr + b));
        }
        printf("%.f ", result);
    }
}