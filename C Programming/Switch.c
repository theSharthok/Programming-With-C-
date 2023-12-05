#include<stdio.h>
int main()
{
    int digit;
    printf("Enter Digit : ");
    scanf("%d" ,&digit);

    switch(digit)
    {
        case 0:
          printf("Zero Digit");
          break;
         case 1:
          printf("One Digit");
          break;
           case 2:
          printf("Two Digit");
          break;
           case 3:
          printf("Three Digit");
          break;

    }
    return 0;
}
