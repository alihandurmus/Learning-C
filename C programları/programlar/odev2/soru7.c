#include<stdio.h>
#include<unistd.h>
/*
Alihan Durmuþ
20120205028
Bu program kullanýcýný girdiði sayý kadar satýr üçgen oluþturur.
*/

int main(){
	
	int n,x,y,z;
	printf("Kac satir olsun:");
	scanf("%d",&n);
	
	
	
	for(x=0;x<n;x++)
	{
		
		for(y=2;y<n-x+1;y++)//Bu for da ilk boþluk yazdýrýr
		{
		printf(" ");
	    }
		   for(z=n-x;z<n+1;z++)//Bu for da boþluktan sonra gelen sayýyý yazdýrýr.
		   {
		   
		   
		   printf("%d",z);
		   sleep(1);
		   
		   }
	
	    printf("\n");
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
