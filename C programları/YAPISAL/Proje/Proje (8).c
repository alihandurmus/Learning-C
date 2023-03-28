/*Enes Diler
 * Dizideki En Büyük Sayıyı Bulma
 */

#include <stdio.h>

int main(){
    
	float numbers[6], temp;
     
    for(int i = 0; i < 6; i++){
        printf("%d.sayi: ", i+1);
        scanf("%f", &numbers[i]);
    }
    
    for(int i = 0; i < 6; i++){
        for (int j = i+1; j < 6; j++){
			if (numbers[i] > numbers[j]){
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
         
    }
    for (int i = 0; i < 6; i++){
        printf("%.1f\n",numbers[i]);
    }
    return 0;
}

