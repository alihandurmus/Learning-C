#include<stdio.h>

int main()
{
	char msg[7]="Merhaba";
	char *ptr = &msg[6];
	int x;
	
	for(x=0;x<7;x++)
	{
		printf("Adres:%p\tDeger:%c\n",ptr,*(ptr));
		ptr--;
	}
	
	return 0;
}
