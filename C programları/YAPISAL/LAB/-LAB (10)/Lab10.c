//Enes Diler Lab10 
//kelimenin ilk harfini büyük yapma
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  
  char baslik[100]; //dizi tanımı
  
  printf("Cumleyi Giriniz: ");   
  scanf("%[^\n]s",&baslik[0]); //cümle al

  char *ayirici = strtok(baslik, " ");  //bosluktan sonra kelimeleri ayirası için strtok fonksiyonunu kullanıp bosluktan sonrasını baska bir diziye atadik
 
  while (ayirici != NULL) {
	  
    ayirici[0] = toupper(ayirici[0]); //kelimenin ilk harfini büyüt
    printf("%s ", ayirici);  //işlem gören kelimeleri yaz
    ayirici = strtok(NULL, " "); //boşluktan sonraki kelimeyi ayiriciya gönderir
    
    }
  
    return 0;
}
