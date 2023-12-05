#include <stdio.h>
float add(float a , float b)
{
    return a+b;
}

int main()
{
    float a ,b , sum;

    printf("Enter Number : ");



    scanf("%f %f", &a, &b) ;

    sum = add(a,b);

    printf("%.2f", sum);

    return 0;
}

