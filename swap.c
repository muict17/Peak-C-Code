#include <stdio.h> 
void swap(int *x, int *y);
void sort_value(int *x, int *y,int *z);
int main() 
{ 
    int x, y, z; 
    scanf("%d", &x); 
    scanf("%d", &y);
    scanf("%d", &z);  
    sort_value(&x, &y, &z); 
    printf("%d %d %d", x, y, z); 
    return 0; 
} 
void swap(int *x, int *y)
{ 
    int n = *x; 
    *x = *y; 
    *y = n; 
} 
void sort_value(int *x, int *y,int *z)
{
    if(*x > *y)
    {
        swap(x,y);
    }
    if(*x > *z)
    {
        swap(x,z);
    }
    if(*y > *z)
    {
        swap(y,z);
    }
}  