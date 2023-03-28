#include<stdio.h>

struct Notlar
{
	int matnot;
	int fennot;
	int turkcenot;
	
	
};
struct Ogrenci
{
	char isim[15];
	char soyisim[15];
	int  numara;
	int  yas;
	struct Notlar not;
};
int main()
{

struct Ogrenci Alihan = {"Alihan","Durmus",401,19};
Alihan.not.fennot = 40;
Alihan.not.matnot = 80;
Alihan.not.turkcenot = 50;
printf("%s %s %d %d %d %d %d",Alihan.isim,Alihan.soyisim,Alihan.numara,Alihan.yas,Alihan.not.fennot,Alihan.not.matnot,Alihan.not.turkcenot);
























return 0;
}
