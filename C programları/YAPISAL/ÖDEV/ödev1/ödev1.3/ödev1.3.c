/*Ödev1.3.c
 * Enes Diler
 * Koni Hacmi Hesaplama
 */

#include<stdio.h>
  int main()
{
      int h;
      int r;
      float a;
      float p,hacim;
      p=3.14;
      printf("yaricapi giriniz=");
      scanf("%d",&r);
      printf("\n yukseklgi giriniz=");
      scanf("%d",&h);
      a=p*r*r;
      hacim=(a*h)/3;
      printf("\nkoninin hacmi %.2f dir",hacim);
return 0;
}



