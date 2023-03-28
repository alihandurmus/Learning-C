#include<stdio.h>

#include<conio.h>

#include<string.h>

#include<stdlib.h>

#include<windows.h>

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
}
kayit = {0};
struct yolcu bosrez = {0};
char bos[] = "BOS";
int ucakNum = 0, u = 0, r = 0;
void logo();
void ucusguncelle(FILE * fPtr);
void ucusSil(FILE * fPtr);
void ucusmetinDosyasi(FILE * okuPtr);
void yeniucus(FILE * fPtr);
void rezervasyonsil(FILE * fPtr);
void rezervasyonduzelt(FILE * fPtr);
void rezervasyon(FILE * fPtr);
void rezerveucusbilgi(FILE * fPtr, int ucakNum);
void ucusbilgi(FILE * fPtr);
void kisaucusbilgi(FILE * fPtr, int ucakNum);
void rezervemetinDosyasi(FILE * okuPtr, int ucakNum);
void mevcutucuslar(FILE * fPtr);
void cizgi(char c);
void bosAta();
void clrscr();

int main() {

  FILE * cfPtr;
  int x;
  int a = 1;
  if ((cfPtr = fopen("ursdb.txt", "r +")) == NULL)

    printf("Dosya acilamadi.\n");

  else {
	  
	logo();
  
  while (a == 1) {
    
    system("COLOR 9F");
    printf("\t\t\t\t\t\t1-Yeni Ucus Olusturma\n\t\t\t\t\t\t2-Ucus Guncelleme\n\t\t\t\t\t\t3-Ucus Silme\n\t\t\t\t\t\t4-Rezervasyon\n\t\t\t\t\t\t5-Rezervasyon Duzelt\n\t\t\t\t\t\t6-Rezervasyon Sil\n\t\t\t\t\t\t7-Ucus Bilgi\n\t\t\t\t\t\t8-CIKIS\n\n\t\t\t\t\t\tLutfen Islem Secin :");
    scanf("%d", & x);

    switch (x) {

    case 1:
      {
        clrscr();
        system("COLOR E5");
        yeniucus(cfPtr);
        ucusmetinDosyasi(cfPtr);
        break;
      }

    case 2:
      {
        clrscr();
        system("COLOR E5");
        ucusguncelle(cfPtr);
        ucusmetinDosyasi(cfPtr);
        break;
      }

    case 3:
      {
        clrscr();
        system("COLOR E5");
        ucusSil(cfPtr);
        ucusmetinDosyasi(cfPtr);
        break;
      }

    case 4:
      {
        clrscr();
        system("COLOR B0");
        rezervasyon(cfPtr);
        //rezervemetinDosyasi(cfPtr,ucakNum);

        break;
      }

    case 5:
      {
        clrscr();
        system("COLOR B0");
        rezervasyonduzelt(cfPtr);
        //rezervemetinDosyasi(cfPtr,ucakNum);

        break;
      }

    case 6:
      {
        clrscr();
        system("COLOR B0");
        rezervasyonsil(cfPtr);
        //rezervemetinDosyasi(cfPtr,ucakNum);

        break;
      }

    case 7:
      {
        clrscr();
        system("COLOR FA");
        ucusbilgi(cfPtr);

        break;
      }

    case 8:
      {
        clrscr();
        system("COLOR 4C");
        a = 0;
        break;
      }

    }

  }

  ucusmetinDosyasi(cfPtr);

}
  return 0;
}

void clrscr() {
  system("@cls||clear");
}

void logo(){

	for(int i = 0; i < 3; i++){	
	
	system("COLOR 1F");
	Sleep(20);
	printf("\n\n\n\n\n\n\n\n\t\t\t\t||\t||\t|||||||\t\t||||||||||");
	Sleep(200);
	system("COLOR 2F");
	printf("\n\t\t\t\t||\t||\t||    ||\t||");
	Sleep(200);
	system("COLOR 3F");
	printf("\n\t\t\t\t||\t||\t||    ||\t||");
	Sleep(200);
	system("COLOR 4F");
	printf("\n\t\t\t\t||\t||\t|||||||\t\t||||||||||");
	Sleep(200);
	system("COLOR 5F");
	printf("\n\t\t\t\t||\t||\t|| \\\\\t\t\t||");
	Sleep(200);
	system("COLOR 6F");
	printf("\n\t\t\t\t||\t||\t||  \\\\\t\t\t||");
	Sleep(200);
	system("COLOR 9F");
	printf("\n\t\t\t\t||||||||||\t||   \\\\\t\t||||||||||");
	Sleep(500);
	clrscr();
	    }
	
	}

void bosAta() {

  for (int i = 0; i < 15; i++) {

    
    kayit.yeni[i] = bosrez;
    /*strcpy(kayit.yeni[i].isim, bos);
    strcpy(kayit.yeni[i].soyisim, bos);
    kayit.yeni[i].yas = 0;*/

  }

}

void cizgi(char c) {

  for (int i = 120; i > 0; i--) {

    printf("%c", c);
  }
  printf("\n");
}

void mevcutrezervasyonlar(FILE * fPtr) {

  for (int i = 1; i <= 15; i++) {

    kayit.ucusno = 0;

    fseek(fPtr, (i - 1) * sizeof(struct ucus), SEEK_SET);
    fread( & kayit, sizeof(struct ucus), 1, fPtr);

    if (kayit.ucusno != 0) {
      u = 1;
      //kayit.ucusno = i;
      printf("\nUcus %d\n", i);
      cizgi('*');
      printf("Ucus No: %d \nPilot: %s\nNereden: %s \tNereye: %s\nKalkis: %s\n\n", kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
      cizgi('-');
      if (u == 1) {

        printf("Rezervasyonlar: \n");
        for (int j = 0; j <= 15; j++) {
          
          if (kayit.yeni[j].isim != bosrez.isim) {

            r = 1;
            
            printf("-Isim: %s -Soyisim: %s -Yas: %d -Ucus No: %d  -Koltuk: %d\n\n", kayit.yeni[i].isim, kayit.yeni[i].soyisim, kayit.yeni[i].yas, kayit.ucusno, i);
            
            break;
          }
        }
      }
    }
    if (r == 0 && u == 1){
    
      printf("\n-----Mevcut Rezervasyon Yok !-----\n");
      cizgi('-');}
  }
  if (u == 0){
    
    printf("\n---Mevcut Ucus Yok !---\n");
    cizgi('-');}
}

void mevcutucuslar(FILE * fPtr) {

  //printf("Mevcut Ucuslar: \n");
  for (int i = 1; i <= 15; i++) {

    kayit.ucusno = 0;

    fseek(fPtr, (i - 1) * sizeof(struct ucus), SEEK_SET);
    fread( & kayit, sizeof(struct ucus), 1, fPtr);

    if (kayit.ucusno != 0) {
      u = 1;
      kayit.ucusno = i;
      printf("Ucus %d\n", i);
      cizgi('*');
      printf("Ucus No: %d \nPilot: %s\nNereden: %s \tNereye: %s\nKalkis: %s\n", kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
      cizgi('-');
      
      cizgi(' ');
    }

  }
  if (u == 0){
    cizgi('-');
    printf("\n---Mevcut Ucus Yok !---\n");
    cizgi('-');}
}

void rezervemetinDosyasi(FILE * okuPtr, int ucakNum) {

  FILE * yazPtr;

  if ((yazPtr = fopen("rezervasyon.txt", "w")) == NULL)

    printf("Dosya acilamadi.\n");

  else {

    rewind(okuPtr);

    fprintf(yazPtr, "%-15s %-15s %-5s %-5s %-5s\n", "Isim", "Soyisim", "Yas", "UcakNo", "KoltukNo");

    while (!feof(okuPtr)) {

      fread( & kayit, sizeof(struct ucus), 1, okuPtr);

      if (kayit.ucusno != 0) {
		  
        for(int i = 0; i < 15; i++){
			
			if (kayit.yeni[i].yas == 0)
			continue;
			
			else
			fprintf(yazPtr, "%-15s %-15s %-5d %-6d %-5d\n", kayit.yeni[i].isim, kayit.yeni[i].soyisim, kayit.yeni[i].yas, kayit.ucusno, i);
			
			}
        
      }

      fclose(yazPtr);
    }
  }
}

void kisaucusbilgi(FILE * fPtr, int ucakNum) {

  //bosAta();
  kayit.ucusno = ucakNum;

  fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);
  fread( & kayit, sizeof(struct ucus), 1, fPtr);
  cizgi('*');
  printf("\nUcus No: %d \nPilot: %s\nNereden: %s \tNereye: %s\nKalkis: %s\n", kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
  cizgi('*');
}

void ucusbilgi(FILE * fPtr) {

  int ucakNum;
  mevcutucuslar(fPtr);
  if (u == 1) {
    //bosAta();
    printf("Gosterilecek Ucak No Giriniz : ");
    scanf("%d", & ucakNum);
    kayit.ucusno = ucakNum;

    fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);
    fread( & kayit, sizeof(struct ucus), 1, fPtr);

    cizgi('*');
    printf("Ucus No: %d \nPilot: %s\nNereden: %s \tNereye: %s\nKalkis: %s\n", kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
    cizgi('*');
    printf("\nMevcut Koltuklar: \n");
    cizgi('-');
    cizgi('/');
    for (int i = 1; i <= 15; i++) {

      if (kayit.yeni[i].yas == 0)
        printf("Koltuk No:%d %s\n", i, bos);

      else
        printf("Koltuk No:%d\t-%s-\n", i, kayit.yeni[i].isim);
    }
    cizgi('/');
  }
}

void rezerveucusbilgi(FILE * fPtr, int ucakNum) {

  //bosAta();
  kayit.ucusno = ucakNum;

  fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);
  fread( & kayit, sizeof(struct ucus), 1, fPtr);
  cizgi('*');
  printf("\nUcus No: %d \nPilot: %s\nNereden: %s \tNereye: %s\nKalkis: %s\n", kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
  cizgi('*');
  cizgi('-');
  printf("\n");
  
  
  printf("\nMevcut Koltuklar: \n");
  cizgi('/');
  for (int i = 1; i <= 15; i++) {

    if (kayit.yeni[i].yas == 0)
      printf("Koltuk No:%d %s\n", i, bos);

    else
      printf("Koltuk No:%d\t-%s-\n", i, kayit.yeni[i].isim);
  }
  cizgi('/');
}

void rezervasyon(FILE * fPtr) {

  int ucakNum, koltukno;
  mevcutucuslar(fPtr);
  if (u == 1) {
	//cizgi('*');
    printf("\nRezervasyon Yapacaginiz Ucak No Giriniz : ");
    scanf("%d", & ucakNum);
    kayit.ucusno = ucakNum;

    fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);
    fread( & kayit, sizeof(struct ucus), 1, fPtr);

    rezerveucusbilgi(fPtr, ucakNum);

    printf("\nKoltuk Secin: ");
    scanf("%d", & koltukno);

    printf("Yolcu Ismi: ");
    scanf("%15s", & kayit.yeni[koltukno].isim[0]);

    printf("Yolcu Soyisim  : ");
    scanf("%15s", & kayit.yeni[koltukno].soyisim[0]);

    printf("Yas  : ");
    scanf("%d", & kayit.yeni[koltukno].yas);

    fseek(fPtr, (kayit.ucusno - 1) * sizeof(struct ucus), SEEK_SET);
    fwrite( & kayit, sizeof(struct ucus), 1, fPtr);
    rezervemetinDosyasi(fPtr, ucakNum);
  }
}

void rezervasyonduzelt(FILE * fPtr) {

  int ucakNum, ekoltukno, ykoltukno;
  mevcutrezervasyonlar(fPtr);
  if (r == 1) {
	cizgi('/');
    printf("\nRezervasyon Duzelteceginiz Ucak No Giriniz : ");
    scanf("%d", & ucakNum);
    kayit.ucusno = ucakNum;

    fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);
    fread( & kayit, sizeof(struct ucus), 1, fPtr);

    rezerveucusbilgi(fPtr, ucakNum);

    printf("Eski Koltuk Numarasini Girin: ");
    scanf("%d", & ekoltukno);
    
    kayit.yeni[ekoltukno] = bosrez;
    
    printf("\nYeni Koltuk Secin: ");
    scanf("%d", & ykoltukno);

    printf("Yeni Yolcu Ismi: ");
    scanf("%15s", & kayit.yeni[ykoltukno].isim[0]);

    printf("Yeni Yolcu Soyisim  : ");
    scanf("%15s", & kayit.yeni[ykoltukno].soyisim[0]);

    printf("Yeni Yas  : ");
    scanf("%d", & kayit.yeni[ykoltukno].yas);

    
    fseek(fPtr, (kayit.ucusno - 1) * sizeof(struct ucus), SEEK_SET);
    fwrite( & kayit, sizeof(struct ucus), 1, fPtr);
    
    rezervemetinDosyasi(fPtr, ucakNum);
  }
}

void rezervasyonsil(FILE * fPtr) {
  
  
  int ucakNum, koltukno;
  mevcutrezervasyonlar(fPtr);
  if (r == 1) {
	  cizgi('*');
    printf("\nRezervasyon Silinecek Ucak No : ");
    scanf("%d", & ucakNum);
    kayit.ucusno = ucakNum;

    fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);
    fread( & kayit, sizeof(struct ucus), 1, fPtr);

    rezerveucusbilgi(fPtr, ucakNum);

    printf("\nKoltuk sec: ");
    scanf("%d", & koltukno);

    /*strcpy(kayit.yeni[koltukno].isim, "BOS");

    strcpy(kayit.yeni[koltukno].soyisim, "BOS");

    kayit.yeni[koltukno].yas = 0;*/
    
    kayit.yeni[koltukno] = bosrez;
    
    

    fseek(fPtr, (kayit.ucusno - 1) * sizeof(struct ucus), SEEK_SET);
    fwrite( & kayit, sizeof(struct ucus), 1, fPtr);
    rezervemetinDosyasi(fPtr, ucakNum);
    printf("SILINDI");
  }
}

void yeniucus(FILE * fPtr) {

  int ucakNum;
  struct ucus kayit = {0};
  cizgi('/');
  printf("\nYeni Ucak No Giriniz : ");

  scanf("%d", & ucakNum);

  fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus),SEEK_SET);

  fread( & kayit, sizeof(struct ucus), 1, fPtr);

  if (kayit.ucusno != 0)

    printf("Ucak %d Zaten Var.\n", kayit.ucusno);

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
    
    bosAta();

    }
}

void ucusmetinDosyasi(FILE * okuPtr) {

  FILE * yazPtr;

  if ((yazPtr = fopen("ucuslar.txt", "w")) == NULL)

    printf("Dosya Acilamadi.\n");

  else {

    rewind(okuPtr);

    fprintf(yazPtr, "%-10s %-15s %-15s %-15s %-6s\n", "Ucak No", "Pilot", "Nereden", "Nereye", "Kalkis");

    while (!feof(okuPtr)) {

      fread( & kayit, sizeof(struct ucus), 1, okuPtr);

      if (kayit.ucusno != 0)
        
        fprintf(yazPtr, "%-10d %-15s %-15s %-15s %-5s\n", kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
    }
    fclose(yazPtr);
  }
}

void ucusSil(FILE * fPtr) {

  struct ucus bosucus = {0};
  int ucusno;
  mevcutucuslar(fPtr);
  if (u == 1) {
	cizgi('/');
    printf("\nSilinecek Ucus Numarasini Giriniz : ");
    scanf("%d", & ucusno);

    fseek(fPtr, (ucusno - 1) * sizeof(struct ucus), SEEK_SET);
    fread( & kayit, sizeof(struct ucus), 1, fPtr);

    if (kayit.ucusno == 0)
      printf("Ucus -%d- Bulunamadi.\n", ucusno);

    else {
	  
	  
      fseek(fPtr, (ucusno - 1) * sizeof(struct ucus), SEEK_SET);
      fwrite( & bosucus, sizeof(struct ucus), 1, fPtr);
      printf("Silindi !\n");
    }
  }
}

void ucusguncelle(FILE * fPtr) {

  int ucakNum;
  mevcutucuslar(fPtr);

  if (u == 1) {
	  cizgi('/');
    printf("\nGuncellemek Istediginiz Ucak No : ");
    scanf("%d", & ucakNum);

    fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);
    fread( & kayit, sizeof(struct ucus), 1, fPtr);

    if (kayit.ucusno != 0) {

      kisaucusbilgi(fPtr, ucakNum);

      printf("Yeni Pilot Ismi Gir: ");
      scanf("%s", & * kayit.pilot);

      printf("Yeni Kalkis Yeri: ");
      scanf("%s", & * kayit.nereden);

      printf("Yeni Varis Yeri: ");
      scanf("%s", & * kayit.nereye);

      printf("Yeni Kalkis Saati: ");
      scanf("%s", & * kayit.kalkis);

      fseek(fPtr, (kayit.ucusno - 1) * sizeof(struct ucus), SEEK_SET);
      fwrite( & kayit, sizeof(struct ucus), 1, fPtr);

      printf("Ucus Guncellendi !\n");
    } else
      printf("---Boyle Bir Ucus Yok---\n");
  }
}
