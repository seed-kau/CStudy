#include <stdio.h>
int main (void) {
    char b = 'C';
    printf ("b : %c\n", b);
    
    char * a = "Hello";
    char ff[100];
    
    scanf ("%c", &b);
    scanf ("%s", ff);
    printf ("a : %s\n", a);
    printf ("ff : %s\n", ff);
    printf ("ff[3] : %c\n", ff[3]);
    printf ("b : %c\n", b);

    return 0;
}