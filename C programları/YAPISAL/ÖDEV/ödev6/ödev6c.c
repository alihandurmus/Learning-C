/*Enes Diler
 * Ödev6c
 * İlk ve Son Harfler Swap
 */
#include <string.h>
#include <stdio.h>


void swap(char *px, char *py) {  //ilk ve son karakteri alan void fonk

  char temp = * px;  //tutucu degisken
  * px = *py;  //degistir
  * py = temp;

    }

 int main() {
  
  char a[] ="istanbul" ;  //tanımla
 
  swap(&a[0], &a[sizeof(a)/sizeof(char)-2]);  //fonksiyonu cagir(ilk harf ile son harfi belirleyip gönderdil)

  printf("%s",a);  //yaz
  
  return 0;
}
