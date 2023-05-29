#include<stdio.h>

int main()
{
int x,y,operation;
    printf("Enter the value of x :");
    scanf("%d",&x);

    printf("Enter the value of y :" ,&x);
    scanf("%d",&y);

    printf("1.Add\n2.Subtract\n3.Multiplication\n4.Division\nEnter operation :");
    scanf("%d",&operation);
 switch(operation)
 {

    case 1: 

    printf("Addition:%d",x+y);
    break;

    case 2:
    printf("subtraction:%d",x-y);
    break;

    case 3:
    printf("Multiply:%d",x*y);
    break;

    case 4:
    printf("Division:%d",x/y);
    break;

    default :
    printf("No mathematical operation");

 }
}
