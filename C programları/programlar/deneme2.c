#include<stdio.h>


int main(){
	
	
	
	int x,rakam,sayac=0,toplam=0;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&x);
	
	
	while(x>0){
		
		rakam=x%10;
		x=x/10;
        toplam=toplam+rakam;
		
				
		
		
		
		sayac++;
		
		
		
		
		
		
		
	}
	
	
	printf("Girdiginiz sayilarin rakamlari toplami:%d\n",toplam);
	
	printf("Girdiginiz sayi %d hanelidir",sayac);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
