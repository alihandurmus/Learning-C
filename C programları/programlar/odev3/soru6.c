#include<stdio.h>
/*
Alihan Durmu�
20120205028
Bu program dizinin kendisiyle tersi ayn�ysa 1 d�nd�r�r yoksa 0 d�nd�r�r�r.
*/
int y,x=0;//A�a��da kullan�c�dan ald���m dizinin b�y�kl���n� fonksiyonda da g�stermesi i�in global de�i�ken tan�mlad�m
int tersi_ile_ayni_mi(char *str)
{   
    
    if(y>=0)
    {
	char *tersi=&str[y];
	
	if(str[x+1]==*tersi)
	{
		
		if(y!=1)
	    {
		y--;
		tersi++;
		x++;
	    return tersi_ile_ayni_mi(str);
	    }
	    else
	    printf("1");
	}
	else 
	printf("0");
    }
   
    
  
	
	
}


int main()
{   int x;
    printf("Gireceginiz dizinin kac karakter olacag�n� giriniz:");
    scanf("%d",&y);
	char dizi[y];
	for(x=0;x<y+1;x++)
	scanf("%c",&dizi[x]);
	
	
	tersi_ile_ayni_mi(dizi);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
