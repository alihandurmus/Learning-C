/*ENES DİLER
 * KAYNAMA NOKTASINDAN MADDE BULMA
 */


#include <stdio.h>

int main()
{
	float k;
	printf("KAYNAMA NOKTASI GIRIN:");
	scanf("%f",&k);
        if (k>=95 && k<=105){
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
		printf("MADDE TANIMLANAMADI");
	    }
			
	
	return 0;
}

