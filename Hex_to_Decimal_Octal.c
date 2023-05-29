//Write a C program to declare any hexadecimal value and prints corresponding decimal and octal value.


#include<stdio.h>
                                 


int main()
{
    int number;
    printf("Enter hexadecimal number : ");
    scanf("%x",&number);

    printf("Hex to decimal  = %d\n",number);
     printf("Hex to octal  = %o",number);

    return 0;
}
