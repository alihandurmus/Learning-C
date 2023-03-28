/*
 * Ödev1.1.c 
 * Enes Dİler
 * Ağırlıklı Not Ortalaması Hesaplama
 */


#include <stdio.h>

int main()
{
	float a,a1,b,b1,c,c1,d,d1,e,e1;
	printf("Lutfen 1.dersin AKTS sini giriniz\n");
	scanf("%f",&a);
	printf("Lutfen 1.dersten aldiginiz notu giriniz\n");
	scanf("%f",&a1);
	printf("Lutfen 2.dersin AKTS sini giriniz\n");
	scanf("%f",&b);
	printf("Lutfen 2.dersten aldiginiz notu giriniz\n");
	scanf("%f",&b1);
	printf("Lutfen 3.dersin AKTS sini giriniz\n");
	scanf("%f",&c);
	printf("Lutfen 3.dersten aldiginiz notu giriniz\n");
	scanf("%f",&c1);
	printf("Lutfen 4.dersin AKTS sini giriniz\n");
	scanf("%f",&d);
	printf("Lutfen 4.dersten aldiginiz notu giriniz\n");
	scanf("%f",&d1);
	printf("Lutfen 5.dersin AKTS sini giriniz\n");
	scanf("%f",&e);
	printf("Lutfen 5.dersten aldiginiz notu giriniz\n");
	scanf("%f",&e1);
	float s=(a*a1+b*b1+c*c1+d*d1+e*e1)/(a+b+c+d+e);
	printf("\tNot Ortalamaniz:%f",s);
	
	
	return 0;
}

