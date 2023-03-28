#include<stdio.h>
#include<stdlib.h>

void strcpy1(char *s,char *t)
{

while((*s++=*t++)!='\0');

}


int main()
{   
   char *dizi2 = (char *) malloc (20 * sizeof(char));
   char *dizi1={"Alihan"};
  
  strcpy1(dizi2,dizi1);
  printf("%s",dizi2);









free(dizi2);











return 0;


}

