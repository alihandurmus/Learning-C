#include<stdio.h>

int main(){
	
	int a,b,ebob,r;
	printf("a sayisi giriniz:");
	scanf("%d",&a);
	printf("b sayisi giriniz:");
	scanf("%d",&b);
	
	if(a==0)
	printf("ebob=%d",b);
	else if(b==0)
	printf("ebob=%d",a);
	else{
		r=a%b;
		a=b;
		b=r;
		r=a%b;
		printf("ebob=%d",b);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
