#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m;
    float a,b;
    scanf("%d %d",&n,&m);
    scanf("%f %f",&a,&b);
    
    int sum = n+m;
    int difference =n-m;
    float sum1 =a+b;
    float diff1=a-b;
    printf("%d %d",sum,difference);
    printf("\n");
    printf("%0.1f %0.1f",sum1,diff1);
    return 0;
}
