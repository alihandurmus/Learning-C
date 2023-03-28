#include<stdio.h>
/*
Alihan Durmuþ
20120205028
Bu program int dizisinde en çok tekrar eden sayýyý bulmaya yarar.
*/

int enfazla(int dizi1[],int size)//Burada dizide en çok tekrar eden sayýyý bulan bir fonksiyon tanýmladým.
{
	int y,z,sayac,temp=0,i=0;
	for(y=0;y<size;y++)
	{
	  sayac=0;
	   for(z=0;z<size;z++)//Bu for bir dizi elemaný alarak kendine eþit olan sayýyý bulunca sayacý bir arttýran bir algoritmayla en çok geçen karakteri bulur.
	   {
	   	
	    
	    if(dizi1[z]==dizi1[y])
		sayac++;
	    
	
        
       }
       if(sayac>temp)
		{
			temp=sayac;
			i=dizi1[y];
			
		}
    }
      
    return i;
}

int main()
{
	int x;
	int dizi1[10]={1,2,3,3,3,4,8,8,5,7};
	
	
	
	printf("Dizinin en cok tekrar eden elemani:%d",enfazla(dizi1,10));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
