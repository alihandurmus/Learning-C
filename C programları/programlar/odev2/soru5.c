#include<stdio.h>
/*
Alihan Durmu�
20120205028
Bu program recursive fonksiyon ile dizideki elemanlar�n toplam�n� yazd�r�r.
*/


int dizitoplam(int dizi1[],int size){
int toplam;
         if(size!=0)//Burada d�ng� olu�turmak yerine dizinin elemanlar�n� toplayan bir recursive fonkisyon olu�turdum.
		 {
		 	toplam=dizi1[size-1]+dizitoplam(dizi1,size-1);
         	return toplam;
		 }
         return 0;
          
   }
int main(){
	
	int dizi1[]={1,2,3,4,5,6};
	
	printf("Dizinin elemanlari toplami:%d",dizitoplam(dizi1,6));
	
	
	
	
	return 0;
}
