#include<stdio.h>
#include<string.h>
#include<unistd.h>
struct ogrenci
{
	char no[10];
	char isim[40];
}ogrenciler[100];
int c = 0;
int ogrencileri_oku(FILE *f)
{
	if(f == NULL)
	return 0;
	
	char a[150];
	
	while(fgets(a,150,f) != NULL && c<100)
	{
		char *no = strtok(a,"\t");
		char *isim = strtok(NULL,"\t");
		
		if(no != NULL && isim != NULL)
		{
			strncpy(ogrenciler[c].no,no,10);
			strncpy(ogrenciler[c].isim,isim,40);
			c++;
		}
	
	}
	return c;
}
void ogrencileri_yazdir()
{   for(int i=0;i<c;i++)
	printf("%.10s-%.40s\n",ogrenciler[i].no,ogrenciler[i].isim);
}

int main()
{
	FILE *f = fopen("ogrenci.txt","r");
	ogrencileri_oku(f);
	ogrencileri_yazdir();
return 0;
}

