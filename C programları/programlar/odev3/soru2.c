#include<stdio.h>
/*
Alihan Durmu�
20120205028
Bu program dizinin i�inde ayn� kelimeden ka� tane oldu�unu g�sterir.
*/

int kelime_say(char *paragraf , char *kelime)//Burada fonksiyonu tan�mlad�m
{   
	
	
	
    
    int sayac = 0;//Burada kelime say�s�n� sayan sayac� tan�mlad�m.
    char *yedek;//Burada diziyi pointera atad�m.
    yedek = paragraf;
    
    for(;*yedek!='\0';yedek++)//Bu forda b�t�n dizinin karakterlerine bak�yor.
    {  int z = 0;
       
	   for(;*yedek!=' ';yedek++)//Bu forla kelime kelime bakmas�n� sa�lad�m
	      {  
		  
	      
	      
	      if(*yedek==kelime[z])//E�er e�itse kelime nin sonuna kadar bak�p e�er hepsi e�itse di�er ifin i�ine girip sayac� 1 artt�r�yor.
	      {
	       
	        
	        if(kelime[z+1]=='\0')
	        {
	          if(*(++yedek)==' ')
			  {
			  
	          sayac++;
	          
	          }
	          
	       
	        }
	        z++;
          }
           else 
		   break;
      }
    }
       
    
    
    return sayac;
}
 
 int main()
{
	
	
    
	printf("%d \n",kelime_say("Bir berber bir berbere gel beraber bir berber d�kkan� a�al�m demi�", "berber"));//Buralarda fonksiyonu �a��rd�m.

   printf("%d \n",kelime_say("Bir berber bir berbere gel beraber bir berber d�kkan� a�al�m demi�", "berbere"));
    printf("%d \n",kelime_say("Bir berber bir berbere gel beraber bir berber d�kkan� a�al�m demi�", "kim demi�"));


    
	
	
	
	return 0;
}

