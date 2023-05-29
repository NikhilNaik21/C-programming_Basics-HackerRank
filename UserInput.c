// Write a c program to take value of integer, character and float variable from user  and print its value on terminal



 #include <stdio.h>
int main() 
{
    int a;
    float b;
    char ch;

    printf("Enter integer value   :  ");
    scanf("%d", &a);

    printf("Enter float  :  ");
    scanf("%f", &b);

 

    printf("value = %d\n ",a);
    printf("value =  %f\n ",b);

     getchar();   
    printf("Enter Alphabet : ");
    scanf("%c",&ch);

    printf("Ascii Value = %d",ch);
   

    return 0;
}
