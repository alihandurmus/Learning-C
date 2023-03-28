#include<stdio.h>
#include<string.h>
/*
Alihan Durmuþ
20120205028
Bu program dosya oluþturmayý kopyalamayý yapar.
*/
int main ()
{
	FILE *f;//Dosyalarýmýzýn pointerlarýný burda tanýmladýk.
	FILE *newf;
	char satir[2]="\n";//Burada kopyalamadan önce satýr atlamasý için bir char tanýmladýk.
	newf = fopen("dosya2.txt","r");
	
	
	
	if(newf==NULL)
	{
	return 0;
	}
	f = fopen("dosya1.txt","a");//Burada a ile açarak yeni dosyaya ekleme yaptýk dosya 2 yi dosya 1 e kopyaladýk.
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
