#include<stdio.h>
int main()
{
    int marks[]={11,21,31,41,51},sum=0,i;

   for(i=0;i<5;i++)
   {
       sum=sum+marks[i];
   }

    printf("%d",sum);

      return 0;
}


