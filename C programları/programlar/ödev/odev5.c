#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>/*
Alihan Durmu�
20120205028
Bu program 1/1+1/2+1/3....1/sayi toplam hesab�n� yapar

"sayi" kullan�c�n�n girdi�i say�d�r.

*/
int main(){
	
	int sayi,sayac=1;//"sayac" while'�n �al��mas� i�in tan�mlad���m�z bir de�i�kendir.
	float toplam;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayac<=sayi){
		 
		 
		toplam=toplam+1.0/sayac;//1.0 yazmam�n sebebi sonucun int de�ilde float olarak ��kabilmesini sa�lamak.
		
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
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


