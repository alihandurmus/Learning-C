/* Şekil 11.11: fig11_11.c Rasgele erişimli bir dosyayı sıralı biçimde oluşturmak. */
 #include <stdio.h>

struct yolcu {
	
    char isim[15];
	char soyisim[15];
	int yas;
	
	};
struct ucus {

  int ucusno ;

  char pilot[20];

  char nereden[20];

  char nereye[20];

  char kalkis[5];

  struct yolcu yeni[15];
  };
 int main( )
 {
 int i;
 struct ucus bosVeri = {0};
 FILE *cfPtr;
 FILE *aPtr;
 FILE *bPtr;

aPtr = fopen( "ucuslar.txt", "w" );
bPtr = fopen( "rezervasyon.txt", "w" );

 if ( ( cfPtr = fopen( "ursdb.txt", "w" ) ) == NULL )
 printf( "Dosya açılamadı\n" );
 else {

 for ( i = 1; i <= 100; i++ )
 fwrite( &bosVeri, sizeof ( struct ucus), 1, cfPtr ); fclose ( cfPtr );
 }

 return 0;
 }
