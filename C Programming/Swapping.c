#include<stdio.h>

int main()
{
    int a,b,swap;

    a = 5 , b = 6;

    swap = a;
    a = b;
    b = swap;

    printf ("%d %d", a,b);
}
