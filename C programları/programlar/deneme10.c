#include<stdio.h>

int asalmi(int x){
	
	int i;
	for(i=2;i<x;i++){
	
	
	if(x%i==0){
	
	
	return 0;
}
}
	
	return 1;
	

}





int main(){
	
	
	
	int n;
	printf("Bir sayi giriniz:");
	scanf("%d",&n);
	
	if(asalmi(n)==0)
	printf("Asal degildir");
	else
	
	printf("Asaldir");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
