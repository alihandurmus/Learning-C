/*Enes Diler
 * Ödev6b
 * Adama Asmaca v4
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

bool bildi(char tahmin[]) { //bildiği taktirde dönecek fonk

    int j; //for için değişken
    for (j = 0; j < strlen(tahmin); j++) { //her harfi  kontrol etmek için for

        if (tahmin[j] != '_') //aynıysa devam et
            continue;

        else //değilse çık
            break;
    }

    if (j == strlen(tahmin)) //hepsini kontrol ettiğinde yaz
        return true;

    else
        return false;
}

bool sonbildi(char sorulacak[], char son[]) { //bildiği taktirde dönecek fonk

    int j; //for için değişken
    for (j = 0; j < strlen(sorulacak); j++) { //her harfi  kontrol etmek için for

        if (sorulacak[j] == son[j]) //aynıysa devam et
            continue;

        else //değilse çık
            break;
    }

    if (j == strlen(sorulacak)) //hepsini kontrol ettiğinde yaz
        return true;

    else
        return false;
}

int main(int argc, char ** argv) {

    srand(time(NULL)); //her seferinde farklı kelime için
    char * kelimeler[] = {
        "harita",
        "oda",
        "mehmetcik",
        "zar",
        "muhendis",
        "kabak",
        "bilgisayar",
        "sandalye",
        "karincik",
        "kolay"
    };
    char * sorulacak = kelimeler[rand() % 10]; //sorulacak kelimeyi random seçme
    int uzunluk = strlen(sorulacak); //uzunluk atama
    char bosluk[uzunluk], son[uzunluk]; //boslukların gözükmesi için
    char tahmin; //girilen harf için
    int i = 0;
    int k = i;

    for (int u = 0; u < uzunluk; u++) //bpsluklara _ yazdirmak için
        bosluk[u] = '_';

    printf("\t\t\t\t\tKelime  %s :D\n", sorulacak);
    printf("\t\t\t\t\tAdam Asmaca Oyununa Hosgeldiniz :)\n"); //giriş vs.
    Sleep(500);
    printf("Kurallar:\n");
    Sleep(500);
    printf("1.Secilen Kelimedeki Karakter Sayisi Kadar Harf Girme Hakkiniz Vardir\n");
    Sleep(500);
    printf("2.Harfleri Girdikten Sonra Oyunu Kazanmak Icin Kelimenin Hepsini Tek Seferde Girmeniz Lazim.\n");
    Sleep(500);
    printf("3.Lutfen TR karakter kullanmayin ve kucuk harflerle oynayin.\n");
    Sleep(500);
    printf("\n\t\t\t\t\tKelimeniz Seciliyor...\n");
    Sleep(3000);
    printf("\nOyun %d Harf Uzunlugundaki Kelime ile Basladi !\n", uzunluk);

    for (int i = 0; i < uzunluk; i++) { //kelimedeki harf sayısı kadar harf almak için for

        k = 0;
        printf("\n(%d.HAK)  Bir Harf Giriniz: ", (i + 1));
        scanf("%s", & tahmin);

        for (int j = 0; j < uzunluk; j++) { //herf harf için kontrol eder 

            if (tahmin == sorulacak[j]) {
                bosluk[j] = tahmin; //bosluklara harfi gir
                k = 1;
            }
        }

        if (k == 0) //hiçibirinde yoksa yaz:
            printf("\nBu Harf Kelimede Yok!");

        printf("\n\t\t\t%s", bosluk); //kelimenin yeni halini yaz
        bool x = bildi(bosluk); //kelimedeki aynı hrflerden dolayı önceden hepsini bilirse bitir ve yaz 

        if (x == 1) {
            printf("\n\t\t\t\t\tKelime -->%s\n", sorulacak);
            printf("\n\t\t\t\t\t-----Tebrikler Bildiniz!-----");
            break;
        } else if (x == 0 && i == uzunluk - 1) {
            printf("\n\t\t\t\t\tSimdi Kelimeyi Tahmin Edin:");
            scanf("%s", son); //tüm kelimeyi al

            printf("\t\t\t\t\tKelime -->%s\n", sorulacak);

            bool y = sonbildi(sorulacak, son); //varsa
            if (y == 1)
                printf("\n\t\t\t\t\t-----Tebrikler Bildiniz!-----");
            else
                printf("\n\t\t\t\t\t-----Uzgunum Bilemediniz!-----");

            break;
        }
    }

    return 0;
}
