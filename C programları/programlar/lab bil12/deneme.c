#include<stdio.h>
#include<string.h>
/*
Alihan Durmu�
20120205028
Bu program dosya olu�turmay� kopyalamay� yapar.
*/
int main ()
{
	FILE *f;//Dosyalar�m�z�n pointerlar�n� burda tan�mlad�k.
	FILE *newf;
	char satir[2]="\n";//Burada kopyalamadan �nce sat�r atlamas� i�in bir char tan�mlad�k.
	newf = fopen("dosya2.txt","r");
	
	
	
	if(newf==NULL)
	{
	return 0;
	}
	f = fopen("dosya1.txt","a");//Burada a ile a�arak yeni dosyaya ekleme yapt�k dosya 2 yi dosya 1 e kopyalad�k.
	fputs(satir,f);
	char c;
	while((c = fgetc(newf))!=EOF)
	{
	     fputc(c,f);
    }
	
	fclose(f);
	fclose(newf);
	if(remove("dosya2.txt") == 0)//En sonda dosya 2 yi burada sildik.
	printf("Deleted successfully");
	else
	printf("Unable to delete the file");
	
	return 0;
}
