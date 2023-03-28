#include<stdio.h>

int kelime_say(char *paragraf , char *kelime)
{   
	int y;
    for(y=0;paragraf[y]!='\0';y++)
    {
    	
	}
	
	
    
    int x=0,sayac = 0;
    
    
    for(;paragraf[x]!='\0';)
    {  int z = 0;
    
	   for(;paragraf[x]!=' ';)
	   {  char *yedek=&paragraf[x];
	      printf("%c",*yedek);
	      
	      if(*yedek==kelime[z])
	      {
	       z++;
	        if(z == 2)
	        {
             sayac++;
	       
	        }
          }
          yedek++;
          x++;
       }
       x++;
    }
    printf(" %d",sayac);
    return sayac;
}
 
 int main()
{
	
	
	
   kelime_say("Buraya gel Istersen gel istersen gelme Bence erken gel","gel");	

	
	
	
	
	return 0;
}
