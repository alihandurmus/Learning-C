#include<stdio.h>
#include<math.h>
/*Alihan Durmu�
20120205028
Bu program kullan�c�n�n girdi�i dizinin en b�y�k 2.say�s�n� bulur standart sapma ve aritmetik ortalamas�n� hesaplar.
*/
int main(){
	
	
	int a[10],b,c,amax=0,toplam=0;//Burada diziyi tan�mlad�k en b�y�k say�lar� bulmak i�in amax de�i�keni tan�mlad�k.
	float standartsapma,ort,std,std2,toplam2=0;
	
	printf("Dizinin terimlerini giriniz:");
	
	for(b=0;b<10;b++){//Bu for ile kullan�c�dan dizi al�n�r.
		scanf("%d",&a[b]);
	}
	printf("Yazdiginiz dizi:");
	for(b=0;b<10;b++){
		printf("%d ",a[b]);
		
	}
	for(b=1;b<10;b++)//Bu for dizinin en b�y�k eleman�n� bulur.
	{
		if(a[amax]<a[b])
		amax=b;}
		if(amax!=0)
		{
			int temp=a[amax];
			a[amax]=a[0];
			a[0]=temp;
		}
	
	amax=1;
	for(b=2;b<10;b++)//Bu for ile dizinin en b�y�k 2.say�s� bulunur ve diziye tan�mlan�r.
	{
		if(a[amax]<a[b])
		amax=b;}
		if(amax!=1)
		{
			int temp=a[amax];
			a[amax]=a[1];
			a[1]=temp;
		}
	
	
	printf("Girdiginiz dizinin en buyuk 2.sayisi:%d",a[1]);
	
	
	for(b=0;b<10;b++)//Bu for ile ortalama ve standart sapma de�erlerini hesaplamak i�in toplam de�eri hesaplan�r.
	{
		toplam=toplam+a[b];
	}
	ort=toplam/10.0;
	printf("\nGirdiginiz dizinin elemanlarinin ortalamasi %.2f dir\n",ort);
	
	for(b=0;b<10;b++){//Bu for ile standart sapma de�eri bulunur.
		
		std=a[b]-ort;
		std2=std*std;
		toplam2+=std2;
	}
	
	standartsapma=sqrt(toplam2/9.0);
	printf("Girdiginiz dizinin elemanlarinin standart sapmasi %.2f dir",standartsapma);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
