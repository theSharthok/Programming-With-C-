/*#include<stdio.h>
int main()
{
    int i,j,n,flag=0;
    scanf("%d", &n);

    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if (flag==0)
        {
            printf("%d ",i);
        }
        flag=0;
    }
    return 0;
}*/

#include <stdio.h>

int main() {
   int loop, number;
   int prime = 1;

   number = 6;

   for(loop = 2; loop < number; loop++) {
      if((number % loop) == 0) {
         prime = 0;
      }
   }

   if (prime == 1)
      printf("%d is prime number.", number);
   else
      printf("%d is not a prime number.", number);
   return 0;
}
