#include<stdio.h>
/*
Alihan Durmuþ
20120205028
Bu program recursive fonksiyon ile kullanýcýdan aldýðý sayýnýn basamak toplamýný yazdýrýr.

*/
int basamaktoplam(int sayi)
{   int n,rakam;
	if(sayi>0)
	{
	rakam=sayi%10;//Burada for ile döngü yaparak basamak toplamý bulmak yerine recursive fonksiyon oluþturarak sonucu buldum.
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
	
	
	printf("Girdiginiz sayilarin toplami:%d",basamaktoplam(n));//Burada fonksiyonu çaðýrarak program sonlanýr.
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
