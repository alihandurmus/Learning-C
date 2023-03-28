#include<stdio.h>


   int fact(int x){
   	
   	int i,fact=1;
   	for(i=1;i<=x;i++){
   		
   		
   		fact=fact*i;
	   }
   	
   	return fact;
   }



int main(){
	
	
	
	
	int n;
	
	printf("Bir n sayisi giriniz:");
	scanf("%d",&n);
	
	
	
	printf("Girdiginiz sayinin faktoriyeli: %d",fact(n));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
