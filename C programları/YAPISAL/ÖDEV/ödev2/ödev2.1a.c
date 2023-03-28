/*Enes Diler
 * Ödev2.1a
 * Koordinat Düzleminde Bölge Bulma
 * (if-else)
*/


#include <stdio.h>

int main()
{
	int a ,b;
	printf("Lutfen X noktasinin koordinatini giriniz:");
	scanf("%d",&a);
	printf("\nLutfen Y noktasinin koordinatini giriniz:");
	scanf("%d",&b);
	if (a>0 && b>0)
	printf("Koordinatinizin Bolgesi 1");
	else if (a>0 && b<0)
	printf("Koordinatinizin Bolgesi 4");
	else if (a<0 && b>0)
	printf("Koordinatinizin Bolgesi 2");
	else if (a<0 && b<0)
	printf("Koordinatinizin Bolgesi 3");
	else if (a==0 && b==0)
	printf("Koordinatiniz Orijin");
	else if (a>0 && b==0)
	printf("Koordinatiniz X Ekseni Uzerinde");
	else if (a<0 && b==0)
	printf("Koordinatiniz X Ekseni Uzerinde");
	else if (a==0 && b>0)
	printf("Koordinatiniz Y Ekseni Uzerinde");
	else if (a==0 && b<0)
	printf("Koordinatiniz Y Ekseni Uzerinde");
	
	return 0;
}

