#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h> 
 int main()
 {
 
 for(int x=0;x<5;x++)
 {

 int rastgele;
 
 rastgele = rand()%4;
 
 printf("%d",rastgele);
 srand(time(NULL));
 
}
 
 
 
 
 
 
 
 return 0;
 }
