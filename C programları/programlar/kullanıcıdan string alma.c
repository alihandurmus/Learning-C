#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    char ch,s[100];
    char *dizi = (char *) malloc (100 * sizeof(char));
    
    scanf("%c",&ch);//  ^\n stands for taking input until a newline isn't encountered.Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.
    scanf("%100s",dizi);//You can take a string as input in C using scanf(“%s”, s). But, it accepts string only until it finds the first space.In order to take a line as input, you can use scanf("%[^\n]%*c", s);
    scanf("\n");
    scanf("%[^\n]%*c", s);//Note: The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line. This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.
    
    printf("%c\n%s\n%s",ch,dizi,s);// where s is defined as char s[MAX_LEN] where  is the maximum size of s. Here, [] is the scanset character. 
    
       
    return 0;
}
