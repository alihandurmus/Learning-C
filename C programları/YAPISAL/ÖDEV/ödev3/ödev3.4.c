/*ödev3.4
 */
#include <stdio.h>

int main()
{
	int sayi;  //sayi tanimla
	printf("Lutfen Bir Sayi Girin :"); //sayi iste 
	scanf("%d",&sayi);  //sayi al
	
	for (int a1=sayi;a1>=1;a1--)  //rakam tanimi ve  döngü başlat
		{
		printf("\n\n"); 
		for(int b1=a1;b1>=1;b1--) //rakam adedi tanimi ve döngü başlat
		printf("%d\t",a1); //sayi yaz
		}
	return 0;
}

