#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void bosAta(){
	
	for(int i = 0; i < 15; i++){
		
		*kayit.yeni[i].isim = bos;
		*kayit.yeni[i].soyisim = bos;
		kayit.yeni[i].yas = 0;
		
		}
	
	}	
char bos[] = "BOS";
void cizgi(char c){

  for (int i=80;i>0;i--){

  printf("%c",c);
  }
  printf("\n");}
struct yolcu {
	
    char *isim[15];
	char *soyisim[15];
	int yas;
	
	};
struct ucus {

  int ucusno;

  char pilot[20];

  char nereden[20];

  char nereye[20];

  char kalkis[5];

  struct yolcu yeni[15];
  } kayit;
  
void yeniucus(FILE * fPtr) {

  int ucakNum;

  printf("Yeni Ucak No Giriniz(1-100) : ");
  scanf("%d", & ucakNum);

  fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus),SEEK_SET);
  fread( & kayit, sizeof(struct ucus), 1, fPtr);

  if (kayit.ucusno != 0)

    printf("Ucak %d zaten var.\n", kayit.ucusno);

  else {
    
    printf("Pilot Ismi Gir: ");
    scanf("%s", &*kayit.pilot);

    printf("Kalkis Yeri: ");
    scanf("%s", &*kayit.nereden);

    printf("Varis Yeri: ");
    scanf("%s", &*kayit.nereye);

    printf("Kalkis Saati: ");
    scanf("%s", &*kayit.kalkis);

    kayit.ucusno = ucakNum;

    fseek(fPtr, (kayit.ucusno - 1) * sizeof(struct ucus), SEEK_SET);
    fwrite(&kayit, sizeof(struct ucus), 1, fPtr);

    }
}

void ucusmetinDosyasi(FILE * okuPtr) {

  FILE * yazPtr;

  if ((yazPtr = fopen("metin.txt", "w")) == NULL)

    printf("Dosya acilamadi.\n");

  else {

    rewind(okuPtr);

    fprintf(yazPtr, "%-10s %-15s %-15s %-15s %-6s\n","Ucak No","Pilot", "Nereden","Nereye", "Kalkis");

    while (!feof(okuPtr)) {

      fread(&kayit, sizeof(struct ucus), 1, okuPtr);

      if (kayit.ucusno != 0)

        fprintf(yazPtr, "%-10d %-15s %-15s %-15s %-5s\n", kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
    }
    fclose(yazPtr);
  }}
  
void ucusSil( FILE *fPtr ){
 
 struct ucus bosucus= {0};
 int ucusno;

 printf( "Silinecek Ucus numarasini giriniz ( 1 - 100 ): " );
 scanf( "%d", &ucusno);
 
 fseek( fPtr, ( ucusno - 1 ) * sizeof( struct ucus),SEEK_SET );
 fread( &kayit, sizeof( struct ucus), 1, fPtr );

 if ( kayit.ucusno == 0 )
    printf( "Ucus%d bulunamadi.\n", ucusno);
 
 else {
 fseek( fPtr, ( ucusno - 1 ) * sizeof( struct ucus),SEEK_SET );
 fwrite( &bosucus, sizeof( struct ucus), 1, fPtr );
    }
}

void ucusguncelle(FILE * fPtr) {

  int ucakNum;

  printf("Ucak No Giriniz(1-100) : ");
  scanf("%d", & ucakNum);

  kayit.ucusno = ucakNum;

  fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus),SEEK_SET);
  fread( & kayit, sizeof(struct ucus), 1, fPtr);

  printf("Ucus No: %d \nPilot: %s\nNereden: %s \tNereye: %s\nKalkis: %s\n",kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);

  
    printf("Yeni Pilot Ismi Gir: ");
    scanf("%s", &*kayit.pilot);

    printf("Yeni Kalkis Yeri: ");
    scanf("%s", &*kayit.nereden);

    printf("Yeni Varis Yeri: ");
    scanf("%s", &*kayit.nereye);

    printf("Yeni Kalkis Saati: ");
    scanf("%s", &*kayit.kalkis);

    fseek(fPtr, (kayit.ucusno - 1) * sizeof(struct ucus), SEEK_SET);
    fwrite(&kayit, sizeof(struct ucus), 1, fPtr);

  }

void ucusbilgi(FILE * fPtr){
    
    int ucakNum;

    printf("gosterilcek Ucak No Giriniz(1-100) : ");
    scanf("%d", & ucakNum);
    kayit.ucusno = ucakNum;
    
    fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus),SEEK_SET);
    fread( & kayit, sizeof(struct ucus), 1, fPtr);
    
    printf("Ucus No: %d \nPilot: %s\nNereden: %s \tNereye: %s\nKalkis: %s\n",kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
    
    printf("\nmevcut koltuklar\n");
    
    for(int i = 1; i <= 15; i++){
		
		if(*kayit.yeni[i].isim == bos)
	    printf("%d,",i);
	    
	    else
	    printf("-%s-",*kayit.yeni[i].isim);
	}
}
