/*
 * ödev3.5.c
 */


#include <stdio.h>

int main()
{
	int sayi, x=50;  //sayi tanımla
	int a=0; //bitmesi için sayaç tanımla
	printf("N Sayisini Tahmin Etmek Icin 0-100 Arasinda Bir Sayi Tahmin Ediniz:"); //sayi iste
	scanf("%d",&sayi); //sayi al
	while (a==0) //döngü başlat
{
	if (sayi==x)  //koşul belirt 
{
	printf("\nTebrikler Sayiyi Buldunuz"); //sağlarsa sonuç
	a=1; //sayacı arttır döngü bitir
}
	else if(sayi>x)
{
	printf("\nSayidan Buyuk Bir Deger Girdiniz\n");
	printf("\nTekrar Tahmin Edin:");
	scanf("%d",&sayi); //tekra sayi al
}
	else if(sayi<x)
{
	printf("\nSayidan Kucuk Bir Deger Girdiniz\n");
	printf("\nTekrar Tahmin Edin :");
	scanf("%d",&sayi);
}
}
	return 0;
}

