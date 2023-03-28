#include<stdio.h>
#include<ctype.h>
#include<string.h>
/*
Alihan Durmuþ
20120205028
Bu program ayný harften kaç tane olduðunu sayar.
*/
int karakter_say(char *string,char *ch)
{
	int x,sayac=0;
	
	for(x=0;string[x]!='\0';x++)//Burada bütün dizinin karakterlerine baktýrdým.
	
	{   
	    
		if(string[x] == *ch-32 || string[x] == *ch)//Burada ASCI kod sayesinde büyük küçük harfi ayný aldýrdým.
		
		{
			sayac++;
		}
		
	}
	return sayac;
	
}

int main()
{
	
	
	printf("Girdiginiz karakter %d kadar tekrar ediyor.",karakter_say("Adam olun Adaam","a"));
	
	
	
	
	
	
	
	return 0;
}

