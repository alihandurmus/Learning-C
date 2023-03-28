#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char *s,*k;
    s = malloc(1024 * sizeof(char));
    k = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    int leng= strlen(s);
   
    int x=0;
    char *del=" ";
    for(;x<leng;x++)
    {
        for(;s[x]!=' ';x++)
        {   if(x<leng)
         {
            k=&s[x];
            printf("%c",*k);
         }
         else 
         break;
        }
     printf("\n");
    }
    
    return 0;
}
