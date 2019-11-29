#include <stdio.h>
int main()
{
    int a;
    int b = 0;
    int i;
    int j;
    scanf("%d", &a);
    char brac[a];
    for (i = 0; i < a; i++)
    {
        scanf("%c", &brac[i]);
        if (brac[i]=='(')
        {
            b++;
        }
        else if (brac[i]==')')
        {
            b--;
        }   
    }
    if (b < 0)
    {
        printf("Not Complete\n");
        
    }
    else if (b == 0)
    {
        printf("Complete\n");
    }
    else
    {
        printf("Not Complete\n");
    }
    
    return 0;
}
