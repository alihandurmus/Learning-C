#include<stdio.h>
/*
Alihan Durmu�
20120205028
Bu program recursive fonksiyon ile dizideki elemanlar�n tersini yazd�r�r.
*/

char terscevir(char dizi1[],int size){
	int x;
	if(size>=0&&dizi1[0]!='\0')//Burada d�ng� yerine ge�en recursive fonksiyon ile diziyi ters yazd�rd�m.
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
