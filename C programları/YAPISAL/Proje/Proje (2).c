/*selfproj1.c
 * 
 */


#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	set locale(LC_ALL,"Turkish");
	int i, n, sonuc;
	printf("N degeri giriniz-->");
	 scanf("%d",&n);
	 
	 sonuc=0;
	 i=1;
	 
	 while (i<=n)
	 {
		 sonuc=sonuc+i;
		 i=i+2;
	 }
	 printf("%d a(e) kadar olan sayıların --ş--ç--ö--ğ--ü--İ--ı-- toplami-->%d",n,sonuc);
	 getch(); 
	 
	
	return 0;
}

