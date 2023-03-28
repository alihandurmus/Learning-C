#include<stdio.h>

int main()
 
{   int y,ilksayi=1,ikincisayi=1;
    printf("Fibonacci diziniz kac adim olsun:");
    scanf("%d",&y);
	int x;
	printf("%d\n%d\n",ilksayi,ikincisayi);
	
	for(x=0;x<y-2;x++)
	{
		int temp = ikincisayi;
		ikincisayi+=ilksayi;
		ilksayi = temp;
		int *ptr = &ikincisayi;
		printf("%d\n",*ptr);
	}
	
	
	return 0;
}
