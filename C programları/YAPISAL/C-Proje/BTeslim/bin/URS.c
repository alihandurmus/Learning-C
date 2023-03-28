/* UÇAK REZERVASYON SİSTEMİ
 * ENES DİLER
 * BATUHAN KÜÇÜKAYDIN
 * AHMET ÇINAR
 * AHMET ENGİNTEPE
 * */
#include<stdio.h>

#include<conio.h>

#include<string.h>

#include<stdlib.h>

#include<windows.h>

struct yolcu {//Yolcunun bilgilerini tutmak için struct tanımlama

  char isim[15];
  char soyisim[15];
  int yas;

};
struct ucus {//Uçuş bilgilerini tutmak içim struct tanımlama

  int ucusno;

  char pilot[20];

  char nereden[20];

  char nereye[20];

  char kalkis[5];

  struct yolcu yeni[15];
}
kayit = {0};
struct yolcu bosrez = {0};//Yolcu değişkeni atama
char bos[] = "BOS";//Boş dizi atama
int ucakNum = 0, u = 0, r = 0;//Fonksiyonlar için global değişkenler
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
void rezervemetinDosyasi(FILE * okuPtr);
void mevcutucuslar(FILE * fPtr);
void cizgi(char c);
void bosAta();
void clrscr();

int main() {

  FILE * cfPtr;
  int x;
  
  if ((cfPtr = fopen("ursdb.txt", "r +")) == NULL)

    printf("Dosya acilamadi.\n");

  else {
	  
	logo();//Logo ekrana basma
  
  while (1) {
    
    system("COLOR 9F");//Renk verme
    printf("\t\t\t\t\t\t1-Yeni Ucus Olusturma\n\t\t\t\t\t\t2-Ucus Guncelleme\n\t\t\t\t\t\t3-Ucus Silme\n\t\t\t\t\t\t4-Rezervasyon Olusturma\n\t\t\t\t\t\t5-Rezervasyon Duzelt\n\t\t\t\t\t\t6-Rezervasyon Sil\n\t\t\t\t\t\t7-Ucus Bilgi\n\t\t\t\t\t\t8-CIKIS\n\n\t\t\t\t\t\tLutfen Islem Secin :");
    scanf("%d", & x);//İşlem için sayı alma

    switch (x) {

    case 1://Uçuş oluşturma
      {
        clrscr();
        system("COLOR E5");
        yeniucus(cfPtr);
        ucusmetinDosyasi(cfPtr);
        break;
      }

    case 2://Uçuş güncelleme
      {
        clrscr();
        system("COLOR E5");
        ucusguncelle(cfPtr);
        ucusmetinDosyasi(cfPtr);
        break;
      }

    case 3://Uçuş silme
      {
        clrscr();
        system("COLOR E5");
        ucusSil(cfPtr);
        ucusmetinDosyasi(cfPtr);
        break;
      }

    case 4://Rezervasyon oluşturma
      {
        clrscr();
        system("COLOR B0");
        rezervasyon(cfPtr);
        //rezervemetinDosyasi(cfPtr,ucakNum);

        break;
      }

    case 5://Rezervasyon güncelleme
      {
        clrscr();
        system("COLOR B0");
        rezervasyonduzelt(cfPtr);
        //rezervemetinDosyasi(cfPtr,ucakNum);

        break;
      }

    case 6://Rezervasyon silme
      {
        clrscr();
        system("COLOR B0");
        rezervasyonsil(cfPtr);
        //rezervemetinDosyasi(cfPtr,ucakNum);

        break;
      }

    case 7://Uçuş bilgi görüntüleme
      {
        clrscr();
        system("COLOR FA");
        ucusbilgi(cfPtr);

        break;
      }

    case 8://Çıkış
      {
        clrscr();
        system("COLOR 4C");
        rezervemetinDosyasi(cfPtr);
        ucusmetinDosyasi(cfPtr);
        exit(1);
        break;
      }

    }

  }

  ucusmetinDosyasi(cfPtr);//Dosyaya yazma

}
  return 0;
}

void clrscr() { //Ekranı temizleme fonksiyonu
  system("@cls||clear");
}

void logo(){ //Giriş için oluşturulan logo fonksiyonu

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

void bosAta() {  //Ucuştaki koltuklara boşluk atayan fonksiyon

  for (int i = 0; i < 15; i++) {  //For döngüsüyle boş koltuk atama

    
    kayit.yeni[i].isim[0] = bosrez.isim[0];
    kayit.yeni[i].soyisim[0] = bosrez.soyisim[0];
    kayit.yeni[i].yas = bosrez.yas;
    

  }

}

void cizgi(char c) {//Ekranı süsleyen fonksiyon

  for (int i = 120; i > 0; i--) {//Döngü

    printf("%c", c);
  }
  printf("\n");
}

void mevcutrezervasyonlar(FILE * fPtr) { //Rezervasyon okuyan fonksiyon

  for (int i = 1; i <= 15; i++) { //Okumak için döngü

    kayit.ucusno = 0;

    fseek(fPtr, (i - 1) * sizeof(struct ucus), SEEK_SET); //dosyada arama fonksiyonu
    fread( & kayit, sizeof(struct ucus), 1, fPtr);  //okuma fonksiyonu

    if (kayit.ucusno != 0) { //Ucus bilgisi için if

      u = 1;

      printf("\nUcus %d\n", i);
      cizgi('*');
      printf("Ucus No: %d \nPilot: %s\nNereden: %s \tNereye: %s\nKalkis: %s\n\n", kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
      cizgi('-');

      if (u == 1) {

        for (int j = 1; j <= 15; j++) {

          if (kayit.yeni[j].isim[0] != bosrez.isim[0]) {
			  
			  r = 1;

            printf("-Isim: %s -Soyisim: %s -Yas: %d -Ucus No: %d  -Koltuk: %d\n\n", kayit.yeni[j].isim, kayit.yeni[j].soyisim, kayit.yeni[j].yas, kayit.ucusno, j);

          }

        }

        if (r == 0) {

          printf("\n-----Mevcut Rezervasyon Yok !-----\n");
          cizgi('-');
        }

      }

    }

  }
  if (u == 0){
    
    printf("\n---Mevcut Ucus Yok !---\n");
    cizgi('-');}

}

void mevcutucuslar(FILE * fPtr) {//Uçuş okuyan fonksiyon

  for (int i = 1; i <= 15; i++) {//döngü

    kayit.ucusno = 0;

    fseek(fPtr, (i - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyon
    fread( & kayit, sizeof(struct ucus), 1, fPtr);//okuma fonksiyon

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

void rezervemetinDosyasi(FILE * okuPtr) {

  FILE * yazPtr;

  if ((yazPtr = fopen("rezervasyon.txt", "w")) == NULL)

    printf("Dosya acilamadi.\n");

  else{

    rewind(okuPtr);//Dosyayı kapatmadan okuyan fonksiyon

    fprintf(yazPtr, "%-15s %-15s %-5s %-5s %-5s\n", "Isim", "Soyisim", "Yas", "UcakNo", "KoltukNo");

  for (int i = 1; i <= 15; i++) { //Okumak için döngü

    kayit.ucusno = 0;

    fseek(okuPtr, (i - 1) * sizeof(struct ucus), SEEK_SET); //dosyada arama fonksiyonu
    fread( & kayit, sizeof(struct ucus), 1, okuPtr);  //okuma fonksiyonu

    if (kayit.ucusno != 0) { //Ucus bilgisi için if

      u = 1;

      if (u == 1) {

        for (int j = 1; j <= 15; j++) {

          if (kayit.yeni[j].isim[0] != bosrez.isim[0]) {
			  
			  r = 1;

           fprintf(yazPtr, "%-15s %-15s %-5d %-6d %-5d\n", kayit.yeni[i].isim, kayit.yeni[i].soyisim, kayit.yeni[i].yas, kayit.ucusno, i);

          }

        }

      }

    }
  }
}
}8

void kisaucusbilgi(FILE * fPtr, int ucakNum) {//Uçuş bilgisini kısa olarak okuyan fonksiyon

  //bosAta();
  kayit.ucusno = ucakNum;

  fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyonu
  fread( & kayit, sizeof(struct ucus), 1, fPtr);//okuma fonksiyonu
  cizgi('*');//Süsleme fonksiyonu
  printf("\nUcus No: %d \nPilot: %s\nNereden: %s \tNereye: %s\nKalkis: %s\n", kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
  cizgi('*');//Süsleme fonksionu
}

void ucusbilgi(FILE * fPtr) {//Uçuş bilgisini metin dosyasından okuyan fonksiyon

  int ucakNum;
  mevcutucuslar(fPtr);
  if (u == 1) {
    //bosAta();
    printf("Gosterilecek Ucak No Giriniz : ");
    scanf("%d", & ucakNum);//Uçak numrası alma fonksiyonu
    kayit.ucusno = ucakNum;

    fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyon
    fread( & kayit, sizeof(struct ucus), 1, fPtr);//okuma fonksiyon

    cizgi('*');//süsleme fonksiyonu
    printf("Ucus No: %d \nPilot: %s\nNereden: %s \tNereye: %s\nKalkis: %s\n", kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
    cizgi('*');//süsleme fonksiyonu
    printf("\nMevcut Koltuklar: \n");
    cizgi('-');//süsleme fonksiyonu
    cizgi('/');//süsleme fonksiyonu
    for (int i = 1; i <= 15; i++) {//döngü

      if (kayit.yeni[i].yas == 0)//boş olup olmadığını kontrol eden if
        printf("Koltuk No:%d %s\n", i, bos);

      else
        printf("Koltuk No:%d\t-%s-\n", i, kayit.yeni[i].isim);
    }
    cizgi('/');//süsleme fonksiyon
  }
}

void rezerveucusbilgi(FILE * fPtr, int ucakNum) {//Rezervasyon bilgisini metin dosyasından okuyan fonksiyon

  //bosAta();
  kayit.ucusno = ucakNum;

  fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyonu
  fread( & kayit, sizeof(struct ucus), 1, fPtr);//okuma fonksiyonu
  cizgi('*');//süsleme fonksiyonu
  printf("\nUcus No: %d \nPilot: %s\nNereden: %s \tNereye: %s\nKalkis: %s\n", kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
  cizgi('*');//süsleme fonksiyonu
  cizgi('-');//süsleme fonksiyonu
  printf("\n");
  
  
  printf("\nMevcut Koltuklar: \n");
  cizgi('/');//süsleme fonksiyonu
  for (int i = 1; i <= 15; i++) {//döngü

    if (kayit.yeni[i].yas == 0)//koltuk kontrol
      printf("Koltuk No:%d %s\n", i, bos);

    else
      printf("Koltuk No:%d\t-%s-\n", i, kayit.yeni[i].isim);
  }
  cizgi('/');//süsleme fonksiyonu
}

void rezervasyon(FILE * fPtr) {//Rezervasyon oluşturan foksiyon

  int ucakNum, koltukno;
  mevcutucuslar(fPtr);
  if (u == 1) {
	//cizgi('*');
    printf("\nRezervasyon Yapacaginiz Ucak No Giriniz : ");
    scanf("%d", & ucakNum);//numara alma
    kayit.ucusno = ucakNum;

    fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyonu
    fread( & kayit, sizeof(struct ucus), 1, fPtr);//okuma fonksiyonu

    rezerveucusbilgi(fPtr, ucakNum);

    printf("\nKoltuk Secin: ");
    scanf("%d", & koltukno);//koltuk secim

    printf("Yolcu Ismi: ");
    scanf("%15s", & kayit.yeni[koltukno].isim[0]);//sisim alma

    printf("Yolcu Soyisim  : ");
    scanf("%15s", & kayit.yeni[koltukno].soyisim[0]);//soyisim alma

    printf("Yas  : ");
    scanf("%d", & kayit.yeni[koltukno].yas);//yas alma

    fseek(fPtr, (kayit.ucusno - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyonu
    fwrite( & kayit, sizeof(struct ucus), 1, fPtr);//yazma fonksiyonu
    rezervemetinDosyasi(fPtr);
  }
}

void rezervasyonduzelt(FILE * fPtr) {//Rezervasyonu güncelleyen fonksiyon

  int ucakNum, ekoltukno, ykoltukno;//değisken atama
  mevcutrezervasyonlar(fPtr);
  if (r == 1) {
	cizgi('/');//süsleme fonksiyon
    printf("\nRezervasyon Duzelteceginiz Ucak No Giriniz : ");
    scanf("%d", & ucakNum);//ucak numarası alma
    kayit.ucusno = ucakNum;

    fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyonu
    fread( & kayit, sizeof(struct ucus), 1, fPtr);//okuma fonksiyonu

    rezerveucusbilgi(fPtr, ucakNum);

    printf("Eski Koltuk Numarasini Girin: ");
    scanf("%d", & ekoltukno);//koltuk numarası alma
    
    kayit.yeni[ekoltukno] = bosrez;
    
    printf("\nYeni Koltuk Secin: ");
    scanf("%d", & ykoltukno);

    printf("Yeni Yolcu Ismi: ");
    scanf("%15s", & kayit.yeni[ykoltukno].isim[0]);

    printf("Yeni Yolcu Soyisim  : ");
    scanf("%15s", & kayit.yeni[ykoltukno].soyisim[0]);

    printf("Yeni Yas  : ");
    scanf("%d", & kayit.yeni[ykoltukno].yas);

    
    fseek(fPtr, (kayit.ucusno - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyonu
    fwrite( & kayit, sizeof(struct ucus), 1, fPtr);//yazma fonksiyonu
    
    rezervemetinDosyasi(fPtr);
  }
}

void rezervasyonsil(FILE * fPtr) {//Rezervasyonu silen fonksiyon
  
  
  int ucakNum, koltukno;//değisken atama
  mevcutrezervasyonlar(fPtr);
  if (r == 1) {
	  cizgi('*');
    printf("\nRezervasyon Silinecek Ucak No : ");
    scanf("%d", & ucakNum);//ucak no alma
    kayit.ucusno = ucakNum;

    fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyonu
    fread( & kayit, sizeof(struct ucus), 1, fPtr);//okuma fonksiyonu

    rezerveucusbilgi(fPtr, ucakNum);

    printf("\nKoltuk sec: ");
    scanf("%d", & koltukno);//koltuk no alma

    /*strcpy(kayit.yeni[koltukno].isim, "BOS");

    strcpy(kayit.yeni[koltukno].soyisim, "BOS");

    kayit.yeni[koltukno].yas = 0;*/
    
    kayit.yeni[koltukno] = bosrez;
    
    

    fseek(fPtr, (kayit.ucusno - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyon
    fwrite( & kayit, sizeof(struct ucus), 1, fPtr);//yazma fonksiyonu
    rezervemetinDosyasi(fPtr);
    printf("SILINDI");
  }
}

void yeniucus(FILE * fPtr) {//Uçuş oluşturmayı sağlayan fonksiyon

  int ucakNum;//degısken atama
  struct ucus kayit = {0};//ucus atama
  cizgi('/');
  printf("\nYeni Ucak No Giriniz : ");

  scanf("%d", & ucakNum);//ucak numarası alma

  fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus),SEEK_SET);//arama fonksiyon

  fread( & kayit, sizeof(struct ucus), 1, fPtr);//okuma fonksiyon

  if (kayit.ucusno != 0)//Ucuşun olup olmadığını bulma

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

    fseek(fPtr, (kayit.ucusno - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyon

    fwrite(&kayit, sizeof(struct ucus), 1, fPtr);//yazma fonksiyon
    
    bosAta();

    }
}

void ucusmetinDosyasi(FILE * okuPtr) {//Bilgilerin metin dosyasına düzgünce aktarılmasını sağlayan fonksiyon

  FILE * yazPtr;

  if ((yazPtr = fopen("ucuslar.txt", "w")) == NULL)

    printf("Dosya Acilamadi.\n");

  else {

    rewind(okuPtr);//dosyayı aktif tutma fonksiyonu

    fprintf(yazPtr, "%-10s %-15s %-15s %-15s %-6s\n", "Ucak No", "Pilot", "Nereden", "Nereye", "Kalkis");

    while (!feof(okuPtr)) {

      fread( & kayit, sizeof(struct ucus), 1, okuPtr);//okuma fonksiyon

      if (kayit.ucusno != 0)
        
        fprintf(yazPtr, "%-10d %-15s %-15s %-15s %-5s\n", kayit.ucusno, kayit.pilot, kayit.nereden, kayit.nereye, kayit.kalkis);
    }
    fclose(yazPtr);//kapatma fonksiyon
  }
}

void ucusSil(FILE * fPtr) {//Önceden oluşturulmuş uçuşun silinmesini sağlayan fonksiyon

  struct ucus bosucus = {0};//ucus atama
  int ucusno;
  mevcutucuslar(fPtr);
  if (u == 1) {//ucus numarası atama
	  cizgi('/');
    printf("\nSilinecek Ucus Numarasini Giriniz : ");
    scanf("%d", & ucusno);

    fseek(fPtr, (ucusno - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyon
    fread( & kayit, sizeof(struct ucus), 1, fPtr);//okuma fonksiyon

    if (kayit.ucusno == 0)
      printf("Ucus -%d- Bulunamadi.\n", ucusno);

    else {
      fseek(fPtr, (ucusno - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyon
      fwrite( & bosucus, sizeof(struct ucus), 1, fPtr);//yazma fonksiyon
      printf("Silindi !\n");
    }
  }
}

void ucusguncelle(FILE * fPtr){//Önceden oluşturulmuş uçuşun güncellenmesini sağlayan fonksiyon

  int ucakNum;//değişken atama
  mevcutucuslar(fPtr);

  if (u == 1) {//Uçuşun olup olmadığını kontrol etme
	  cizgi('/');
    printf("\nGuncellemek Istediginiz Ucak No : ");
    scanf("%d", & ucakNum);//uçak no alma

    fseek(fPtr, (ucakNum - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyonu
    fread( & kayit, sizeof(struct ucus), 1, fPtr);//okuma fonksiyonu

    if (kayit.ucusno != 0) {//ucus kontrolü

      kisaucusbilgi(fPtr, ucakNum);

      printf("Yeni Pilot Ismi Gir: ");
      scanf("%s", & * kayit.pilot);

      printf("Yeni Kalkis Yeri: ");
      scanf("%s", & * kayit.nereden);

      printf("Yeni Varis Yeri: ");
      scanf("%s", & * kayit.nereye);

      printf("Yeni Kalkis Saati: ");
      scanf("%s", & * kayit.kalkis);

      fseek(fPtr, (kayit.ucusno - 1) * sizeof(struct ucus), SEEK_SET);//arama fonksiyonu
      fwrite( & kayit, sizeof(struct ucus), 1, fPtr);//yazma fonksiyonu

      printf("Ucus Guncellendi !\n");
    } 
    else
      printf("---Boyle Bir Ucus Yok---\n");
  }
}

