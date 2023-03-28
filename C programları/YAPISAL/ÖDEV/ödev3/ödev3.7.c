/*
 * ödev3.6.c
 * Enes Diler
 * /w byMTD
 */

#include <stdio.h>

int main()
{
	int a,b,r;  //değişken tanımı
	printf("Ilk Sayiyi Giriniz :"); //sayi iste 
	scanf("%d",&a); //sayı al
	printf("Ikinci Sayiyi Giriniz :");  
	scanf("%d",&b);
	r=1;
	int bir=a, iki=b; //girilen sayilari tutması için değişken
	
	while(r!=0) //sonuç sıfır çıkıncaya kadar döngü
{   r=a%b;  //ebob işlemleri
    a=r;
    if (a==0)
    printf("OBEB(%d,%d) = %d",bir,iki,b);
    if (b==0)
    printf("OBEB(%d,%d) = %d",bir,iki,a);
    r=b%a;
    b=r;
    if (a==0)
    printf("OBEB(%d,%d) = %d",bir,iki,b);
    if (b==0)
    printf("OBEB(%d,%d) = %d",bir,iki,a);
}   
    return 0;
}
