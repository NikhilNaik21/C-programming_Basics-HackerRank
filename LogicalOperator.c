//Write a c program to implement logical operators with relation and increment operators and analyze the result

#include<stdio.h>
                                 


int main()
{
        int a=3, b=5,c,d,e;

        c=(a<=3 && b>3);
        d=a<=3||b>8;
        e= a=!3;
      

    printf("Logical AND: %d\n",c);
    
    printf("Logical OR: %d\n",d);
    
    printf("Logical NOT: %d\n",e);

      return 0;

}
