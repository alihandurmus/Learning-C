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



char dizi[10][11] = {"istanbul", "ankara", "bursa", "izmir", "trabzon", "antalya", "adana", "erzurum", "samsun", "anadolu"};  //glonal dizi tanımı
char kelime[11], tahmin[11], hedef;  //kullanılacak diğer değişkenlerin tanımı
int k; //random sayısı için değişken 

int uzunluk(char kelime[]){  //uzunluk bulan fonk tanımı
    int u = 0;  //uzunluk sıfır olarak tanımlı
    
    for (int i = 0;(kelime[i]!='\0'); i++)  //dizi sonundaki boşluğa gidene kadar 
        u++;
        return u; //uzunluk degerini dön
}

void atama(char dizi[10][11]){  //atama fonc
	
	srand (time(NULL));   //her seferinde farklı sayı atması için 
	k = rand() % 10;  //random atama
	
	for(int i; (dizi[k][i]!='\0'); i++)  //diziden seçilen kelimeyi diğer diziye atama
		
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

void bildi (char tahmin[]){  //bildiği taktirde dönecek fonk
	
	int j;  //for için değişken
	for (j = 0; j < uzunluk(tahmin) ; j++){   //her harfi  kontrol etmek için for
	
	if (tahmin[j] == kelime[j])  //aynıysa devam et
	continue;
	
	else  //değilse çık
	break;
    }

	if (j == uzunluk(tahmin) )  //hepsini kontrol ettiğinde yaz
	printf("Tebrikler Bildiniz!");
}
	
void kaybet(char tahmin[]){
	
	int j = 0; 
	for (j = 0; j < uzunluk(tahmin) ; j++){
	
	if (tahmin[j] != kelime[j]){  //aynı olmayan harf varsa 
	printf("Oyunu Kaybettiniz :("); //yaz
	break; //ve çık
    }
    }
}

int main(int argc, char **argv){
	
	atama (dizi); //atama fonksiyonu çalıştır 
	
	printf("\t\t\t\t\tKelime : %s :D\n",kelime);
	
	printf("\t\t\t\t\tAdam Asmaca Oyununa Hosgeldiniz :)\n");  //giriş vs.
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
	Sleep(3000);
	printf("Oyun %d Harf Uzunlugundaki Kelime ile Basladi !\n",uzunluk(kelime));
	
	
	
	for (int i = 0; i < (uzunluk(kelime)); i++){ //keime uzunluğu kadar harf istemesi için for
	
	printf("\nHarf Giriniz:");  
	
	scanf("%s",&hedef);  //harf al
	    
	bool result = varmi(hedef);  //varmi fonk çağır varsa bildir
	printf("Girdiginiz Harf %s \n", result==true ? "Kelimede Var!":"Kelimede Yok!");
}
	
	printf("\t\t\t\t\tSimdi Kelimeyi Tahmin Edin:");  
	scanf("%s",tahmin); //tüm kelimeyi al
	
	bildi(tahmin);  //varsa
	kaybet(tahmin);  //yoksa 
	
	printf("\t\t\t\tKelime -->");    
	 
	
	for(int i=0; i < (uzunluk(kelime)); i++)
	{
		printf("%c",kelime[i]); //kelimenin dogrusunu yaz
		}
		
    return 0;
}

