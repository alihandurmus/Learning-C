/*Enes Diler
 */
#include <stdio.h> 

int dizi[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

int ikiliarama(int dizi[], int bas, int son, int hedef) 
{ 
    while (bas <= son) { 
        int o = bas + (son - bas) / 2; 
  
        if (dizi[o] == hedef) 
            return o + 1; 
  
        if (dizi[o] < hedef) 
            bas = o + 1; 
 
        else
            son = o - 1; 
    } 
    return -1; 
} 
  
int main() 
{ 
    int son = sizeof(dizi) / sizeof(dizi[0]); 
    int hedef;
    
    printf("\nAramak istediginiz sayiyi girin:");
	scanf("%d",&hedef);
    
    int sonuc = ikiliarama(dizi, 0, son - 1, hedef); 
    
    if (sonuc == -1)
    printf("Boyle Bir Sayi Yok!");
    
    else
    printf("%d Sayisi %d. Eleman Olarak Bulundu!",hedef,sonuc);
    
    return 0; 
} 
