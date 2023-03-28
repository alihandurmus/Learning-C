/*E
 */

#include <stdio.h>

int main(){
    
	float numbers[30], temp;
     
    for(int i = 0; i <= 30 ; i++){
        numbers[i]=i;
    }
    for(int i = 0; i < 10 ; i++){
        numbers[i+5]=i;
    }
    for(int i = 0; i < 30 ; i++){
        printf("dgr-->%.f\n",numbers[i]);
    }
    
    for(int i = 0; i < 10; i++){
		temp = numbers[i];
		if (numbers[i] == temp){                
                
                printf("%f\n",numbers[i]);
			}
		
		
		
		/*
        
        for (int j = i; j < 30; j++){
			if (numbers[i] == numbers[j]){
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
                printf("%f\n",numbers[j]);
            }
        }
        */
         
    }
    
    
        
    
    return 0;
}
