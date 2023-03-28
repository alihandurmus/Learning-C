/*Enes Diler Ödev2.4
 *Adam Asmaca*/

#include <stdio.h>


int main(){
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

        return 0;
}
