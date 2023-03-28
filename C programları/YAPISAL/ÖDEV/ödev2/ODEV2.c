/*ENES DILER -19120205016
 * ÖDEV2:
 * Koordinat Düzleminde Bölge Bulma(if-else)
 * Koordinat Düzleminde Bölge Bulma(switch-case)(hocam bu biraz saçma oldu sadece dediniz diye yaptım)
 * Kaynama Noktasından Madde Bulma
 * Vücut Kilo Endeksi Hesaplama
 * Adam Asmaca Re-build
 */

#include <stdio.h>
#include <conio.h>

int a; //a değişkeni tanımla

int main() {

  printf("\n\n\t\t\t\tO\tD\tE\tV\t2");
  getch();
  while (a != 6) //döngü yarat
  {
    printf("\n\t\t\t---1:Koordinat Duzleminde Bolge Hesaplama\n\t\t\t---2:Koordinat Duzleminde Bolge Hesaplama(switch-case)\n\t\t\t---3:Kaynama Noktasindan Madde Tanima\n\t\t\t---4:Vucut Kilo Endeksi Hesaplama\n\t\t\t---5:Adam Asmaca\n\t\t\t---6:Cikis\n\n"); //giriş ekranı yazdır
    printf("Lutfen Calistirmak Istediginiz Programin Numarasini Yazip Enter'a Basin-->"); //kullanıcıdan program seçmesi için bilgilendir
    scanf("%d", & a); //kullanıcıdan girdi al
    switch (a) //farklı programları aynı dosyada açmak için kullandım
    {
    case 1: //1.prgram için 
      {
        float a,
        b; //x ve y koordinatları için değişken tanımladım
        printf("Lutfen X noktasinin koordinatini giriniz:");
        scanf("%f", & a); //x girdisi
        printf("\nLutfen Y noktasinin koordinatini giriniz:");
        scanf("%f", & b); // y girdisi
        if (a > 0 && b > 0) // farklı koşullarda farklı çıktılar almak için
          printf("Koordinatiniz 1.Bolgede"); //girdilere baglı olarak sonuç çıktısı
        else if (a > 0 && b < 0) //diğer koşullar için 
          printf("Koordinatiniz 4.Bolgede");
        else if (a < 0 && b > 0)
          printf("Koordinatiniz 2.Bolgede");
        else if (a < 0 && b < 0)
          printf("Koordinatiniz 3.Bolgede");
        else if (a == 0 && b == 0)
          printf("Koordinatiniz Orijin");
        else if (a > 0 && b == 0)
          printf("Koordinatiniz X Ekseni Uzerinde");
        else if (a < 0 && b == 0)
          printf("Koordinatiniz X Ekseni Uzerinde");
        else if (a == 0 && b > 0)
          printf("Koordinatiniz Y Ekseni Uzerinde");
        else if (a == 0 && b < 0)
          printf("Koordinatiniz Y Ekseni Uzerinde");
        break;
      }
    case 2: //2.programı açar
      {
        int q; //switch case i kullanmak için böyle yaptım başka nasıl olur bilmiyorum
        float a,
        b; //x ve y tanımladım
        printf("Lutfen X noktasinin koordinatini giriniz:");
        scanf("%f", & a); //x girdisi
        printf("\nLutfen Y noktasinin koordinatini giriniz:");
        scanf("%f", & b); //y girdisi
        if (a > 0 && b > 0) //farklı koşullar için
          q = 1;
        else if (a > 0 && b < 0)
          q = 4;
        else if (a < 0 && b > 0)
          q = 2;
        else if (a < 0 && b < 0)
          q = 3;
        else if (a == 0 && b == 0)
          q = 0;
        else if (a > 0 && b == 0)
          q = 8;
        else if (a < 0 && b == 0)
          q = 8;
        else if (a == 0 && b > 0)
          q = 9;
        else if (a == 0 && b < 0)
          q = 9;

        switch (q) //q nun değerine göre sonuç verecek
        {
        case 1: //1.durum için 
          printf("Koordinatiniz 1.Bolgede");
          break;
        case 2:
          printf("Koordinatiniz 2.Bolgede");
          break;
        case 3:
          printf("Koordinatiniz 3.Bolgede");
          break;
        case 4:
          printf("Koordinatiniz 4.Bolgede");
          break;
        case 0:
          printf("Koordinatiniz Orijin");
          break;
        case 8:
          printf("Koordinatiniz X Ekseni Uzerinde");
          break;
        case 9:
          printf("Koordinatiniz Y Ekseni Uzerinde");
          break;
        }
        break; //programı durdurmak için
      }
    case 3: //3.program
      {
        int p = 1;
        float k; //sıcaklık için bir değer tanımladım
        while (p == 1) {
          printf("KAYNAMA NOKTASI GIRIN:"); //kullanıcıya girmesi için info 
          scanf("%f", & k); //bilgi girdisi
          if (k >= 95 && k <= 105) { //belirtilen sıcaklığa göre madde yi yazmak için koşula bağlı sonuç çıkarır
            printf("\t\t\t\t--SU");
            printf("\n\t\t\t\tYeni Madde Icin 1'i Cikmak Icin 0'i tuslayin:");
            scanf("%d", & p);
          } else if (k >= 350 && k <= 375) {
            printf("\t\t\t\t--CIVA");
            printf("\n\t\t\t\tYeni Madde Icin 1'i Cikmak Icin 0'i tuslayin:");
            scanf("%d", & p);
          } else if (k >= 1127 && k <= 1247) {
            printf("\t\t\t\t--BAKIR");
            printf("\n\t\t\t\tYeni Madde Icin 1'i Cikmak Icin 0'i tuslayin:");
            scanf("%d", & p);
          } else if (k <= 2273 && k >= 2053) {
            printf("\t\t\t\t--GUMUS");
            printf("\n\t\t\t\tYeni Madde Icin 1'i Cikmak Icin 0'i tuslayin:");
            scanf("%d", & p);
          } else if (k <= 2800 && k >= 2525) {
            printf("\t\t\t\t--ALTIN");
            printf("\n\t\t\t\tYeni Madde Icin 1'i Cikmak Icin 0'i tuslayin:");
            scanf("%d", & p);
          } else {
            printf("\t\t\t\t--MADDE TANIMLANAMADI"); //tanımlanan değerler dışında girdi olduysa belirtir
            printf("\n\t\t\t\tYeni Madde Icin 1'i Cikmak Icin 0'i tuslayin:");
            scanf("%d", & p);
          }
        }
        break;
      }
    case 4: //4.program
      {
        int p = 1;
        while (p == 1) {
          float b, k, e; //değişkenleri tanımla
          printf("Lutfen Boyunuzu Girin(Metre Cinsinden):"); //bilgi almak için çıktı
          scanf("%f", & b); //boy girdisi  
          printf("Lutfen Kilonuzu Girin:");
          scanf("%f", & k); //kilo girdisi
          e = k / (b * b); //endeks hesaplama
          if (e < 18.5) //belirtilen şartlar sağlanırsa kod bloğu çalışır
          {
            printf("Vucut Kilo Endeksiniz->%.2f Sonuc-->Zayif\n", e);
            printf("\n\t\t\t\tYeni Hesaplama Icin  1'i Cikmak Icin 0'i tuslayin:");
            scanf("%d", & p);
          } else if (e < 24.9 && e > 18.5) {
            printf("Vucut Kilo Endeksiniz->%.2f Sonuc-->Normal\n", e);
            printf("\n\t\t\t\tYeni Hesaplama Icin  1'i Cikmak Icin 0'i tuslayin:");
            scanf("%d", & p);
          } else if (e < 29.9 && e > 25) {
            printf("Vucut Kilo Endeksiniz->%.2f Sonuc-->Fazla Kilolu\n", e);
            printf("\n\t\t\t\tYeni Hesaplama Icin  1'i Cikmak Icin 0'i tuslayin:");
            scanf("%d", & p);
          } else if (e < 39.9 && e > 30) {
            printf("Vucut Kilo Endeksiniz->%.2f Sonuc-->Obez\n", e);
            printf("\n\t\t\t\tYeni Hesaplama Icin  1'i Cikmak Icin 0'i tuslayin:");
            scanf("%d", & p);
          } else if (e > 40) {
            printf("Vucut Kilo Endeksiniz->%.2f Sonuc-->***MORBID OBEZ***\a\n", e);
            printf("\n\t\t\t\tYeni Hesaplama Icin  1'i Cikmak Icin 0'i tuslayin:");
            scanf("%d", & p);
          }
        }
        break;
      }
    case 5:{ //5.program 
        char k1, k2, k3, k4, G; //harfler için karakter tanımla 
        char b1 = '_', b2 = '_', b3 = '_', b4 = '_'; //bosluk tanımla
        int s; //kelime seçimi için 
        printf("1 ile 5 arasinda bir tamsayi giriniz:"); //girdi  istme
        scanf("%d", & s);
        printf("\nAdam asmaca oyununuz 4 harflik bir kelimeyle basladi!"); //girdi
        if (s == 1) //girdiye göre kelime seçimi
                k1 = 'A', k2 = 'D', k3 = 'A', k4 = 'M'; //kelimeyi karakterlere tanımla
        if (s == 2)
                k1 = 'A', k2 = 'S', k3 = 'M', k4 = 'A';
        if (s == 3)
                k1 = 'A', k2 = 'S', k3 = 'U', k4 = 'S';
        if (s == 4)
                k1 = 'L', k2 = 'O', k3 = 'G', k4 = 'I';
        if (s == 5)
                k1 = 'T', k2 = 'E', k3 = 'C', k4 = 'H';

        for (int n = 0; n < 4; n++) {
                printf("\nHarf Girin:"); //harf iste
                scanf("%c", & G);
                scanf("%c", & G); //karakter girdisi (1 kez scanf kullanınca çalışmıyor)
                if (G == k1) //harf uyumluysa bosluga harf atama 
                        b1 = G;
                if (G == k2)
                        b2 = G;
                if (G == k3)
                        b3 = G;
                if (G == k4)
                        b4 = G;

                printf("\n\t\t%c%c%c%c", b1, b2, b3, b4); //he harften sonra durumu gösterir

                if (b1 == k1 && b2 == k2 && b3 == k3 && b4 == k4)  //bütün harfleri girmiş olıunca çık
                        break;
        }

        printf("\nSimdi Butun Harfleri Tek Tek Girin:\n1.Harf: "); 
        scanf("%c", & G);  //teker teker girmek için ilk harfi al
        scanf("%c", & G);  //tek scanf de bozuluyor sebebini bilmiyorum (%s yapıncada sonsuza falan gidiyo)
        if (G == k1) {  //ilk harf dogruysa devam et
                printf("\nDOGRU!\n2.Harf: "); 
                scanf("%c", & G);  //2.harf al 
                scanf("%c", & G);
                if (G == k2) {  //bu şekilde 4 kez devam ediyor
                        printf("\nDOGRU!\n3.Harf: ");
                        scanf("%c", & G);
                        scanf("%c", & G);
                        if (G == k3) {
                                printf("\nDOGRU!\n4.Harf: ");
                                scanf("%c", & G);
                                scanf("%c", & G);
                                if (G == k4)
                                        printf("Tebrikler Bildiniz!!");
                                else
                                        printf("Kaybettiniz");  //en son harf yanlışsa bitir
                        } else
                                printf("Kaybettiniz");  //diğer harfler sırasıyla
                } else
                        printf("Kaybettiniz");
        } else
                printf("Kaybettiniz");
      break;
  }
    
    
    case 6: //5.program 
      printf("Tesekkurler");
      break;

    default:
      printf("Boyle Bir Program Yok!\a\n"); //belirtilen değerler dışında girdi alırsa bildirir
    }
    
  }
  return 0;
}
