#include<stdio.h>
#include<string.h>

int main()
{   

 char dizi[80] = "Alihan Durmus Olarak Kod Yaziyorum";
    
const char del[2] = " ";
char *token;
     
token = strtok(dizi,del);

while(token!='\0')
{
printf("%s\n",token);
token = strtok(NULL,del);	
}










return 0;


}
