#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>/*
Alihan Durmuþ
20120205028
Bu program 1/1+1/2+1/3....1/sayi toplam hesabýný yapar

"sayi" kullanýcýnýn girdiði sayýdýr.

*/
int main(){
	
	int sayi,sayac=1;//"sayac" while'ýn çalýþmasý için tanýmladýðýmýz bir deðiþkendir.
	float toplam;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayac<=sayi){
		 
		 
		toplam=toplam+1.0/sayac;//1.0 yazmamýn sebebi sonucun int deðilde float olarak çýkabilmesini saðlamak.
		
		if(sayac==1){
		Sleep(250);
		printf("1/%d",sayac);}
		else 
		{
		Sleep(250);
		printf("+1/%d",sayac);
	}
		sayac++;
		
		
		
	}
	Sleep(1000);
	printf("\nSerinin toplami %f dir",toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


