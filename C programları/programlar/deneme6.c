#include<stdio.h>

int main(){
	
	
	int a[5],x,y,toplam=0;
	float aritmetik;
	printf("Birinci sayiyi giriniz:");
	scanf("%d",&a[0]);
	printf("Ikinci sayiyi giriniz:");
	scanf("%d",&a[1]);
	printf("Ucuncu sayiyi giriniz:");
	scanf("%d",&a[2]);
	printf("Dorduncu sayiyi giriniz:");
	scanf("%d",&a[3]);
	printf("Besinci sayiyi giriniz:");
	scanf("%d",&a[4]);
	printf("Girdiginiz dizi :");
	for(x=0;x<5;x++)
	
	
	    printf(" %d ",a[x]);
	
	
	for(y=0;y<5;y++)
	
	   toplam=toplam+a[y];
	     
	
	
	aritmetik=toplam/5.0;
	
	printf("\nGirdiginiz dizinin terimlerinin aritmetik ortalmasi:%.2f",aritmetik);
	
	
	
	
	return 0;
}
