#include<stdio.h>
int main()

{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a,&b);

    if (a>b)
       printf("%d is the largest number.", a);
    else if (a<b)
         printf("%d is the largest number.", b);
     else
        printf("%d and %d is the equal number.",a, b);

    return 0;
}


