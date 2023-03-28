#include<stdio.h>
#include<math.h>
int main(){
	int a,toplam=0,hane=0;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&a);
	
while(a>0)
{
	
	toplam=toplam+(a%10);// toplam=toplam+(a%10)
	a=a/10;
	hane++;
}
	
	printf("Girdiginiz sayinin rakamlari toplami %d dir\n",toplam);
	printf("Girdiginiz sayi %d hanelidir",hane);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
