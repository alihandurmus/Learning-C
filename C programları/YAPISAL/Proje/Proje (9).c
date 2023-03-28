/*Enes Diler
 * Girilen Sayilarin Ortalamasini Bulan Program
 */


#include <stdio.h>

int main(int argc, char **argv){
    float a;        
    float sum = 0;
    int n = 0;
    
    printf("Enter a number, negative number to exit\n");
    scanf("%f", &a);
    
    while(a > 0){
        n++;
        sum = sum + a;
        scanf("%f",&a);        
    }
    printf("The mean of the given numbers is %f\n", sum/n);	
    return 0;
}
