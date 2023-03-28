#include<stdio.h>
#include <stdlib.h>
/*
Alihan Durmuþ
20120205028
Bu program girilen kelimeleri birleþtirerek bir dizide gösterir.
*/
char *string_birlestir(char *str1 , char *str2)
{   int x,y;
	char *yeni_string = (char *) malloc (14 * sizeof(char));//dizinin boyutunu burda belirttim.
	for(x=0;str1[x]!='\0';x++)
	{
	yeni_string[x] = str1[x];
    }
	yeni_string[x] = ' ';
	x++;
	for(y=0;str2[y]!='\0';y++)
	{
	yeni_string[x] = str2[y];
	x++;
    }
    for(x=0;yeni_string[x]!='\0';x++)
    printf("%c",yeni_string[x]);
}

int main()
{
	
	
	
	string_birlestir("Ali eve","Gel");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
