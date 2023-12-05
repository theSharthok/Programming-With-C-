#include <stdio.h>
float sum(int a , float b)
{
    return a+b;
}

int main()
{
    float add = sum(10,30.89) ;
    printf("%.2f", add);

    return 0;
}

