/*Enes Diler
 * Palindrom or NOT? */
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

char dizi[]="nalannalan";  //global char dizi


int uzunluk(char kelime[]){  //uzunluk bulan fonk tanımı
    int u = 0;  //uzunluk sıfır olarak tanımlı
    
    for (int i = 0;(kelime[i]!='\0'); i++)  //dizi sonundaki boşluğa gidene kadar 
        u++;
        return u; //uzunluk degerini dön
}


bool esitMi(int bas, int son) { //fonk tanımı
    if (dizi[bas] != dizi[son-1]) //ilk ve son karakterler farklıysa false döndür
    return false; 
    
    if (bas == son)  //ortadaki değere gelindiğinde true dön(false dönmemiş olduğu için hepsi aynıdır)
    return true; 
  
    if (bas < son) //index eşitlenmediği sürece devam
    return esitMi(bas + 1, son - 1); 
  
    return true; 
}

int main()
{
    printf("Dizi uzunlugu: %d", uzunluk(dizi));  //uzunluk çıktısı
    printf("\nDizi palindrom mu: %s",(esitMi(0, uzunluk(dizi)) == 1? "Evet":"Hayir"));  //sonuç çıktısı
        
     return 0;
}
