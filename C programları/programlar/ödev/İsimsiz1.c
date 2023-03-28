#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
/*
Alihan Durmuþ
Bu program eular sayý hesabý yapar.
*/
int fact(int h){
int j,sonuc=1;
 for (j=1;j<=h;j++){
     
     sonuc = j * sonuc ;
     
 }
 return sonuc;
}
int main() {
    int n;
    int MAX_ITERATE=10; 
    int x;
    
    
    double toplam;
    
    
    scanf("%d",&x);
    double px=x;
    for(n=1;n<=MAX_ITERATE;n++){
        
        
        if(n==1){
        toplam=1+(x/fact(n));}
        
        else{
            px=px*x;
        toplam=toplam+px/fact(n);}
        
        
        
    }
    
    printf("%.5lf",toplam);
    return 0;
}
