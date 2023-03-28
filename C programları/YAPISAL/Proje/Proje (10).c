/*Eleman Arama
 */
#include <stdio.h>

int main(){
    char msg[10] = {'m', 'e', 'd', 'e', 'n', 
	                 'i', 'y', 'e', 't', '!'};
    char x;
    
    printf("Enter a char, bir char giriniz: ");
    scanf("%c", &x);
    
    for(int i = 0; i < 10; i++){
        if (x == msg[i]){
            printf(" found, bulundu!\n");
            printf("the position, pozisyonu: %d\n", i);
            return 0;
        }  
    }
    printf(" not found, bulunamadi!\n");
    return 0;
}
