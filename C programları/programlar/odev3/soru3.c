#include<stdio.h>
/*
Alihan Durmu�
20120205028
Bu program kullan�c�dan bir string al�p tersini yazd�r�r.
*/
int y;//A�a��da kullan�c�dan ald���m dizinin b�y�kl���n� fonksiyonda da g�stermesi i�in global de�i�ken tan�mlad�m

char *ters_cevir(char *string)//fonksiyon burada tan�mlan�r
{   printf("\nGirdiginiz dizinin tersten yazilisi:\n");
	char *ptr = &string[y];//bir pointera tan�mlad�m dizinin son karakterini.
	int x;
	for(x=0;x<y;x++)
	{
		printf("%c",*ptr--);//burada pointeri azaltarak tersini yazd�rmau� sa�lad�m.
		
	}
	return 0;
}

int main()
{   int x;
    printf("Dizinin kac karakter olacagini giriniz:");
    scanf("%d",&y);
	
	
	char dizi[y];
	
	for(x=0;x<=y+1;x++)
	{
		scanf("%c",&dizi[x]);
	}
	
	printf("Girdiginiz dizi:");
	for(x=0;x<y+1;x++)
	printf("%c",dizi[x]);
	
	ters_cevir(dizi);
	
	
	
	
	
	
	
	
	
	return 0;
}
