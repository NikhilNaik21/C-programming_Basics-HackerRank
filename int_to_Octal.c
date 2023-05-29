//Write a C program to take input any integer from user and print its octal value.

#include<stdio.h>
                                 


int main()
{
    int number;
    printf("Enter any number : ");
    scanf("%d",&number);

    printf("Decimal to octal  = %o",number);

    return 0;
