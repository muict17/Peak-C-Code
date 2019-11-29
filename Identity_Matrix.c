#include <stdio.h>
int main()
{
   int row;
   int column;
   scanf("%d", &row);
   scanf("%d", &column);
   int matrix[row][column];
   if(row != column)
   {
      printf("Not identity matrix"); 
      return 0;
   }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
   for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
           if(i == j)
           {
              if(matrix[i][j] != 1 )
              {
                 printf("Not identity matrix"); 
                 return 0;
              }
           }
           else
           {
              if (matrix[i][j] != 0)
              {
                 printf("Not identity matrix"); 
                 return 0;
              }
              
           }
           
        }
    }
    printf("Identity Matrix YAAAAAA \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}