 #include <stdio.h>

 struct musteriVerisi{
 int hspNo;
 char soyisim [ 15 ];
 char isim[ 10 ];
 double bakiye;
 };

 int secimGir( void );
 void metinDosyasi ( FILE * );
 void kayitGuncelle ( FILE * );
 void yeniKayit ( FILE * );
 void kayitSil ( FILE * );

 int main( )
 {
 FILE *cfPtr;
 int secim;

 if ( ( cfPtr = fopen( "kredi.dat", "r +" ) ) == NULL )
 printf( "Dosya acilamadi.\n" );
 else {

 while ( ( secim = secimGir( ) ) != 5 ) {

 switch ( secim ) {
 case 1:
 metinDosyasi ( cfPtr );
 break;
 case 2:
 kayitGuncelle( cfPtr );
 break;
 case 3:
 yeniKayit( cfPtr );
 break;
 case 4:
 kayitSil( cfPtr );
 break;
}
 }

 fclose( cfPtr );
 }

 return 0;
 }

 void metinDosyasi( FILE *okuPtr )
 {
 FILE *yazPtr;
 struct musteriVerisi musteri= { 0, "", "", 0.0 };

 if ( (yazPtr = fopen( "hesaplar.txt", "w" ) ) == NULL )
 printf( "Dosya acilamadi.\n" );
 else {
 rewind( okuPtr );
 fprintf( yazPtr, "%-6s%-16s%-11s%10s\n",
 "HspNo", "Soyisim", "isim","Bakiye" );

 while ( !feof( okuPtr ) ) {
 fread( &musteri, sizeof( struct musteriVerisi), 1, okuPtr );


 if ( musteri.hspNo != 0 )
 fprintf( yazPtr, "%-6d%-16s%-11s%10.2f\n",
 musteri.hspNo, musteri.soyisim,
 musteri.isim, musteri.bakiye );
 }

 fclose( yazPtr );
 }

 }

 void kayitGuncelle ( FILE *fPtr )
 {
 int hesap;
 double guncelle;
 struct musteriVerisi musteri = { 0, "", "", 0.0 };

       printf( "Guncellenecek Hesap Numarasini giriniz.: ( 1 - 100 ): " );
 scanf( "%d", &hesap);
 fseek( fPtr, ( hesap - 1 ) * sizeof( struct musteriVerisi ),
 SEEK_SET );
 fread( &musteri, sizeof ( struct musteriVerisi ), 1, fPtr );

 if ( musteri.hspNo== 0 )
 printf( "Hesap#%d hakkinda bilgi yok.\n", hesap);
 else {
 printf( "%-6d%-16s%-11s%10.2f\n\n",
 musteri.hspNo, musteri.soyisim,
 musteri.isim, musteri.bakiye);
       printf( "borc ( + ) ya da odeme ( - ) giriniz: " );
 scanf( "%lf", &guncelle);
 musteri.bakiye += guncelle;
 printf( "%-6d%-16s%-11s%10.2f\n",
 musteri.hspNo, musteri.soyisim,
 musteri.isim, musteri.bakiye);
 fseek( fPtr, ( hesap- 1 ) * sizeof( struct musteriVerisi),
 SEEK_SET );
 fwrite( &musteri, sizeof( struct musteriVerisi), 1, fPtr );
 }
 }

 void kayitSil( FILE *fPtr )
 {
 struct musteriVerisi musteri, bosMusteri= { 0, "", "", 0 };
 int hesapNum;

 printf( "Silinecek hesap numarasini giriniz ( 1 - 100 ): " );
 scanf( "%d", &hesapNum);
 fseek( fPtr, ( hesapNum - 1 ) * sizeof( struct musteriVerisi),

 SEEK_SET );
 fread( &musteri, sizeof( struct musteriVerisi), 1, fPtr );

 if ( musteri.hspNo == 0 )
 printf( "Hesap%d bulunamadi.\n", hesapNum);
 else {
 fseek( fPtr, ( hesapNum - 1 ) * sizeof( struct musteriVerisi),
 SEEK_SET );
 fwrite( &bosMusteri, sizeof( struct musteriVerisi), 1, fPtr );
 }
 }

 void yeniKayit ( FILE *fPtr )
 {
 struct musteriVerisi musteri= { 0, "", "", 0.0 };
 int hesapNum;
 printf( "Yeni hesap numarasini giriniz ( 1 - 100 ): " );
 scanf( "%d", &hesapNum);
 fseek( fPtr, ( hesapNum - 1 ) * sizeof( struct musteriVerisi),
 SEEK_SET );
 fread( &musteri, sizeof( struct musteriVerisi), 1, fPtr );

 if ( musteri.hspNo!= 0 )
 printf( "Hesap #%d zaten var.\n", musteri.hspNo);
 else {
 printf( "Soyisim, isim ve bakiye giriniz\n? " );
 scanf( "%s%s%lf", &musteri.soyisim, &musteri.isim,
 &musteri.bakiye);
 musteri.hspNo= hesapNum;
 fseek( fPtr, ( musteri.hspNo- 1 ) *
 sizeof( struct musteriVerisi), SEEK_SET );
 fwrite( &musteri, sizeof( struct musteriVerisi), 1, fPtr );
 }
 }


 int secimGir( void )
 {
 int menuSec;

 printf( "\nSeciminiz.\n"
 "1  Yazdirmak icin\n"
 " \"hesaplar.txt\" isminde metin dosyasi olustur\n"
 "2  Hesap Guncelle \n"
 "3  Yeni hesap olustur \n"
 "4  Hesap sil \n"
 "5  Cikis \n? " );
 scanf( "%d",&menuSec);
 return menuSec;
 }


