#include<stdio.h>
#include<Windows.h>
/*
Alihan Durmu�
20120205028
Bu program 100 ile 400 aras�ndaki t�m rakamlar� �ift olan say�lar� bulur ve ka� tane oldu�unu hesaplar.



*/
int main() {

  int sayi, sayac = 0; //"sayi" for 100 den 400 e kadar olan say�lar� okumas� i�in tan�mlad���m de�i�ken
  //"sayac" 100 ile 400 aras�ndaki t�m rakamlar� �ift olanlar�n say�s�n� bulmam i�in tan�mlad���m de�i�ken

  for (sayi = 100; sayi >= 100 && sayi <= 400; sayi++) {

    if (sayi % 2 == 0) {

      if ((sayi / 10) % 2 == 0) { //Burada say�y� her seferinde 10 a b�lerek sistemin say�yn�n t�m rakamlar�na bakabilmesini sa�lad�m.

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
