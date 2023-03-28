void cizgi(char c){

  for (int i=80;i>0;i--)

  printf("%c",c);

}

 void ucusbilgi(){
 for(int n=0;n<p;n++)

  {

    cizgi('*');

    printf("Ucus No:\t %d \tPilot:\t %s\nKalkis:\t%s Nereden:\t%s \tNereye:\t%s",yeniucus.ucusno, yeniucus.pilot, yeniucus.kalkis, yeniucus.nereden, yeniucus.nereye);

    cizgi('*');

    cizgi('_');

  }

}

 void yeniucus(){
	 
	 f=fopen("ursdb.txt","ab+");
	 
	 printf("Ucus No Gir:");
	 scanf("%d",&kayit.ucusno);
	 
	 printf("Pilot ismi Gir:");
	 scanf("%s",&kayit.pilot);
	 
	 printf("nerden ismi Gir:");
	 scanf("%s",&kayit.nereden);
	 
	 printf("nreye ismi Gir:");
	 scanf("%s",&kayit.nereye);
	 
	 printf("kalkis ismi Gir:");
	 scanf("%s",&kayit.kalkis);
	 
	 printf("varis ismi Gir:");
	 scanf("%s",&kayit.varis);
	 
	 fwrite(&kayit,sizeof(kayit),1,f);
	 }
	 
void yeniKayit ( FILE *fPtr ){
 struct ucus kayit = {0};
 int ucakNum;
 printf("Yeni ucak numarasini giriniz ( 1 - 100 ): ");
 scanf( "%d", &ucakNum);
 fseek( fPtr, ( ucakNum - 1 ) * sizeof( struct ucus),
 SEEK_SET );
 fread( &kayit, sizeof( struct ucus), 1, fPtr );

 if ( kayit.ucusno!= 0 )
 printf( "ucak #%d zaten var.\n", kayit.ucusno);
 else {
	 
	 printf("Pilot ismi Gir:");
	 scanf("%s",&yeniucus.pilot);
	 
	 printf("nerden ismi Gir:");
	 scanf("%s",&yeniucus.nereden);
	 
	 printf("nreye ismi Gir:");
	 scanf("%s",&yeniucus.nereye);
	 
	 printf("kalkis ismi Gir:");
	 scanf("%s",&yeniucus.kalkis);
	 
	 printf("varis ismi Gir:");
	 scanf("%s",&yeniucus.varis); 
 
     kayit.ucusno= ucakNum;
 fseek( fPtr, ( kayit.ucusno- 1 ) *
 sizeof( struct ucus), SEEK_SET );
 fwrite( &kayit, sizeof( struct ucus), 1, fPtr );
 }
 }

void ucusSil( FILE *fPtr ){
 struct ucus kayit, bosucus= {0};
 int ucusno;

 printf( "Silinecek Ucus numarasini giriniz ( 1 - 100 ): " );
 scanf( "%d", &ucusno);
 fseek( fPtr, ( ucusno - 1 ) * sizeof( struct ucus),

 SEEK_SET );
 fread( &kayit, sizeof( struct ucus), 1, fPtr );

 if ( kayit.ucusno == 0 )
 printf( "Ucus%d bulunamadi.\n", ucusno);
 else {
 fseek( fPtr, ( ucusno - 1 ) * sizeof( struct ucus),
 SEEK_SET );
 fwrite( &bosucus, sizeof( struct ucus), 1, fPtr );
 }
 }

void metinDosyasi(FILE * okuPtr) {

  FILE * yazPtr;

  if ((yazPtr = fopen("metin.txt", "w")) == NULL)

    printf("Dosya acilamadi.\n");

  else {

    rewind(okuPtr);

    fprintf(yazPtr, "%-10s %-15s %-15s %-15s %-6s\n","Ucak No","Pilot", "Nereden","Nereye", "Kalkis");

    while (!feof(okuPtr)) {

      fread(&kayit, sizeof(struct ucus), 1, okuPtr);

      if (kayit.ucusno != 0)

        fprintf(yazPtr, "%-10d %-15s %-15s %-15s %-5s\n", kayit.ucusno, kayit.pilot,
          kayit.nereden, kayit.nereye, kayit.kalkis);
    }
    fclose(yazPtr);
  }
}
