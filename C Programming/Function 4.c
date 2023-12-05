#include<stdio.h>
void function (char name[],int age)
{
    printf("Hello, I am %s and I am %d years old.\n",name,age);
}

int main()
{
    function("A", 5);
    function("B", 6);

}

