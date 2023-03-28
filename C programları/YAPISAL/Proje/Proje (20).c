/*Enes Diler
 * Kelime Uzunluğu Hesaplama Ve Palindrom Kelime Bulma
 */

#include <stdio.h>

char kelime[] = "YAPAY";

int uzunlukh(char kelime[])	{
	int uzunluk = 0;
	
	for (int i = 0;(kelime[i]!='\0'); i++)
		uzunluk++;
		return uzunluk;
}

void Palindrom(char kelime[]) { 
    
    int b = 0; 
    int s = uzunlukh(kelime) - 1; 
  
    
    while (s > b) 
    { 
        if (kelime[b++] != kelime[s--]) 
        { 
            printf("\"%s\" Bir Palindrom Kelime Degil!\n",kelime); 
            return; 
        } 
    } 
    printf("\"%s\" Bir Palindrom Kelime!\n",kelime); 
} 

int main(int argc, char **argv)
{
	char metin[100];
	printf("Global Olarak Tanimlanan Kelime:\"%s\" \tUzunlugu:%d \t",kelime,uzunlukh(kelime));
	
	Palindrom(kelime);
	
	int x = 1;
	
	printf("Yeni Kelime(evet:1/hayir:0)-->");
	scanf("%d",&x);
	
	while (x == 1)
	{
		printf("Yeni Kelime Girisi:  ");
	    scanf("%s",metin);
	    
	    printf("Girilen Kelime:\"%s\" \t Uzunlugu: %d \t ",metin,uzunlukh(metin));
	    Palindrom(metin);
	    
	    printf("Yeni Kelime(1/0)-->");
	    scanf("%d",&x);
		}   
	
	return 0;
}

