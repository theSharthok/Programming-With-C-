#include<stdio.h>
int main()
{
    int choice;
    float temp, convertedTemp;

    printf("Temperature Conversion Menu \n ");
    printf("1. Celsius to Fahrenheit \n ");
    printf("2. Fahrenheit to Celsius \n ");
    printf("Enter Choice : ");
    scanf("%d", &choice);

    switch(choice)
    {

        case 1:
          printf("Enter the Celsius Temperature : ");
          scanf("%f",&temp);
          convertedTemp = (temp-32)/1.8;
          printf ("Fahrenheit temperature is : %f\n" ,convertedTemp);
          break;

        case 2:
          printf("Enter the Fahrenheit Temperature : ");
          scanf("%f",&temp);
          convertedTemp = (1.8*temp)+32 ;
          printf ("Celsius temperature is : %f\n" ,convertedTemp);
          break;

        default:
            printf("Not a correct option.");
    }
    return 0;
}

