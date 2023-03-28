/*
 */

#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

bool bildi(char tahmin[]){ //bildiği taktirde dönecek fonk
	
	int j;  //for için değişken
	for (j = 0; j < strlen(tahmin); j++){   //her harfi  kontrol etmek için for
	
	if (tahmin[j] != '_')  //aynıysa devam et
	continue;
	
	else  //değilse çık
	break;
    }

	if (j == strlen(tahmin) )  //hepsini kontrol ettiğinde yaz
	return true;
	
	else
	return false;
}



int main(int argc, char **argv)
{
	srand (time(NULL)); 
	char *kelimeler[]={"harita","oda","mehmetcik","zar","muhendis","kabak","bilgisayar","sandalye","karincik","kolay"};
    char *sorulacak = kelimeler[rand() % 10];
    int  uzunluk = strlen(sorulacak);
    char bosluk[uzunluk];
    char tahmin;
    int k = 0;
 
    for(int u = 0; u < uzunluk; u++){
		bosluk[u] =  '_';
		}
		
	printf("%s",sorulacak);
		
	for (int i = 0; i < uzunluk; i++){
		k = 0;
		printf("\n%d  Bir Harf Giriniz: ",(i+1));
		scanf("%s",&tahmin);
		
		for (int j = 0; j < uzunluk; j++){
			
			if(tahmin == sorulacak[j]){
				bosluk[j] = tahmin;
				k = 1;}
		}
		
		if(k == 0) 
		printf("Bilemediniz!");
        
        printf("\n%s",bosluk);
        
        bool x = bildi(bosluk);
        
        if(x == 1){
        printf("\n-----Tebrikler Bildiniz!-----");
        break;}
	    
	    if(i == (uzunluk-1) && x == 0)
	    printf("\nUzgunum Kaybettiniz");
	}

    return 0;
}

