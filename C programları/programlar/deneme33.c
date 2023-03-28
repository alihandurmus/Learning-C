#include<stdio.h>
#include<stdlib.h>

char *strcpy1(char *t)
{
       
       int i=0;
       while(t[i++] != '\0');
       char *s = (char *) malloc (i * sizeof(char));
       for(int x = 0;x<i;x++)
       s[x]=t[x];
       
       return &s[0];   

}


int main()
{   
   
   char dizi1[] = "Ahmet";
   char *dizi2 = strcpy1(dizi1);
   printf("%.15s\n",dizi2);
  
 free(dizi2);



















return 0;


}

