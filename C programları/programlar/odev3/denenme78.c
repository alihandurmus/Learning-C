#include<stdio.h>
#include<stdlib.h>
int main()
{   int x;
    char string[] = {"meh"};
	char *dizi = (char *) malloc (6 * sizeof(char));
	dizi = string;
	char *p = {"alihan"};
	
	for(x=0;*p!='\0';x++)
	{
	
	dizi[x] = *p;
	p++;
    }
	for(x=0;dizi[x]!='\0';x++)
	{
	printf("%c",dizi[x]);
    }
	
	return 0;
}
