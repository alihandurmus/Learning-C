#include<stdio.h>
int main(){
	
	
	int i,toplam=0;
	
	
	
	for(i=1;i<=10;i++){
		
		if(i%2==1)
		  continue;//bu continue d�ng�y� en baa d�nd�rmeye yarar.
		
		else 
		toplam=toplam+i;
		
		
	}
	printf("Cift sayilarin toplami:%d",toplam);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
