#include<stdio.h>
char *gunismi(char *gundizisi[],int uzunluk,int hangigun)
{
	if(hangigun>=0&&hangigun<=6)
	{
		return gundizisi[hangigun];
		

	}
	else 
	return NULL;
}


int main()
{
	
	
	char *gunler[7] = {"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
	
	       
	char *p = gunismi(gunler,7,4);
	
	if(p==NULL)
	printf("NULL");
	else 
	printf("%s",p);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
