#include<stdio.h>

int a = 20;

int topla(int x,int b)
{
printf("%d\t", x);
printf("%d\t", b);
a = a+10;
return x+b;
}
int main()
{

int b = 20;
int c = topla(a,b);

printf("%d\t",a);
printf("%d\t",c);


return 0;
}
