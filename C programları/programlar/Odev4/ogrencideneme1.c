#include<stdio.h>
#include<string.h>

int main()
{


FILE *f = fopen("students.txt","a+");

char no[4],isim[40],soyisim[40];
	printf("No:");
    scanf("%10s",no);

	printf("Isim:");
	scanf("%40s",isim);

	printf("Soyisim:");
	scanf("%40s",soyisim);
	fprintf(f,"\n%s\t%s\t%s",no,isim,soyisim);



























return 0;
}
