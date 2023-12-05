#include<stdio.h>
int main()
{
    int num,temp, sum=0,rem;
    printf("Enter the number to sum of digit : ");
    scanf("%d", &num);
    temp=num;
     while(temp!=0)
     {
         rem=temp%10;
         sum= sum*10+rem;
         temp=temp/10;
     }
     if(num==sum)
        printf("Palindrome");
     else
        printf("Not palindrome");

     return 0;
}


