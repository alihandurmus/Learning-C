#include <stdio.h>
#include <ctype.h>
#include <string.h>
int buldu_mu(FILE *f,char *no)
{
   char a[150],a1[150];
while ( fgets(a,150,f)!=NULL)
{
  strncpy(a1,a,150);
  const char *pno = strtok(a1,"\t");
  
   if(strncmp(no,pno,3)==0)
   {
         printf("Id: %.10s\n",pno);
         printf("Isim: %.40s\n",strtok(NULL,"\t"));
         printf("Soy Isim: %.40s\n",strtok(NULL,"\t"));
        return 1;
   }  
   
 }
  return 0;
}
void ogrenci_ekle(FILE *f)
{ 
	char no[4],isim[40],soyisim[40];
	printf("No:");
    scanf("%10s",no);

	printf("Isim:");
	scanf("%40s",isim);

	printf("Soyisim:");
	scanf("%40s",soyisim);
	fprintf(f,"\n%s\t%s\t%s",no,isim,soyisim);
}
int main()
{
  char no[4];
  FILE *f = fopen("ogrenci.txt","a+");
  if(f == NULL)
  {
	printf("Dosya Bulunamadı");
	return 1; 
   }
  printf("Ogrenci no giriniz:");
  scanf("%3s",no);
  
  if(buldu_mu(f,no)==0)
  {
   fputs("Ogrenci bulunamadi\n",stdout);
   ogrenci_ekle(f);
  }

fclose(f);












return 0;
}
