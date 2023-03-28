#include<stdio.h>
void swap( int **px , int **py)
{

        int *temp = *px;
        *px = *py;
        *py = temp;
        
}
int main()
{
	int *pa , *pb , a = 1 , b = 0;
	
	pa = &a;
	pb = &b;
	
	swap (&pa,&pb);
	
	printf("a:%d , b:%d \n",a,b);
	printf("*pa:%d , *pb:%d \n",*pa,*pb);
	
	
	
	
	
	
	
	return 0;
}
