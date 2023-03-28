/*ödev2.1
 * Enes Diler
 * İki Boyutlu Koordinat Sisteminde Bölge Tespit Etme
 * (if-else)
 */


#include <stdio.h>
#include <conio.h>

int main()
{
	int a ,b;  //değişken tanımla
	printf("Lutfen X noktasinin koordinatini giriniz:");  //kullanıcıdan iste
	scanf("%d",&a);  //al
	
	if  (a > 0)  //a nın pozitif nötr ve negatif olduğu durumlar için ayrı if
{
		printf("Lutfen Y noktasinin koordinatini giriniz:");  //y iste 
	    scanf("%d",&b);  //al
	    
	    if (b>0)  //b nin de üç farlı değeri için üç farklı sonuç
			printf("Koordinatinizin Bolgesi 1"); //alınan bilgilere göre sonuç 
		else if (b<0) 
			printf("Koordinatinizin Bolgesi 4");
		else if (b==0)
		    printf("Koordinatiniz X Ekseni Uzerinde");
		  
}
        else if (a==0)  
{
        printf("Lutfen Y noktasinin koordinatini giriniz:");
	    scanf("%d",&b);
	    if (b>0)   //b nin de üç farlı değeri için üç farklı sonuç
			printf("Koordinatiniz Y Ekseni Uzerinde"); //alınan bilgilere göre sonuç 
		else if (b==0)
		    printf("Koordinatiniz Orijin");
		else if (b<0)
			printf("Koordinatiniz Y Ekseni Uzerinde");
}
		else if (a<0)
{
        printf("Lutfen Y noktasinin koordinatini giriniz:");
	    scanf("%d",&b);
	    if (b>0) //b nin de üç farlı değeri için üç farklı sonuç
			printf("Koordinatinizin Bolgesi 2"); //alınan bilgilere göre sonuç 
		else if (b<0) 
			printf("Koordinatinizin Bolgesi 3");
		else if (b==0)
		    printf("Koordinatiniz X Ekseni Uzerinde");
}
        			 
	    getch();  //en son kapanmaması için tuça basılmasını bekler
			 
	    return 0;
}

