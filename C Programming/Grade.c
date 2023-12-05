#include<stdio.h>
int main()

{
    int marks;
    printf("Enter Marks : ");
    scanf("%d", &marks);

    if (marks<0 || marks>100)
        printf("%d is the invalid marks.", marks);

       else if (marks>=80 && marks<=100)
          printf("%d is the A+ Grade.", marks);

          else if (marks>=70 && marks<=79)
          printf("%d is the A Grade.", marks);

   else if (marks>=60 && marks<=69)
          printf("%d is the A- Grade.", marks);

          else if (marks>=50 && marks<=59)
                printf("%d is the B Grade.", marks);

    else if (marks>=40 && marks<=49)
          printf("%d is the C Grade.", marks);

          else if (marks>=33 && marks<=39)
                 printf("%d is the D Grade.", marks);

     else if (marks>=0 && marks<=33)
        printf("%d  is the fail marks.",marks);

    return 0;
}




