#include <stdio.h>
#include <conio.h>
/*Yasin Emin Esen
20120205054
esenyasinemin@gmail.com
Bu program girilen n sayysy kadar satyrda ?ekil bastyryr.
*/


int main(){

    int arti,yildiz,satir,x,y,z;

    printf("bir sayi giriniz");
    scanf("%d",&satir); // istenilen satyr sayysyny alyr

    yildiz=1; // ilk satyrda yildiz 1 den basladigi için 1
    arti=satir/2; // satirin sayisinin yarisina kadar + ve 1 yildiz yarisindan sonra yine + oldugu icin satir/2

    for(x=0; x<satir;x++) //satir sayisini yazdirir
     {
        for(y=0;y<arti;y++) //artilari yazdirir.
            printf("");

        for(y=0; y<yildiz;y++) //yildizlari yazdirir
            printf("+");

        for(z=0;z<arti;z++) // en son yine arti oldugundan artilari yazdirir.
            printf("*");

        if(x<satir/2){ //seklin yarisina kadar yildizlar artar, artilar azalir
            arti--;
            yildiz+=2;
        }
        else{ //yarisindan sonra yildizlar azalýr, artilar artar.
            arti++;
            yildiz-=2;
            }

    printf("\n"); //her satirdan sonra bir alt basamaga gecmek icin kullanilir
    }



}


