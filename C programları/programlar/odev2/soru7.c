#include<stdio.h>
#include<unistd.h>
/*
Alihan Durmu�
20120205028
Bu program kullan�c�n� girdi�i say� kadar sat�r ��gen olu�turur.
*/

int main(){
	
	int n,x,y,z;
	printf("Kac satir olsun:");
	scanf("%d",&n);
	
	
	
	for(x=0;x<n;x++)
	{
		
		for(y=2;y<n-x+1;y++)//Bu for da ilk bo�luk yazd�r�r
		{
		printf(" ");
	    }
		   for(z=n-x;z<n+1;z++)//Bu for da bo�luktan sonra gelen say�y� yazd�r�r.
		   {
		   
		   
		   printf("%d",z);
		   sleep(1);
		   
		   }
	
	    printf("\n");
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
