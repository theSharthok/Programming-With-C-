#include<stdio.h>
int main()
{
    int num[100],max,min,n,i;
    printf("Enter Numbers : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];

    for(i=1;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("Maximum is %d ", max);

    min=num[0];

    for(i=1;i<n;i++)
    {
        if(min>num[i])
            min=num[i];
    }
    printf("Minimum is %d ", min);

      return 0;
}

