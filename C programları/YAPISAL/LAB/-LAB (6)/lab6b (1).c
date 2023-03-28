/*
 * lab6b.c
 * Enes Diler
 * Fonksiyonlar
 */


#include <stdio.h>

double cikar(int x1,int x2, int y1, int y2)  //cikarma fonksiyonu
{
	return((double)x1/y1) - ((double)x2/y2);  //fonksiyon işlemleri
	}
double bol (int x1, int x2, int y1, int y2)  //bolme fonksiyonu
{
	return((double)x1/y1) * ((double)x2/y2);  
	}
double ondalik_goster(int x1, int y1)  //ondalik gosterme 
{
	return((double)x1/y1);
	}			          
void ekrana_bas(int x1, int y1)       //sadece ekrana basma için void                                                                   
{
	printf("%d/%d",x1,y1);
	}
     
     
int main()
{
	int x1, x2, y1, y2;
	
	printf("\n\tCikarma Islemi\n");   //işlem bilgisi
	printf("Cikarma Islemi Icin Birinci Kesrin Payi:");   //girdi isteme
	scanf("%d",&x1);  //değişken girdisi
	printf("Cikarma Islemi Icin Birinci Kesrin Paydasi:"); //""  
	scanf("%d",&y1);   //""
	printf("Cikarma Islemi Icin Ikinci Kesrin Payi:");  //""
	scanf("%d",&x2);  //""
	printf("Cikarma Islemi Icin Ikinci Kesrin Paydasi:");  //""
	scanf("%d",&y2);  //""
	 
	printf("Sonuc-->(%d/%d-%d/%d)= %.3f",x1,y1,x2,y2,cikar(x1,y1,x2,y2));  //sonuç çıktısı
	
	printf("\n\tBolme Islemi\n");    //işlem bilgisi
	printf("Bolme Islemi Icin Birinci Kesrin Payi:");
	scanf("%d",&x1);
	printf("Bolme Islemi Icin Birinci Kesrin Paydasi:");
	scanf("%d",&y1);
	printf("Bolme Islemi Icin Ikinci Kesrin Payi:");
	scanf("%d",&x2);
	printf("Bolme Islemi Icin Ikinci Kesrin Paydasi:");
	scanf("%d",&y2);
	
	printf("Sonuc-->(%d/%d)/(%d/%d)= %.3f",x1,y1,x2,y2,bol(x1,y1,x2,y2));  //sonuç çıktısı
	
	
	printf("\n\tOndalik Gosterme Islemi\n");  //işlem bilgisi
	printf("Ondalik Gosterme Islemi Icin Pay:");  //değer ister
	scanf("%d",&x1);  //değer alır
	printf("Ondalik Gosterme Islemi Icin Payda:");
	scanf("%d",&y1);
	
	printf("Gosterim:%f",ondalik_goster(x1,y1));
	
	printf("\n\tVoid\n");
	printf("Void Icin Pay:");
	scanf("%d",&x1);
	printf("Void Icin Payda:");
	scanf("%d",&y1);
	
	ekrana_bas(x1,y1);  //void fonksiyonunun içini yazar
	
	printf("\n\tOndalik Gosterimli Bolme Islemi\n");
	printf("Ondalik Gosterimli Bolme Islemi Icin Birinci Kesrin Payi:");
	scanf("%d",&x1);
	printf("Ondalik Gosterimli Bolme Islemi Icin Birinci Kesrin Paydasi:");
	scanf("%d",&y1);
	printf("Ondalik Gosterimli Bolme Islemi Icin Ikinci Kesrin Payi:");
	scanf("%d",&x2);
	printf("Ondalik Gosterimli Bolme Islemi Icin Ikinci Kesrin Paydasi:");
	scanf("%d",&y2);
	
	printf("Sonuc-->%.3lf / %.3lf= %.3lf",ondalik_goster(x1,y1),ondalik_goster(x2,y2),bol(x1,y1,x2,y2));
	
	return 0;
}

