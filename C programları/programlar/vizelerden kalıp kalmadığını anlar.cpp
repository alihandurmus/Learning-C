#include<stdio.h>
#include<math.h>
int main(){
	int vize1,vize2,final;
	float dersort;
	float derece;
	
	
	printf("1.vize notunu giriniz.");
	scanf("%d",&vize1);
	printf("2.vize notunu giriniz.");
	scanf("%d",&vize2);
	printf("Final notunu giriniz.");
	scanf("%d",&final);
	printf("Universite derecesini giriniz notunu giriniz.");
	scanf("%f",&derece);
	
	
	dersort = (vize1+vize2+final)/3;
	
	if(dersort>60){
		
		printf("Ogretim yilini basari ile tamamladiniz \n Tebrikler\n");
		printf("Ders ortlamaniz %f dir",dersort);
		printf("\nUniversite derceniz %f dir",derece);
		
		
	}
	else if(dersort>40){
		
		printf("Dersten bute kaldiniz\n");
		printf("Ders ortalamaniz %f dir",dersort);
		printf("Universite dereceniz %f dir",derece);
		if (derece>2.5)
		
		printf("Butu gecerseniz ogretim yilini basari ile bitirebileceksiniz ama iyi calisin.");
		
		
		else
		  
		  printf("Butu gecseniz bile Dersi tekrar almalisiniz cunku universite dereceniz dusuk.");
		  
		
		
		
	}
	else{
		
	printf("Malesef gecemediniz\n");
	printf("Ders ortlamaniz %.2f dir",dersort);
	}
	
	
	
	
	return 0;
}
