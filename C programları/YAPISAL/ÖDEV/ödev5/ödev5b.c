/*Enes Diler Ödev5b
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

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int dizi[]={1,2,5,6,8,9,12,58,69,77,178,179,180,190,200,201};


bool binary_search(int hedef)  //bool return tipli fonksiyon
{
    
    for(int i = 0; (dizi[i] != '\0'); i++)  //dizinin her elemanını kontrol etmek için döngü (dizide 0 varsa ve uzunluk biliniyorsa "i < uzunluk" de kullanılabilir)
    {
        
        if(hedef == dizi[i])  //eşleşme olursa true dön
        return true;
        
        }    
    
    return false;  //döngüden true çıkmazsa false döner
    
    }  

int main()
{
    
    int aranan = 3;  //aranan sayi tanımı
    bool result = binary_search(aranan);  //bool değişkene fonksiyonu sonucunu ata

    printf("Aradiginiz Rakam %s \n", result==true ? "Vardir":"Yoktur");  //sonuç çıktısı

    return 0;

}

