/*MATRIX
 */


#include<conio.h>
#include<stdlib.h>
#include<time.h>
 
int main() 
{
    int x,y;
    system("color A");
    srand(time(NULL));
    getche();
    while(1)
    {
       x=rand()%10;
       printf("%d\t%d\t",x,x);
       y=rand()%100;
       if (y==0) printf("");  
    }
    return 0;
}
