#include<stdio.h>

int main(){
	/*
	Alihan Durmuþ
	20120205028
	Bu program dizideki elemanlarý büyükten küçüðe sýralar
	*/
	
	int a[6],b,amax,x,c;//Burada gireceðimiz diziyi tanýmladýk for da kullanacýðýmýz deðiþkenleri tanýmladýk ve büyükten küçüðe sýralamak için gerekli amax deðiþkenimizi tanýmladýk.
	printf("Dizinin elemanlarinin giriniz:");
	 for(b=0;b<6;b++)
	 {
	 	scanf("%d",&a[b]);
	 }
	printf("Dizinin buyukten kucuge siralanisi:");
	
	    for(b=0;b<6;b++)
	    {
		
	    
	      for(c=0;c<6;c++)//Buradaki for ile en büyük sayýyý her buluduðunda en baþa tanýmlayan bir algoritma var.
		  {
	      	if(a[b]>a[c])
			  {
	      		amax=a[b];//
	      		a[b]=a[c];
	      		a[c]=amax;
	      		
			  }
		  }
	
        }
	
	
	for(x=0;x<6;x++)//Burada diziyi büyükten küçüðe sýraladýktan sonra yazdýrmak için kullandýðýmýz for bulunmakta.
	{
		printf("%d ",a[x]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
