/*
 * lab11 
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>


char *trim_string (char *s);
int main(){

    //KOmutlarý takip ederek kodu buraya yazýnýz
    
    char str[25],*p;
    scanf("%25[^\n]s",str);
    
    while (1){
        char c;
        char del[]=" ";
        char *token;
        p = str;
        trim_string(p);
        token = strtok(p,del);
        if(!strcmp(token,"+"))
        {
            int x = atof(strtok(NULL,del));
            
            int y = atof(strtok(NULL,del));
            int sonuc = x+y;
            printf("%d + %d = %d",x,y,sonuc);
            break;
        }
        if(!strcmp(token,"-"))
        {
            int x = atof(strtok(NULL,del));
            
            int y = atof(strtok(NULL,del));
            int sonuc = x-y;
            printf("%d - %d = %d",x,y,sonuc);
            break;
        }
        if(!strcmp(token,"ln"))
        {
            int x = atof(strtok(NULL,del));
            
            printf("ln(x) = %lf",log(x));
            break;
        }
        if(!strcmp(token,"exp"))
        {
            int x = atof(strtok(NULL,del));
            
            printf("exp(x) = %lf",exp(x));
            break;
        }
        
        
        /* empty the buffer */
        while ((c = fgetc(stdin)) != '\n' && c != EOF);
        
    }
    return 0;

}
/* trim_string:BU fonksiyon boþluklarý siler ve sonunda space olmayan ilk karaktere bir pointer dondurür
 * */
char *trim_string (char *s)
{
    char *end = s + strlen(s)-1;
    while(isspace(*s)) s++;
    while(isspace(*end)) end--;
    end[1] = '\0';
    return s;
}
