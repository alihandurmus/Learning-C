#include<stdio.h>
/*
Alihan Durmu�
20120205028
Bu program recursive fonksiyon ile kullan�c�dan ald��� say�n�n basamak toplam�n� yazd�r�r.

*/
int basamaktoplam(int sayi)
{   int n,rakam;
	if(sayi>0)
	{
	rakam=sayi%10;//Burada for ile d�ng� yaparak basamak toplam� bulmak yerine recursive fonksiyon olu�turarak sonucu buldum.
	sayi=sayi/10;
	
	}
	else
    return 0;
return rakam+basamaktoplam(sayi);
}

   


int main()
{
	int n;
	printf("Bir sayi giriniz.");
	scanf("%d",&n);
	
	
	printf("Girdiginiz sayilarin toplami:%d",basamaktoplam(n));//Burada fonksiyonu �a��rarak program sonlan�r.
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
