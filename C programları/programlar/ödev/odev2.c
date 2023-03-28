#include<stdio.h>
#include<Windows.h>
/*
Alihan Durmuþ
20120205028
Bu program 100 ile 400 arasýndaki tüm rakamlarý çift olan sayýlarý bulur ve kaç tane olduðunu hesaplar.



*/
int main() {

  int sayi, sayac = 0; //"sayi" for 100 den 400 e kadar olan sayýlarý okumasý için tanýmladýðým deðiþken
  //"sayac" 100 ile 400 arasýndaki tüm rakamlarý çift olanlarýn sayýsýný bulmam için tanýmladýðým deðiþken

  for (sayi = 100; sayi >= 100 && sayi <= 400; sayi++) {

    if (sayi % 2 == 0) {

      if ((sayi / 10) % 2 == 0) { //Burada sayýyý her seferinde 10 a bölerek sistemin sayýynýn tüm rakamlarýna bakabilmesini saðladým.

        if ((sayi / 100) % 2 == 0) {
        	Sleep(150);

          sayac++;
          printf("%d,", sayi);
        }
      }
    }
  }

  printf("\n100 ile 400 arasi tum rakamlari cift olanlarin sayisi %d dir", sayac);

  return 0;

}
