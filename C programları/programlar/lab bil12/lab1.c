#include<stdio.h>


int main ()
{
	FILE *f;
	
	f = fopen("ogrenci.txt","r");
	
	if(f==NULL)
	{
	
	printf("Hata");
	return 1;
	}
	char c;
	while((c = fgetc(f))!=EOF)
	{
	
	
	printf("%c",c);
    }
	
	fclose(f);
	
	
	
	return 0;
}
