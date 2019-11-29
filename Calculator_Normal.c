#include <stdio.h>
int main()
{
int a = 0;
int b = 0;
scanf("%d %d",&a, &b);
char operator;
scanf(" %c",&operator);
switch (operator)
{
case '+':
printf("%d+%d=%d",a,b,a+b);
break;
case '-':
printf("%d-%d=%d",a,b,a-b);
break;
case '*':
printf("%d*%d=%d",a,b,a*b);
break;
case '/':
printf("%d / %d = %d",a,b,a/b);
break;
}
   return 0;
}