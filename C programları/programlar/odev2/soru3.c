#include<stdio.h>
/*Alihan Durmuþ
20120205028
Bu program str dizisinde en çok tekrar eden sayýyý bulmaya yarar.
*/

char enfazla(char dizi1[],int size)//Burada dizide en çok tekrar eden sayýyý bulan bir fonksiyon tanýmladým.
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
	char dizi1[6]="alihan";
	
	
	
	printf("Dizinin en cok tekrar eden elemani:%c",enfazla(dizi1,6));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
