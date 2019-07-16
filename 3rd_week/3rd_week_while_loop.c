#include <stdio.h>

int main (void)
{
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", i++);
        if (i > 3) 
        {
            continue;
        }
    }

    i = 0;
    while (i < 10)
    {
        printf("%d\n", ++i);
    }

    while (true) // 무한 루프
    {

    }

    while (1) // 무한 루프
    {

    }

    do
    {
        printf ("%d\n",1 );
    } while (조건)

}