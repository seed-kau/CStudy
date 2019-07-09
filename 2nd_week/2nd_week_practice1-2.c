#include <stdio.h>

int main (void) 
{
    int A, B, C;
    int temp;

    scanf ("%d %d %d", &A, &B, &C);

    if (A <= B)
    {
        if (B <= C)
        {
            printf ("%d\n", B);
            return 0;
        }
    }

    if (C <= B)
    {
        if (B <= A)
        {
            printf ("%d\n", B);
            return 0;
        }
    }
    
    if (B <= A)
    {
        if (A <= C)
        {
            printf ("%d\n", A);
            return 0;
        }
    }
    
    if (C <= A)
    {
        if (A <= B)
        {
            printf ("%d\n", A);
            return 0;
        }
    }

    if (A <= C)
    {
        if (C <= B)
        {
            printf ("%d\n", C);
            return 0;
        }
    }

    if (B <= C)
    {
        if (C <= A)
        {
            printf ("%d\n", C);
            return 0;
        }
    }

    return 0;
    
}