#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
/*
Alihan Durmuþ
20120205028
Bu programýn amacý * ve + larla baklava dilimi yazdýrmak
*/
int main(voice){
	int satir;//"satir" bu deðiþken kullanýcýnýn giriði satýr sayýsýný belirleyen deðiþkendir.
	printf("Kac satir olsun:");
	scanf("%d",&satir);
	if(satir%2==0)
	 satir=satir/2;//Bu if elselerde yapmak istediðim programý 8 forla yazýðým için kullanýcý 5 satýr girdiðinde 10 satýr yazýyordu bunu çözmek için böyle bir yola baþvurdum.
	                //ilk önce satýr sayýsýný direkt 2 ye böleyim dedim ama sayý tek olunca satýr eksikliði oluyordu o yüzden tek sayýlarda ekstradan "satir"a 1 ekledim.
	 else
	  satir=satir/2+1;
	int x,y,z,a,b,c,d,e;//Burada da 8 for için ayrý ayrý deðiþken tanýmladým.

	for(x=1;x<=satir;x++){
		
	   for(y=1;y<=satir-x;y++)//Burda baklava diliminin ilk kýsmýný yazar
	   printf("*");
	   
	   	for(z=1;z<=x;z++)
	   	printf("+");
	   	for(a=1;a<=x-1;a++)   //Burada 2. kýsmýný yazar
	   	printf("+");
		 for(b=1;b<=satir-x;b++)  
	   printf("*");
	    
	  
	printf("\n");
	
}
        for(a=1;a<=satir-1;a++){//Burada "satir"ý 1 eksiltmemin sebebi ekstradan yýldýz satýrý basýyordu program bunu önlemek.
	
	   for(b=1;b<=a;b++)        //Burada 3. kýsmýný yazar
	   printf("*");
	   
	   	for(c=1;c<=satir-a;c++)
	   	printf("+");
	   	for(d=1;d<=satir-a-1;d++)//Burada 4.kýsmýný yazar
	   	printf("+");
		 for(e=1;e<=a;e++)  
	   printf("*");
	    
	  
	printf("\n");
	
}



return 0;
}
