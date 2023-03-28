#include<stdio.h>
#include<stdlib.h>


int main()
{
  char p[] = "14 Alihan Durmus";
  
  char *num = (char *) malloc (2*sizeof(char));
   const char del[2]=" ";
   for(int x = 0;p[x]!=del[0];x++)
    {   
		num[x] = p[x];
		
	}   

   printf("%s",num);


free(num);



















return 0;
}
