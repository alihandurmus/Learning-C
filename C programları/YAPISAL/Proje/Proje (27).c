/*Enes Diler
 * Ödev6c
 * İlk ve Son Harfler Swap
 */
#include <string.h>
#include <stdio.h>


void swap(char *px, char *py) {

  char temp = * px;
  * px = *py;
  * py = temp;

    }

 int main() {
  
  char a[] ="istanbul" ;
 
  swap(&a[0], &a[sizeof(a)/sizeof(char)-2]);

  printf("%s",a);
  
  return 0;
}
