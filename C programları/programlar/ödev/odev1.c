#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
/*
Alihan Durmu�
20120205028
Bu program�n amac� * ve + larla baklava dilimi yazd�rmak
*/
int main(voice){
	int satir;//"satir" bu de�i�ken kullan�c�n�n giri�i sat�r say�s�n� belirleyen de�i�kendir.
	printf("Kac satir olsun:");
	scanf("%d",&satir);
	if(satir%2==0)
	 satir=satir/2;//Bu if elselerde yapmak istedi�im program� 8 forla yaz���m i�in kullan�c� 5 sat�r girdi�inde 10 sat�r yaz�yordu bunu ��zmek i�in b�yle bir yola ba�vurdum.
	                //ilk �nce sat�r say�s�n� direkt 2 ye b�leyim dedim ama say� tek olunca sat�r eksikli�i oluyordu o y�zden tek say�larda ekstradan "satir"a 1 ekledim.
	 else
	  satir=satir/2+1;
	int x,y,z,a,b,c,d,e;//Burada da 8 for i�in ayr� ayr� de�i�ken tan�mlad�m.

	for(x=1;x<=satir;x++){
		
	   for(y=1;y<=satir-x;y++)//Burda baklava diliminin ilk k�sm�n� yazar
	   printf("*");
	   
	   	for(z=1;z<=x;z++)
	   	printf("+");
	   	for(a=1;a<=x-1;a++)   //Burada 2. k�sm�n� yazar
	   	printf("+");
		 for(b=1;b<=satir-x;b++)  
	   printf("*");
	    
	  
	printf("\n");
	
}
        for(a=1;a<=satir-1;a++){//Burada "satir"� 1 eksiltmemin sebebi ekstradan y�ld�z sat�r� bas�yordu program bunu �nlemek.
	
	   for(b=1;b<=a;b++)        //Burada 3. k�sm�n� yazar
	   printf("*");
	   
	   	for(c=1;c<=satir-a;c++)
	   	printf("+");
	   	for(d=1;d<=satir-a-1;d++)//Burada 4.k�sm�n� yazar
	   	printf("+");
		 for(e=1;e<=a;e++)  
	   printf("*");
	    
	  
	printf("\n");
	
}



return 0;
}
