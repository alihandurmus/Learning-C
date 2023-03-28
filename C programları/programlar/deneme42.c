#include<stdio.h>
struct point
{
	int x;
	int y;
};

int main()
{   
  struct point origin={5,10} , *pp;
  pp  = &origin;  

printf("origin : %d, %d",pp->x,pp->y);
return 0;
}
