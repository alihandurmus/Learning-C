#include<stdio.h>

int main()
{

  FILE *f;


  f = fopen("dosya.txt","r");

  if(f==NULL)
  {
  
  printf("Dosya bulunamadi");
  return 0;
  }
  char c,a[40][200];
  int row = 0,col = 0;
  while((c = fgetc(f)) != EOF&&row<40&&col<200)
   {  if(c != '\n')
  	   a[row][col++] = c;
  	   else
  	   {
  	   a[row++][col] = '\0';
  	   col=0;
       }
    }  
   for(int x=0;x<6;x++)
   {
	   for(int y=0;a[x][y]!='\0';y++)
	   {
		   printf("%c",a[x][y]);
	   }
	   printf("\n");
   } 
  fclose(f);
















return 0;
}
