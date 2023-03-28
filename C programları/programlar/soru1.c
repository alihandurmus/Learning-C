#include<stdio.h>
#include<math.h>
int main(){
	
	
	int a[6],b,c,amax=0,toplam=0;
	float standartsapma,ort,std,std2,toplam2=0;
	
	printf("Dizinin terimlerini giriniz:");
	
	for(b=0;b<6;b++){
		scanf("%d",&a[b]);
	}
	printf("Yazdiginiz dizi:");
	for(b=0;b<6;b++){
		printf("%d ",a[b]);
		
	}
	for(b=1;b<6;b++)
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
	for(b=2;b<6;b++)
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
	
	
	for(b=0;b<6;b++)
	{
		toplam=toplam+a[b];
	}
	ort=toplam/6.0;
	printf("\nGirdiginiz dizinin elemanlarinin ortalamasi %.2f dir\n",ort);
	
	for(b=0;b<6;b++){
		
		std=a[b]-ort;
		std2=std*std;
		toplam2+=std2;
	}
	
	standartsapma=sqrt(toplam2/5.0);
	printf("Girdiginiz dizinin elemanlarinin standart sapmasi %.2f dir",standartsapma);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
