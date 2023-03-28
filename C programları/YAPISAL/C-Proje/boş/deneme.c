 #include <stdio.h>

 struct ucus{
 int ucusNo;
 char pilot [ 20 ];
 char nereden[ 20 ];
 char nereye[ 20 ];
 char kalkis[ 5 ];
 char varis[ 5 ];
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

 if ( ( cfPtr = fopen( "ursdb.txt", "r +" ) ) == NULL )
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
 struct ucus yeniucus= { 0, "", "", "", 0.0 };

 if ( (yazPtr = fopen( "ucuslar.txt", "w" ) ) == NULL )
 printf( "Dosya acilamadi.\n" );
 else {
 rewind( okuPtr );
 fprintf( yazPtr, "%-6s%-16s%-11s%-11s%10s\n",
 "UcusNo", "Pilot", "Nereden","Nereye", "Saat" );

 while ( !feof( okuPtr ) ) {
 fread( &yeniucus, sizeof( struct ucus), 1, okuPtr );


 if ( yeniucus.ucusNo != 0 )
 fprintf( yazPtr, "%-6d%-16s%-11s%-11s%10.2f\n",
 yeniucus.ucusNo, yeniucus.pilot,
 yeniucus.nereden, yeniucus.nereye, yeniucus.saat );
 }

 fclose( yazPtr );
 }

 }

 void kayitGuncelle ( FILE *fPtr )
 {
 int hesap;
 double guncelle;
 struct ucus yeniucus = { 0, "", "", "", 0.0 };

       printf( "Guncellenecek Hesap Numarasini giriniz.: ( 1 - 100 ): " );
 scanf( "%d", &hesap);
 fseek( fPtr, ( hesap - 1 ) * sizeof( struct ucus ),
 SEEK_SET );
 fread( &yeniucus, sizeof ( struct ucus ), 1, fPtr );

 if ( yeniucus.ucusNo== 0 )
 printf( "Hesap#%d hakkinda bilgi yok.\n", hesap);
 else {
 printf( "%-6d%-16s%-11s%-11s%10.2f\n\n",
 yeniucus.ucusNo, yeniucus.pilot,
 yeniucus.nereden, yeniucus.nereye, yeniucus.saat);
       printf( "borc ( + ) ya da odeme ( - ) giriniz: " );
 scanf( "%lf", &guncelle);
 yeniucus.saat += guncelle;
 printf( "%-6d%-16s%-11s%-11s%10.2f\n\n",
 yeniucus.ucusNo, yeniucus.pilot,
 yeniucus.nereden, yeniucus.nereye, yeniucus.saat);
 fseek( fPtr, ( hesap- 1 ) * sizeof( struct ucus),
 SEEK_SET );
 fwrite( &yeniucus, sizeof( struct ucus), 1, fPtr );
 }
 }

 void kayitSil( FILE *fPtr )
 {
 struct ucus yeniucus, bosyeniucus= { 0, "", "", "", 0 };
 int hesapNum;

 printf( "Silinecek hesap numarasini giriniz ( 1 - 100 ): " );
 scanf( "%d", &hesapNum);
 fseek( fPtr, ( hesapNum - 1 ) * sizeof( struct ucus),

 SEEK_SET );
 fread( &yeniucus, sizeof( struct ucus), 1, fPtr );

 if ( yeniucus.ucusNo == 0 )
 printf( "Hesap%d bulunamadi.\n", hesapNum);
 else {
 fseek( fPtr, ( hesapNum - 1 ) * sizeof( struct ucus),
 SEEK_SET );
 fwrite( &bosyeniucus, sizeof( struct ucus), 1, fPtr );
 }
 }

 void yeniKayit ( FILE *fPtr )
 {
 struct ucus yeniucus = { 0, "", "", "", 0.0 };
 int hesapNum;
 printf( "Yeni hesap numarasini giriniz ( 1 - 100 ): " );
 scanf( "%d", &hesapNum);
 fseek( fPtr, ( hesapNum - 1 ) * sizeof( struct ucus),
 SEEK_SET );
 fread( &yeniucus, sizeof( struct ucus), 1, fPtr );

 if ( yeniucus.ucusNo!= 0 )
 printf( "Hesap #%d zaten var.\n", yeniucus.ucusNo);
 else {
 printf( "pilot nerden nereye saat(12.12) \n? " );
 scanf( "%s%s%s%lf", &yeniucus.pilot, &yeniucus.nereden,
 &yeniucus.nereye, &yeniucus.saat);
 yeniucus.ucusNo= hesapNum;
 fseek( fPtr, ( yeniucus.ucusNo- 1 ) *
 sizeof( struct ucus), SEEK_SET );
 fwrite( &yeniucus, sizeof( struct ucus), 1, fPtr );
 }
 }

 int secimGir( void )
 {
 int menuSec;

 printf( "\nSeciminiz.\n"
 "1  Yazdirmak icin\n"
 "2  ucus Guncelle \n"
 "3  Yeni ucus \n"
 "4  ucus sil \n"
 "5  Cikis \n? " );
 scanf( "%d",&menuSec);
 return menuSec;
 }


