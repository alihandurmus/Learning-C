/*100 ile 400 arasındaki tek sayılar
 */
#include <stdio.h>

int main()
{
	int a=400, x; //sayi tanimla
	for(int b=100;b<=a;b++) //dögü içinde sayi tanımı ve döngü başlangıcı
{
	if (b%2==1)  //tek sayilari seçmek için mod 
	{
	x++;	//tek sayilari bulmak için sayaç
	printf("%d,",b); //tek sayıyı yazdır
    }
	
}
    printf("\n---Tek Sayilarin Adedi :%d---",x);
	return 0;
}

