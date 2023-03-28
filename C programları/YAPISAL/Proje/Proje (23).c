/*Enes Diler
 * Adam Asmaca v3
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



char dizi[10][11] = {"istanbul", "ankara", "bursa", "izmir", "trabzon", "antalya", "adana", "erzurum", "samsun", "anadolu"};
char kelime[11], tahmin[11], hedef;
int k;

int uzunluk(char kelime[]){  //uzunluk bulan fonk tanımı
    int u = 0;  //uzunluk sıfır olarak tanımlı
    
    for (int i = 0;(kelime[i]!='\0'); i++)  //dizi sonundaki boşluğa gidene kadar 
        u++;
        return u; //uzunluk degerini dön
}

void atama(char dizi[10][11]){
	
	srand (time(NULL)); 
	k = rand() % 10;
	
	for(int i; (dizi[k][i]!='\0'); i++)
		
		kelime[i] = dizi[k][i];
	}

bool varmi(char hedef){  //bool return tipli fonksiyon
    
    for(int i = 0; (dizi[k][i] != '\0'); i++)  //dizinin her elemanını kontrol etmek için döngü
    {
        
        if(hedef == dizi[k][i])  //eşleşme olursa true dön
        return true;
        
        }    
    
    return false;  //döngüden true çıkmazsa false döner
    
    }    

void bildi (char tahmin[]){
	
	int j;
	for (j = 0; j < uzunluk(tahmin) ; j++){
	
	if (tahmin[j] == kelime[j])
	continue;
	
	else
	break;
    }

	if (j == uzunluk(tahmin) )
	printf("Tebrikler Bildiniz!");
}
	
void kaybet(char tahmin[]){
	
	int j = 0;
	for (j = 0; j < uzunluk(tahmin) ; j++){
	
	if (tahmin[j] != kelime[j]){
	printf("Oyunu Kaybettiniz :(");
	break;
    }
    }
}

int main(int argc, char **argv){
	
	atama (dizi);
	
	printf("\t\t\t\t\tAdam Asmaca Oyununa Hosgeldiniz :)\n");
	Sleep(1000);
	printf("Kurallar:\n");
	Sleep(1000);
	printf("1.Secilen Kelimedeki Karakter Sayisi Kadar Harf Girme Hakkiniz Vardir\n");
	Sleep(1000);
	printf("2.Harfleri Girdikten Sonra Oyunu Kazanmak Icin Kelimenin Hepsini Tek Seferde Girmeniz Lazim.\n");
	Sleep(1000);
	printf("3.Lutfen TR karakter kullanmayin ve kucuk harflerle oynayin.\n");
	Sleep(1000);
	printf("\t\t\t\t\tKelimeniz Seciliyor...\n");
	Sleep(4000);
	printf("Oyun %d Harf Uzunlugundaki Kelime ile Basladi !\n",uzunluk(kelime));
	
	
	
	for (int i = 0; i < (uzunluk(kelime)); i++){
	
	printf("\nHarf Giriniz:");
	
	scanf("%s",&hedef);
	
	bool result = varmi(hedef);
	printf("Girdiginiz Harf %s \n", result==true ? "Kelimede Var!":"Kelimede Yok!");
}
	
	printf("\t\t\t\t\tSimdi Kelimeyi Tahmin Edin:");
	scanf("%s",tahmin);
	
	bildi(tahmin);
	kaybet(tahmin);
	
	printf("\t\t\t\tKelime -->");
	
	
	for(int i=0; i < (uzunluk(kelime)); i++)
	{
		printf("%c",kelime[i]);
		}
		
    return 0;
}

