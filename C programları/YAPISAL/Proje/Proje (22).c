/*Enes Diler
 * Binary Search*/

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


int dizi[]={1,2,5,6,8,9,12,58,69,77,178,179,180,190,200,201};  //global integer dizi tanımı

/*int uzunluk(int dizi[]){             //dizi uzunluğu bilinimiyorsa kullanılabilir
    int u = 0;
    
    for (int i = 0;(dizi[i]!='\0'); i++)
        u++;
        return u;
    }*/


bool binary_search(int hedef)  //bool return tipli fonksiyon
{
	
	for(int i = 0; i < 16; i++)  //dizinin her elemanını kontrol etmek için döngü
	{
		
		if(hedef == dizi[i])  //eşleşme olduğu taktirde true dön
		return true;
	    
	    }	
	
	return false;  //döngüden true çıkmazsa false döner
    
    }  

int main()
{
    
    int aranan = 202;  //aranan sayi tanımı
    bool result = binary_search(aranan);  //bool değişkene fonksiyonu sonucunu ata

    printf("Aradiginiz Rakam %s \n", result==true ? "Vardir":"Yoktur");  //sonuç çıktısı

    return 0;

}
