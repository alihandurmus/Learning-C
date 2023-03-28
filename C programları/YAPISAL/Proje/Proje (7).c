/*Enes Diler
 * Ödev2.1a
 * Koordinat Düzleminde Bölge Bulma
 * (switch-case)
*/


#include <stdio.h>

int main()
{
	int q;
	int a ,b;
	printf("Lutfen X noktasinin koordinatini giriniz:");
	scanf("%d",&a);
	printf("\nLutfen Y noktasinin koordinatini giriniz:");
	scanf("%d",&b);
	if (a>0 && b>0)
	q=1;
	else if (a>0 && b<0)
	q=4;
	else if (a<0 && b>0)
	q=2;
	else if (a<0 && b<0)
	q=3;
	else if (a==0 && b==0)
	q=0;
	else if (a>0 && b==0)
	q=8;
	else if (a<0 && b==0)
	q=8;
	else if (a==0 && b>0)
	q=9;
	else if (a==0 && b<0)
	q=9;

	switch (q)
	{
		case 1:
		printf("Koordinatiniz 1.Bolgede");
		break;
		case 2:
		printf("Koordinatiniz 2.Bolgede");
		break;
		case 3:
		printf("Koordinatiniz 3.Bolgede");
		break;
		case 4:
		printf("Koordinatiniz 4.Bolgede");
		break;
		case 0:
		printf("Koordinatiniz Orijin");
		break;
		case 8:
		printf("Koordinatiniz X Ekseni Uzerinde");
		break;
		case 9:
		printf("Koordinatiniz Y Ekseni Uzerinde");
		break;
	}
		
	return 0;
}

