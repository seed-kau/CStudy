#include <stdio.h>

int main (void) 
{
    for (int i = 0; i < 10; i ++)
    {
        printf ("%d\n", i);
    }
    
    printf ("%d\n", i); // i 가 선언 x --> 오류

    int i;
    for (i = 0; i < 10; i++)
    {
        if (i > 3) 
        {
            continue;
        }
        printf ("%d\n", i);
    }
    printf ("%d\n", i); 

}