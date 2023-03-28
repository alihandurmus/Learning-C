#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char dizi[]="kayak";


int uzunluk(char kelime[]){
    int u = 0;
    
    for (int i = 0;(kelime[i]!='\0'); i++)
        u++;
        return u;
}


bool esitMi(char dizi[], int bas, int son) { 
    if (dizi[bas] != dizi[son-1]) 
    return false; 
    
    if (bas == son) 
    return true; 
  
    if (bas < son) 
    return esitMi(dizi, bas + 1, son - 1); 
  
    return true; 
}

int main()
{
    printf("Dizi uzunlugu: %d", uzunluk(dizi));
    printf("\nDizi palindrom mu: %s",(esitMi(dizi, 0, uzunluk(dizi)) == 1? "Evet":"Hayir"));
        
     return 0;
}
