#include<stdio.h>
struct ogrenci
{
	char isim[20];
	char soyisim[20];
	int yas;
	
	
	
};
void goster(struct ogrenci talebe)
{   struct ogrenci *tut;
	tut = &talebe;
printf("%s %s %d",(*tut).isim,(*tut).soyisim,(*tut).yas); //buarada parantez içine almadığımız zaman hata veriyor öncelik var heralde.
}
struct ogrenci degerAl()
{   
	struct ogrenci yeni;
	printf("Ogrencinin bilgilerini giriniz:");
	scanf("%s %s %d",&yeni.isim,&yeni.soyisim,&yeni.yas);

return yeni;


};

int main()
{
    struct ogrenci ogrenciler = degerAl();
    
    
    goster(ogrenciler);

     















return 0;
}
