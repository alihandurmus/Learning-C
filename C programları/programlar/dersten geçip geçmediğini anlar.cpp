#include<stdio.h>
#include<math.h>
int main(){
	int vize1,vize2,final;
	float dersort;
	
	printf("1.vize notunu giriniz.");
	scanf("%d",&vize1);
	printf("2.vize notunu giriniz.");
	scanf("%d",&vize2);
	printf("Final notunu giriniz.");
	scanf("%d",&final);
	
	dersort = (vize1+vize2+final)/3;
	
	if(dersort>60){
		
		printf("Ogretim yilini basari ile tamamladiniz \n Tebrikler\n");
		printf("Ders ortlamaniz %f dir",dersort);
		
	}
	
	else{
		
	printf("Malesef gecemediniz\n");
	printf("Ders ortlamaniz %.2f dir",dersort);
	}
	
	
	
	
	return 0;
}
