/*Enes Diler
 * Binary Search
 */
#include <stdio.h>

int dizi[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

int ikiliarama(int hedef, int dizi[], int bas, int son)
{
	while(bas <= son)
	{
		int o = bas + (son - bas) / 2;
		
		if (dizi[o] == hedef)
		return o + 1;
	
		
		if (dizi[o] < (hedef))
		bas = o + 1;
	
		else
		son = o - 1;
	    }
	return -1;
	}

int main(int argc, char **argv)
{
	int n = sizeof(dizi) / sizeof(dizi[0]); 
    int hedef;
    
    printf("Dizi:");
	for (int i=0; i < 20; i++){
	printf("%d, ",dizi[i]);
	}
    
    printf("\nAramak istediginiz sayiyi girin:\n");
	scanf("%d",&hedef);
    
    int sonuc = ikiliarama(hedef, dizi, 0, n-1); 
    
    if (sonuc == -1) 
    printf("Boyle Bir Sayi Yok!");
    
    else
    printf("%d Sayisi %d. Eleman Olarak Bulundu!",hedef,sonuc);

	return 0;
}

