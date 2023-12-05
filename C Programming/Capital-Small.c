#include<stdio.h>
int main()

{
    char c;
    printf("Enter character : ");
    scanf("%c", &c);

    if (c>='a' && c<='z')
       printf("%c is the small letter.", c);
   else if (c>='A' && c<='Z')
       printf("%c is the capital letter.", c);
     else
        printf("No letter.");

    return 0;
}


