#include<stdio.h>
#include<math.h>

int function(int a,int b);

int main(void)
{
    int a,b,c;
    printf("a=? b=?\n");
    scanf("%i%i",&a,&b);
    c=function(a,b);
    printf("Greatest common divisor: %i",c);
}

int function(int a,int b)
{
    if(a%b==0)
    return b;
    else
    return function(b,a%b);  
}