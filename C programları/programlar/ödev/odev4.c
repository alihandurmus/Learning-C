#include<stdio.h>
/*
Alihan Durmuş
20120205028
Bu program kullanıcının girdiği sayıyı tersten yazdırır.
*/
int main(){
	
	int sayi,rakam;//"sayi" kullanıcının girdiği sayıdır.
	               //"rakam" sayıyı tersten yazdırmak için tanımladığımız bir değişkendir.
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("Sayinin tersten yazilisi:");
	   while(sayi>0){
	   	
	   	rakam=sayi%10;       //Burada sayının her seferinde sayının son basamağını rakam değişkenine atayarak ve rakamı sırasıyla yazdırarak sayıyı tersten yazdırmasını sağladım.
	   	 printf("%d",rakam);
	   	sayi=sayi/10;
	   	
	   	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
