/*Lab 3b
 * Enes Diler
 * Hocam biraz geç geldim tam olarak mantığını ve yaptığım hatayı anlamadım akşam yapmaya çalışacağım 
 */


#include <stdio.h>

int main()
{
	float x, px=1, fact=1, toplam;
	int MAX_ITERATE=5, n;
	printf("Hesaplamak İstediğiniz Sayıyı Giriniz:");
	scanf("%f",&x);
	
	for(n=0; n<=MAX_ITERATE;n++)
{
	if(n%2==0)
	{
	
		for(int a=1;a<=n;a++)
	{
		px*=x;
		fact*=a; 
		toplam=toplam+px/fact;
		
	}
    }
}
printf("sonuc:%.4f",toplam);
	
	return 0;
}

