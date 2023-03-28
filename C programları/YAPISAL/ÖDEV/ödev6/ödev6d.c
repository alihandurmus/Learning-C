/*Enes Diler 
 * Ödev6d
 * En Küçük Elemanı İlk Elemanla Swap*/

#include <string.h>
#include <stdio.h>

void swapWithMin(int * px, int * py) {  //
  if ( *py > *px) { //birinciden ikniciden büyükse değiştir
    int temp = * px;  //tutucu degisken ve degistirme
    *px = *py;
    *py = temp;
    }
}
int main() {
    
    int a[] = {51,81,34,66,51,72,12,30,83,39,71,89,100,75,100,80,3,92,19,25,100,17,34,18};

    for (int i = 0; i < sizeof(a)/sizeof(int); i++) //fonksiyonu dizinin bütün elemanları için dener
		
		swapWithMin(&a[i],&a[0]); //fonksiyonu çagir
		    
    printf("En Kucuk Eleman: %d",a[0]);  //en küçüğü yaz
    
    
    return 0;
}
