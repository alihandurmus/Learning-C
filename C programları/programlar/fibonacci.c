#include<stdio.h>

int main(){
	
int sayi1=1,sayi2=1,i;

printf("%d\n%d\n",sayi1,sayi2);
for(i=0;i<19;i++){
	
	int temp=sayi2;
	sayi2=sayi2+sayi1;
	sayi1=temp;
	
	
	printf("%d\n",sayi2);
	
	
	
}
   


	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
