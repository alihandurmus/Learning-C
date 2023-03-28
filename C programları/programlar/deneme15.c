#include<stdio.h>
#include<string.h>
char  *dondur(char *p,int index)
{
	int uzunluk = strlen(p);
	
	if(index>uzunluk)
	{
		return NULL;
	
	}
	else 
	  return p+index;
}
int main()
{
	
	
	
	
	
	
	
	
	
	char dizi[]="yazilim";
	
	
	char*p = dondur(dizi,2);
	 
	 if(p == NULL)
	 printf("Pointer NULL");
	 else 
	 printf("%s",p);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
