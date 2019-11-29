// #include <stdio.h>
// int fib(int num)
// {
//    if(num == 0)
//    {
//       return 0;
//    }
//    else if(num == 1)
//    {
//       return 1;
//    }
//    else
//    {
//       return (fib(num - 1) + fib(num - 2));
//    }
// }
// int main()
// {
//    int num;
//    scanf("%d", &num);
//    for (int i = 0; i < num; i++)
//    {
//        printf("%d ", fib(i));
//    }
// }

#include <stdio.h>
int fibonacci(int n);
int main()
{
   int n;
   int m = 0;
   printf("Enter Total terms:\n");
   scanf("%d", &n);
   printf("Fibonacci series terms are:\n");
   for (int i = 1; i <= n; i++)
   {
      printf("%d\n", fibonacci(m));
      m++;
   }
   return 0;
}
int fibonacci(int n)
{
   if (n == 0 || n == 1)
   {
      return n;
   } 
   else
   {
      return (fibonacci(n - 1) + fibonacci(n - 2));
   }
}
