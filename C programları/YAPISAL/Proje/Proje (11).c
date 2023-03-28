/*Enes Diler
 * Dizideki En Büyük 2. Sayıyı Bulma
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
    
        printf("En Buyuk Ikinci Sayi--> %.1f\n",numbers[4]);
    
    return 0;
}
