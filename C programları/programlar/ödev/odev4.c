#include<stdio.h>
/*
Alihan Durmu�
20120205028
Bu program kullan�c�n�n girdi�i say�y� tersten yazd�r�r.
*/
int main(){
	
	int sayi,rakam;//"sayi" kullan�c�n�n girdi�i say�d�r.
	               //"rakam" say�y� tersten yazd�rmak i�in tan�mlad���m�z bir de�i�kendir.
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("Sayinin tersten yazilisi:");
	   while(sayi>0){
	   	
	   	rakam=sayi%10;       //Burada say�n�n her seferinde say�n�n son basama��n� rakam de�i�kenine atayarak ve rakam� s�ras�yla yazd�rarak say�y� tersten yazd�rmas�n� sa�lad�m.
	   	 printf("%d",rakam);
	   	sayi=sayi/10;
	   	
	   	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
