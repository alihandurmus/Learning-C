#include<stdio.h>
/*
int main(){
	
	int matris[3][5];
	int x,y,z,toplam,toplam1,toplam2,toplam3,toplam4;
	
    for(x=0;x<3;x++){
    	
    	for(y=0;y<5;y++){
    		
    		printf("Bir sayi giriniz:");
    		scanf("%d",&matris[x][y]);
    		
		}
    	
    	
    	
    	
    }
	
	for(x=0;x<3;x++){
		
		
		
		for(y=0;y<5;y++){
			
			printf("%d   ",matris[x][y]);
			
			
		}

		
		printf("\n");
		
}
		for(x=0;x<3;x++){
			
			
			for(y=0;y<1;y++){
				
				toplam=toplam+matris[x][y];
				
				
			}
			for(y=1;y<2;y++){
				
				toplam1=toplam1+matris[x][y];
				
				
			}
			for(y=2;y<3;y++){
				
				toplam2=toplam2+matris[x][y];
				
				
			}
			for(y=3;y<4;y++){
				
				toplam3=toplam3+matris[x][y];
				
				
			}
			for(y=4;y<5;y++){
				
				toplam4=toplam4+matris[x][y];
				
				
			}
		}
		    printf("%d %d %d %d %d",toplam,toplam1,toplam2,toplam3,toplam4);
		
		
		
		
		
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}*/


int main(){
	
	int matris[3][5];
	int x,y,z,toplam,toplam1,toplam2,toplam3,toplam4;
	
    for(x=0;x<3;x++){
    	
    	for(y=0;y<5;y++){
    		
    		printf("Bir sayi giriniz:");
    		scanf("%d",&matris[x][y]);
    		
		}
    	
    	
    	
    	
    }
	
	for(x=0;x<3;x++){
		
		
		
		for(y=0;y<5;y++){
			
			printf("%d   ",matris[x][y]);
			
			
		}

		
		printf("\n");
		
}


    for(y=0;y<5;y++){
    	
    	
    	for(x=0;x<3;x++){
    		
    		
    		toplam+=matris[x][y];
    		
    		
		}
		printf("%d ",toplam);
		toplam=0;
    	
	}











return 0;
}













