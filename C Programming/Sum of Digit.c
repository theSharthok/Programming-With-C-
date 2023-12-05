/*#include<stdio.h>
int main()
{
    int num,temp, sum=0,rem;
    printf("Enter the number to sum of digit : ");
    scanf("%d", &num);
    temp=num;
     while(temp!=0)
     {
         rem=temp%10;
         sum= sum+rem;
         temp=temp/10;
     }
     printf("The sum of the digit is : %d", sum);
     return 0;
}*/

#include<stdio.h>
int main()
{
    int a , i=10, sum=0, rem, div;
    scanf("%d", &a);
    while(a>0)
    {
        sum = a%10 + sum;
        a=a/10;
    }
    printf("Sum of digit = %d\n",sum);
    return 0;
}

