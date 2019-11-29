#include<stdio.h>  
 int main()    
{    
int a;
int b;
int sum = 0;
int Arm;    
scanf("%d",&a);    
Arm = a;  
while (a > 0)
{
    b = a % 10;    
    sum = sum + (b * b * b);    
    a = a / 10; 
}   
if (Arm == sum)
{
    printf("Armstrong Num");
}
else
{
    printf("Not Armstrong Num");
}
return 0;
}