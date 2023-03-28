#include<stdio.h>

int main(){
	
	
	int ilksayi=1,ikincisayi=1,num,x;
	printf("Ne kadar yazsin:");
	scanf("%d",&num);
	printf("%d\n%d\n",ilksayi,ikincisayi);
	for(x=1;x<=num;x++){
	
	
	int temp=ikincisayi;
	
	ikincisayi+=ilksayi;
	
	ilksayi=temp;
	
	printf("%d\n",ikincisayi);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
