#include <stdio.h>

int main (void)
{
    int A, B, C;
    int num_arr[10] = {0,};
    scanf ("%d %d %d", &A, &B, &C);

    int result = A * B * C;

    while (result != 0)
    {
        num_arr[result % 10]++;
        result /= 10;
    }

    for (int i = 0; i < 10; i++) 
    {
        printf ("%d\n", num_arr[i]);
    }

    return 0;
}