#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    char ch,s[100];
    char *dizi = (char *) malloc (100 * sizeof(char));
    
    scanf("%c",&ch);
    scanf("%100s",dizi);
    scanf("\n");
    scanf("%[^\n]%*c", s);
    
    printf("%c\n%s\n%s",ch,dizi,s);
    
       
    return 0;
}
