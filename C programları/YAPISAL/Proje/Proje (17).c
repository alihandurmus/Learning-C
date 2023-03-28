/*Enes Diler
 * Binary Search
  */
#include <stdio.h>

int arama(int d[], int x);

int main()
{
	int dizi[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int x;
	printf("Dizi: ");
	for (int i=0; i < 20; i++){
	printf("%d, ",dizi[i]);
	}
	
	printf("\nAramak istediginiz sayiyi girin:");
	scanf("%d",&x);
	
	printf("%d Sayisi %d. Eleman Olarak Bulundu!",x,arama(dizi,x));
	
	return 0;
	}

int arama(int d[], int x)
{
	int size = sizeof(d)/sizeof(int);
	int bas = 0, son = size;
	
	while (bas<=son)
{
	int orta = (bas+son) / 2;
	
	if (d[orta] == x)
	return orta+1;

	else if(d[orta] > x)
	son = orta-1;

	else if(d[orta] > x)
	bas = orta+1;

}
    return -1;
}
