#include<stdio.h>
/*
Alihan Durmuþ
20120205028
Bu program kullanýcýdan bir string alýp tersini yazdýrýr.
*/
int y;//Aþaðýda kullanýcýdan aldýðým dizinin büyüklüðünü fonksiyonda da göstermesi için global deðiþken tanýmladým

char *ters_cevir(char *string)//fonksiyon burada tanýmlanýr
{   printf("\nGirdiginiz dizinin tersten yazilisi:\n");
	char *ptr = &string[y];//bir pointera tanýmladým dizinin son karakterini.
	int x;
	for(x=0;x<y;x++)
	{
		printf("%c",*ptr--);//burada pointeri azaltarak tersini yazdýrmauý saðladým.
		
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
