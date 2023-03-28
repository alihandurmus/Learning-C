#include<stdio.h>
#include<math.h>
/*Alihan Durmuþ
20120205028
Bu program kullanýcýnýn girdiði dizinin en büyük 2.sayýsýný bulur standart sapma ve aritmetik ortalamasýný hesaplar.
*/
int main(){
	
	
	int a[10],b,c,amax=0,toplam=0;//Burada diziyi tanýmladýk en büyük sayýlarý bulmak için amax deðiþkeni tanýmladýk.
	float standartsapma,ort,std,std2,toplam2=0;
	
	printf("Dizinin terimlerini giriniz:");
	
	for(b=0;b<10;b++){//Bu for ile kullanýcýdan dizi alýnýr.
		scanf("%d",&a[b]);
	}
	printf("Yazdiginiz dizi:");
	for(b=0;b<10;b++){
		printf("%d ",a[b]);
		
	}
	for(b=1;b<10;b++)//Bu for dizinin en büyük elemanýný bulur.
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
	for(b=2;b<10;b++)//Bu for ile dizinin en büyük 2.sayýsý bulunur ve diziye tanýmlanýr.
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
	
	
	for(b=0;b<10;b++)//Bu for ile ortalama ve standart sapma deðerlerini hesaplamak için toplam deðeri hesaplanýr.
	{
		toplam=toplam+a[b];
	}
	ort=toplam/10.0;
	printf("\nGirdiginiz dizinin elemanlarinin ortalamasi %.2f dir\n",ort);
	
	for(b=0;b<10;b++){//Bu for ile standart sapma deðeri bulunur.
		
		std=a[b]-ort;
		std2=std*std;
		toplam2+=std2;
	}
	
	standartsapma=sqrt(toplam2/9.0);
	printf("Girdiginiz dizinin elemanlarinin standart sapmasi %.2f dir",standartsapma);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
