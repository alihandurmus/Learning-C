#include<stdio.h>

int main()
{

  FILE *f;
while(1){

  f = fopen("dosya.txt","r");

  if(f==NULL)
  {
  
  printf("Dosya bulunamadi");
  return 0;
  }
  char s[100][250];//Neden burda 2 boyutlu dizi oluşturmak zorundayız yaw.
  int row = 0;
  while(fgets(s[row],250,f) != NULL&&row<100)
   {  
	   printf(" %.250s",s[row]);
	   row++;
    }  
   
  fclose(f);


}

return 0;
}
