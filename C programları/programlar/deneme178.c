#include <stdio.h>
#include <math.h>
struct zaman{
	int saat;
	int dakika;
	int saniye;
	};
	
	void topla1(struct zaman zaman1,struct zaman zaman2,struct zaman *zaman3){
	
	zaman3->saniye = zaman2.saniye + zaman1.saniye;
	zaman3->dakika = zaman1.dakika + zaman2.dakika;
	zaman3->saat = zaman1.saat + zaman2.saat;
	
	while(zaman3->saniye > 60 || zaman3->dakika > 60){
	
	if(zaman3->saniye > 60){
		zaman3->dakika+= zaman3->saniye/60;
		zaman3->saniye= zaman3->saniye % 60; 
		}

	if (zaman3->dakika > 60){
		zaman3->saat+= zaman3->dakika/60;
		zaman3->dakika= zaman3->dakika % 60; 
		}
	}
}
	

	
int main()
{
	double m[3][4][5];
	printf("%p\n",&m[0][0]);
	
	printf("%p\n",m);
	
	printf("%p",&m[0][0][0]);
	
	printf("%p",m[0][0][0]);
	
/*struct zaman z1 = {1,45,45};
struct zaman z2 = {3,45,50};
struct zaman z3 ;
	topla1(z1,z2,&z3);
	printf("%d : %d :%d",z3.saat,z3.dakika,z3.saniye);*/
	return 0;
}








/*struct zaman topla1(struct zaman zaman1,struct zaman zaman2){
	struct zaman zaman3 = {};
	zaman3.saniye = zaman2.saniye + zaman1.saniye;
	zaman3.dakika = zaman1.dakika + zaman2.dakika;
	zaman3.saat = zaman1.saat + zaman2.saat;
	
	while(zaman3.saniye > 60 || zaman3.dakika > 60){
	
	if(zaman3.saniye > 60){
		zaman3.dakika+= zaman3.saniye/60;
		zaman3.saniye= zaman3.saniye % 60; 
		}

	if (zaman3.dakika > 60){
		zaman3.saat+= zaman3.dakika/60;
		zaman3.dakika= zaman3.dakika % 60; 
		}
	}
	return zaman3;}*/
