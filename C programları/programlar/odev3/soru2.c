#include<stdio.h>
/*
Alihan Durmuþ
20120205028
Bu program dizinin içinde ayný kelimeden kaç tane olduðunu gösterir.
*/

int kelime_say(char *paragraf , char *kelime)//Burada fonksiyonu tanýmladým
{   
	
	
	
    
    int sayac = 0;//Burada kelime sayýsýný sayan sayacý tanýmladým.
    char *yedek;//Burada diziyi pointera atadým.
    yedek = paragraf;
    
    for(;*yedek!='\0';yedek++)//Bu forda bütün dizinin karakterlerine bakýyor.
    {  int z = 0;
       
	   for(;*yedek!=' ';yedek++)//Bu forla kelime kelime bakmasýný saðladým
	      {  
		  
	      
	      
	      if(*yedek==kelime[z])//Eðer eþitse kelime nin sonuna kadar bakýp eðer hepsi eþitse diðer ifin içine girip sayacý 1 arttýrýyor.
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
	
	
    
	printf("%d \n",kelime_say("Bir berber bir berbere gel beraber bir berber dükkaný açalým demiþ", "berber"));//Buralarda fonksiyonu çaðýrdým.

   printf("%d \n",kelime_say("Bir berber bir berbere gel beraber bir berber dükkaný açalým demiþ", "berbere"));
    printf("%d \n",kelime_say("Bir berber bir berbere gel beraber bir berber dükkaný açalým demiþ", "kim demiþ"));


    
	
	
	
	return 0;
}

