/*Lab2
 * Enes Diler
 * Fahrenheit to Celcius Converter 
 * x=fahrenheit c=celcius
 */


#include <stdio.h>

int main()
{
	int x;
	int y;
	printf("\n Lutfen Fahrenheit Degeri Girin--->");
	scanf("%d",&x);
	y=(x-32)*5/9;
	printf(" Celsius=%d",y);
	getch();
	return 1;
}
