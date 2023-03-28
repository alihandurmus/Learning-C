/*Enes Diler
 * Ödev2.2
 * Kaynama Noktasından Madde Bulma
*/


#include <stdio.h>

int main()
{
	float k;  //float deger tanımla kaynama noktası için
	printf("KAYNAMA NOKTASI GIRIN:");
	scanf("%f",&k);  //k.n al
        if (k>=95 && k<=105){  //her maddenin özelliklerine göre ayrı sonuç çıkarması için if-else if 
			printf("SU");
		}
		else if (k>=350 && k<=375){
			printf("CIVA");
		}
		else if (k>=1127 && k<=1247){
			printf("BAKIR");
		}
		else if (k<=2273 &&  k>=2053){
			printf("GUMUS");
		}
		else if (k<=2800 && k>=2525){
		printf("ALTIN");
	    }
		else{
		printf("MADDE TANIMLANAMADI");  //girilen sayı belirtlien aralıklarda değilse yaz
	    }
			
	
	return 0;
}

