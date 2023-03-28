#include<stdio.h>
struct Ogrenciler
{
	char isim[20];
	char soyisim[20];
	int yas;
	
	


};

int main()
{
   struct Ogrenciler ogrenciler[3];
   
   
   for(int i = 0;i<3;i++)
   {
   printf("%d .ogrencinin bilgilerini giriniz : ",i+1);
   scanf("%s %s %d",&ogrenciler[i].isim,&ogrenciler[i].soyisim,&ogrenciler[i].yas);
   }

   for(int i = 0;i<3;i++)
   {
   printf("%d .ogrencinin bilgileri %s %s %d\n",i,ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].yas);
   }




























return 0;
}
