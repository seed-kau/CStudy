#include <stdio.h>

int main (void) 
{
    int A, B, C;
    int temp;

    scanf ("%d %d %d", &A, &B, &C);

    if (B < A) 
    {
        temp = A;
        A = B;
        B = temp;
    }

    if (C < B) 
    {
        temp = B;
        B = C;
        C = temp;
    }

    if (B < A) 
    {
        temp = A;
        A = B;
        B = temp;
    }

    printf ("%d\n", B);

    return 0;
}