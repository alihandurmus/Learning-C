#include<stdio.h>
int main(){
	
	
	
     int x=1,fact=1,n;
     printf("Faktoriyelini bulmak istediginiz sayiyi giriniz:");
     scanf("%d",&n);
     if(n<0){
	 
     	printf("Girdiginiz sayinin faktoriyeli bulunmamaktadir");
     	return 1;
     }
     	else
          while(x<=n)
		  {
     	
            if(n==0)
            printf("Girdiginiz sayinin faktoriyeli:%d dir.",fact);
            else
		   {
		
     	    fact=x*fact;
     	
     	
     	
     	   x++;
           }
	     }
	
	
	printf("Girdiginiz sayinin faktoriyeli %d dir",fact);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
