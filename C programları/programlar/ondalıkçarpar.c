#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x = 12,y=34;
    int z = 21,t=43;
    x=x*100;
    x=x+y;
    z = z*100;
    z = z+t;
    int kesir = (x*z)%10000;
    int tam = x*z/10000;
    
    printf("%d,%d",tam,kesir);
return 0;
}
