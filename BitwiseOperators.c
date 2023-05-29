                            // Write a c program to implement bit wise operators and analyze the result 


#include<stdio.h>
                                 


int main()
{ 
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    printf("Bitwiswe AND: %d\n",a&b);
    
    printf("Bitwiswe OR: %d\n",a|b);
    
    printf("Bitwiswe NOT: %d\n",~a);

    
    printf("Bitwiswe XOR: %d\n",a^b);
    
    printf("Bitwiswe leftshift: %d\n",a<<b);

    
    printf("Bitwiswe rightshift: %d\n",a>>b);



    return 0;

}
