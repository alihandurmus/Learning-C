#include<stdio.h>
/*Alihan Durmu�
20120205028
Bu program str dizisinde en �ok tekrar eden say�y� bulmaya yarar.
*/

char enfazla(char dizi1[],int size)//Burada dizide en �ok tekrar eden say�y� bulan bir fonksiyon tan�mlad�m.
{
	int y,z,sayac,temp=0,i=0;
	for(y=0;y<size;y++)
	{
	  sayac=0;
	   for(z=0;z<size;z++)//Bu for bir dizi eleman� alarak kendine e�it olan say�y� bulunca sayac� bir artt�ran bir algoritmayla en �ok ge�en karakteri bulur.
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
