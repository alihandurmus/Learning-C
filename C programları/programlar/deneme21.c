#include<stdio.h>

int main()
{
	
	FILE *f;
	
	f = fopen("geneData.txt","r");
	
	if(f == NULL)
	{
	printf("Dosya bulunamadi");
	return 0;
    }
	else
	{
	 printf("Dosyanýzin ismi geneData dir.");
	return 1;
    }
}
