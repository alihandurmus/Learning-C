#include<stdio.h>
#include<ctype.h>
#include<string.h>
/*
Alihan Durmu�
20120205028
Bu program ayn� harften ka� tane oldu�unu sayar.
*/
int karakter_say(char *string,char *ch)
{
	int x,sayac=0;
	
	for(x=0;string[x]!='\0';x++)//Burada b�t�n dizinin karakterlerine bakt�rd�m.
	
	{   
	    
		if(string[x] == *ch-32 || string[x] == *ch)//Burada ASCI kod sayesinde b�y�k k���k harfi ayn� ald�rd�m.
		
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

