#include<stdio.h>
int toplam(int sayi){
int rakam,toplam;
toplam=0;


while(sayi>0){


       rakam=sayi%10;
       sayi=sayi/10;
       toplam=toplam+rakam;




}

return toplam;
}
int main() {
	int sayi;
printf("bir sayi giriniz:");
scanf("%d",&sayi);


printf("%d",toplam(sayi));




















return 0;
}
