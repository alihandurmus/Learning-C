#include<stdio.h>

int kelime_say(char *paragraf , int *kelime)
{   int y,sayi=0;
    for(y=0;paragraf[y]!='\0';y++){
	}
    
    int x=0,sayac = 0;
    int z = 0;
    while(x<y)
    {
	   for(;paragraf[x]!=' ';x++)
	   {
	    if(paragraf[x]==kelime[z])
	      {
	       z++;
	       if(kelime[z]=='\0')
	       sayac++;
	       
		   
          }
          
       }
       
    }
    return sayac;
}
int main()
{
	
	
	
	kelime_say("Buraya gel İstersen gel istersen gelme Bence erken gel ","gel");

	
	
	
	
	return 0;
}
