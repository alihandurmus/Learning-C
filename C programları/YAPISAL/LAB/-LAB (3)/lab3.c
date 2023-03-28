/*Lab3.c
 * Enes Diler
 * Para Sayar
 */


#include <stdio.h>

int main()
{
	float bir, bes, on, yirmi, elli, toplam;
	printf("1 kr Adedi Giriniz:");
	scanf("%f",&bir);    /*Bir Kuruş Miktarı Alınır*/
	printf("\n5 kr Adedi Giriniz:");
	scanf("%f",&bes);    /*BEŞ Kuruş Miktarı Alınır*/
	printf("\n10 kr Adedi Giriniz:");
	scanf("%f",&on);    /*ON Kuruş Miktarı Alınır*/
	printf("\n25 kr Adedi Giriniz:");
	scanf("%f",&yirmi);   /*YİRMİBEŞ Kuruş Miktarı Alınır*/
	printf("\n50 kr Adedi Giriniz:");
	scanf("%f",&elli);     /*ELLİ Kuruş Miktarı Alınır*/
	toplam=(bir+bes*5+on*10+yirmi*25+elli*50)/100; /*TOPLAM HESAPLANIR*/
	printf("========================================================================================================================\n\t\t\t\t\t\tGirilen Kurus Sayilari\n\n");
	printf("-1 Kurus Adedi\t\t-5 Kurus Adedi\t\t-10 Kurus Adedi\t\t-25 Kurus Adedi\t\t-50 Kurus Adedi\t\n");
	printf("   %.2f   \t\t   %.2f   \t\t   %.2f   \t\t   %.2f   \t\t   %.2f\n",bir,bes,on,yirmi,elli);   
	printf("========================================================================================================================\n");
	printf("Toplam Para Miktari---->%.2fTL\n",toplam);          /*TOPLAM VE PARA MİKTARLARI EKRANA YAZILIR*/
	printf("========================================================================================================================\n");
	return 0;
}

