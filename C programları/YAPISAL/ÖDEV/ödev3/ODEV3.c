/*ENES DILER
 * ÖDEV 3
 */


#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

int a; //PROGRAM SEÇMEK İÇİN DEĞİŞKEN
int main(int argc, char **argv)
{
	printf("\n\t\t\t\tO");
	Sleep(300);
	printf("\tD");
	Sleep(300);
	printf("\tE");
	Sleep(300);
	printf("\tV");
	Sleep(300);
	printf("\t-3-");
	Sleep(300);
	getch();
	while(a!=8)  //döngü yarat
{
	printf("\n\n\t\t\t---1:Yildiz Oruntusu"); //giriş ekranı yazdır
	Sleep(200);
	printf("\n\t\t\t---2:100-400 Arasi Tek Sayi Bulma");
	Sleep(200);
	printf("\n\t\t\t---3:Ucgen Tanima");
	Sleep(200);
	printf("\n\t\t\t---4:Sayi Oruntusu");
	Sleep(200);
	printf("\n\t\t\t---5:Sayi Tahmin Oyunu");
	Sleep(200);
	printf("\n\t\t\t---6:Adam Asmaca");
	Sleep(200);
	printf("\n\t\t\t---7:OBEB HESAPLAMA");
	Sleep(200);
	printf("\n\t\t\t---8:Cikis\n\n");
	Sleep(200);
	printf("Lutfen Calistirmak Istediginiz Programin Numarasini Yazip Enter'a Basin-->");  //kullanıcıdan program seçmesi için bilgilendir
	scanf("%d",&a); //kullanıcıdan girdi al
	switch (a)  //farklı programları aynı dosyada açmak için kullandım
{
	case 1:
	{
	int sayi;  //girlcek sayiyi tanimla
	printf("Lutfen Bir Sayi Girin :"); //sayi iste
	scanf("%d",&sayi); //sayi girdisi
	for (int a=1; a<=sayi;a++) //satirlar için döngü
{
	printf("\n\n");   
	for (int b=1;b<=a;b++) //yildizlar için döngü
	printf("*\t"); //yildiz yaz
	if (a==sayi) //ortadan sonrasi için aynı işlemin tersi
	{
	    for (int a1=1;a1<sayi;a1++)
		{
		printf("\n\n");
		for(int b1=sayi;b1>a1;b1--)
		printf("*\t");
		}
	}
}
	break;
}
    
	case 2:
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
	break;
}
	
	case 3:
	{
	int a, b, c;  //kenar tanımı
	printf("Lutfen Ucgenin Ilk Kenarini Giriniz :");  //kenar iste   
	scanf("%d",&a); //kenar al
	printf("Lutfen Ucgenin Ikinci Kenarini Giriniz :");
	scanf("%d",&b);
	printf("Lutfen Ucgenin Ucuncu Kenarini Giriniz :");
	scanf("%d",&c);
	if ((a+b>c) && (a+c>b) && (c+b>a) && (a-b<c) && (a-c<b) && (b-c<a))  //koşullara göre sonuç yaz 
{
	if (a==b && a==c && b==c) //üçgenn özelliğini yaz 
	printf ("Bu Bir Eskenar Ucgen");
    else if (a==b || a==c || b==c)
	printf("Bu Bir Ikizkenar Ucgen");
	else
	printf("Bu Bir Cesitkenar Ucgen");
}
	else   //koşullar sağlanmazsa yaz
	printf("Boyle Bir Ucgen Olamaz");
    
    break;
}
	
	case 4:
	{
	int sayi;  //sayi tanimla
	printf("Lutfen Bir Sayi Girin :"); //sayi iste 
	scanf("%d",&sayi);  //sayi al
	
	for (int a1=sayi;a1>=1;a1--)  //rakam tanimi ve  döngü başlat
		{
		printf("\n\n"); 
		for(int b1=a1;b1>=1;b1--) //rakam adedi tanimi ve döngü başlat
		printf("%d\t",a1); //sayi yaz
		}
	break;
}
	
	case 5:
	{
	int sayi, x=50;  //sayi tanımla
	int a=0; //bitmesi için sayaç tanımla
	printf("N Sayisini Tahmin Etmek Icin 0-100 Arasinda Bir Sayi Tahmin Ediniz:"); //sayi iste
	scanf("%d",&sayi); //sayi al
	while (a==0) //döngü başlat
{
	if (sayi==x)  //koşul belirt 
{
	printf("\nTebrikler Sayiyi Buldunuz"); //sağlarsa sonuç
	a=1; //sayacı arttır döngü bitir
}
	else if(sayi>x)
{
	printf("\nSayidan Buyuk Bir Deger Girdiniz\n");
	printf("\nTekrar Tahmin Edin:");
	scanf("%d",&sayi); //tekra sayi al
}
	else if(sayi<x)
{
	printf("\nSayidan Kucuk Bir Deger Girdiniz\n");
	printf("\nTekrar Tahmin Edin :");
	scanf("%d",&sayi);
}
}
	break;
}
	
	case 6:
	{
	char k1, k2, k3,  k4, G; 							//harfler için karakter tanımla 
	char b1='_', b2='_', b3='_', b4='_';    		//bosluk tanımla
	int s;   											//kelime seçimi için 
	printf("1 ile 5 arasinda bir tamsayi giriniz:");  		//girdi  istme
	scanf("%d",&s); 
	printf("\nAdam asmaca oyununuz 4 harflik bir kelimeyle basladi!");  //girdi
	if (s==1)                                             //girdiye göre kelime seçimi
	k1='A' , k2='D',  k3='A' ,  k4='M';                   //kelimeyi karakterlere tanımla
	if (s==2)
	k1='A' , k2='S',  k3='M' ,  k4='A';
	if (s==3)
	k1='A' , k2='S',  k3='U' ,  k4='S';
	if (s==4)
	k1='L' , k2='O',  k3='G' ,  k4='I';
	if (s==5)
	k1='T' , k2='E',  k3='C' ,  k4='H';
	
	 for (int n=0;n<=4;n++)                                                            
{    
    printf("\nHarf Girin:");                   //harf iste
	scanf("%c",&G);
	scanf("%c",&G);                           //karakter girdisi (1 kez scanf kullanınca çalışmıyor)
	if (G==k1)                                //harf uyumluysa bosluga harf atama 
	b1=G;
	if (G==k2)
	b2=G;
	if (G==k3)
	b3=G;
	if (G==k4)
	b4=G;
    
    printf("\n\t\t%c%c%c%c",b1,b2,b3,b4);  //he harften sonra durumu gösterir
    
    if(n==4){  //kullanıcı başarısız olunca sonuç çıktısı
    printf("\nKelimeyi Bulamadiniz Lutfen Tekrar Deneyin");}
	
	if(b1==k1 && b2==k2 && b3==k3 && b4==k4)
	{
	printf("\n\nTEBRIKLER KELIMEYI BULDUNUZ --%c%c%c%c--",b1,b2,b3,b4);  //başarılı ise sonuç
	break;     
    }
}	
 break;
}
	
	case 7:
	{
	int a,b,r;  //değişken tanımı
	printf("Lutfen pozitif Tam Sayilar Girin\n");
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
    break;
}

    
    case 8:   //5.program 
    printf("Tesekkurler");  
    break;
    
    default:
    printf("Boyle Bir Program Yok!\a\n");  //belirtilen değerler dışında girdi alırsa bildirir
}
    getch();  //devam etmek için tuşa basılmasını bekler
}
	
	
	return 0;
}

