/*Enes Diler
 * Lab12
 * Saat Toplama
 */


#include <stdio.h>

struct Time{  //saat yapısı tanımı
	int second;
	int minute;
	int hour;
	};

int main()
{
	struct Time f, s, a;  //3 farklı saat deiğkeni tanımı
	int x, y;  //işlem elemanları
	
	printf("Ilk zamani (Saat:Dakika:Saniye)olacak sekilde girin:");
	scanf("%d:%d:%d",&f.hour,&f.minute,&f.second);  //ilk saati al
	
    printf("Ikinci zamani (Saat:Dakika:Saniye)olacak sekilde girin:");
	scanf("%d:%d:%d",&s.hour,&s.minute,&s.second);  //sonraki saati al
	
	x = (f.hour*3600+f.minute*60+f.second) + (s.hour*3600+s.minute*60+s.second); //iki saatin saniyelerini  toplama
	y = x % 3600; //saatten kalanı bulma
	a.hour = x/3600; //saat
	a.minute = y / 60;  
	a.second =  y % 60;
	
	printf("Sonuc: %d Saat %d Dakika %d Saniye",a.hour,a.minute,a.second); //sonuc
	return 0;
}
