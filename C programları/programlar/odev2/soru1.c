#include<stdio.h>

int main(){
	/*
	Alihan Durmu�
	20120205028
	Bu program dizideki elemanlar� b�y�kten k����e s�ralar
	*/
	
	int a[6],b,amax,x,c;//Burada girece�imiz diziyi tan�mlad�k for da kullanac���m�z de�i�kenleri tan�mlad�k ve b�y�kten k����e s�ralamak i�in gerekli amax de�i�kenimizi tan�mlad�k.
	printf("Dizinin elemanlarinin giriniz:");
	 for(b=0;b<6;b++)
	 {
	 	scanf("%d",&a[b]);
	 }
	printf("Dizinin buyukten kucuge siralanisi:");
	
	    for(b=0;b<6;b++)
	    {
		
	    
	      for(c=0;c<6;c++)//Buradaki for ile en b�y�k say�y� her buludu�unda en ba�a tan�mlayan bir algoritma var.
		  {
	      	if(a[b]>a[c])
			  {
	      		amax=a[b];//
	      		a[b]=a[c];
	      		a[c]=amax;
	      		
			  }
		  }
	
        }
	
	
	for(x=0;x<6;x++)//Burada diziyi b�y�kten k����e s�ralad�ktan sonra yazd�rmak i�in kulland���m�z for bulunmakta.
	{
		printf("%d ",a[x]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
