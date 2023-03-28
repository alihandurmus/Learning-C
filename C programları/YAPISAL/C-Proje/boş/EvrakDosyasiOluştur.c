/* Şekil 11.11: fig11_11.c Rasgele erişimli bir dosyayı sıralı biçimde oluşturmak. */
 #include <stdio.h>

struct yolcu {

  char isim[15];
  char soyisim[15];
  int yas;

};
struct ucus {

  int ucusno;

  char pilot[20];

  char nereden[20];

  char nereye[20];

  char kalkis[5];

  struct yolcu yeni[15];
}bosVeri = {0};

 int main( ){
 
 FILE *aPtr;
 FILE *bPtr;

aPtr = fopen( "ucuslar.txt", "w" );
bPtr = fopen( "rezervasyon.txt", "w" );


 return 0;
 }
