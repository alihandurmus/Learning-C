#include<stdio.h>
/*
Alihan Durmuþ
20120205028
Bu program recursive fonksiyon ile dizideki elemanlarýn tersini yazdýrýr.
*/

char terscevir(char dizi1[],int size){
	int x;
	if(size>=0&&dizi1[0]!='\0')//Burada döngü yerine geçen recursive fonksiyon ile diziyi ters yazdýrdým.
	{
		printf("%c",dizi1[size]);
	}
	else 
	return 0;
	return terscevir(dizi1,size-1);
}

int main()
{
	
	
	char dizi1[]={"BenAlihan"};
	
	terscevir(dizi1,8);
	
	
	
	
	
	return 0;
	}
