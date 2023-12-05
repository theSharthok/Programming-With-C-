#include<stdio.h>
int main()

{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a,&b,&c);

    if (a>b && a>c)
       printf("%d is the largest number.", a);

    else if (a<b && b>c)
         printf("%d is the largest number.", b);

         else if (a<c && b<c)
         printf("%d is the largest number.", c);

     else
        printf("%d %d %d are the equal numbers.",a, b,c);

    return 0;
}



