#include<stdio.h>
int main(){
	
	int satir,x,y,z;
	printf("Kac satir olsun:");
	scanf("%d",&satir);
	
	    for(x=0;x<satir;){
		
	    
	        
	        for(y=2;y<satir-x+1;y++)
	        printf(" ");
	        
	        for (z=1;z<satir+1-x;z++)
	        printf("%d",z);
	       
	
	
	
	printf("\n");
	
	x++;
	
	
}



return 0;

}

