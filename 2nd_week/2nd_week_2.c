#include <stdio.h>

int main (void) 
{
    int a, b, c;

    scanf ("%d %d %d", &a, &b, &c);

    if (a == b) 
    {
        printf ("a == b\n");
        printf ("%d %d\n", a, b);
    }
    else if (b != c) 
    {
        printf ("b != c");
    }
    else 
    {
        printf ("5555");
    }

    return 0;
}