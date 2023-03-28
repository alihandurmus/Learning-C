#include<stdio.h>
/*
Alihan Durmuþ
20120205028
Bu program dizinin kendisiyle tersi aynýysa 1 döndürür yoksa 0 döndürürür.
*/
int y,x=0;//Aþaðýda kullanýcýdan aldýðým dizinin büyüklüðünü fonksiyonda da göstermesi için global deðiþken tanýmladým
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
    printf("Gireceginiz dizinin kac karakter olacagýný giriniz:");
    scanf("%d",&y);
	char dizi[y];
	for(x=0;x<y+1;x++)
	scanf("%c",&dizi[x]);
	
	
	tersi_ile_ayni_mi(dizi);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
