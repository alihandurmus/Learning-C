#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
struct point
{
	int x;
	int y;
};
struct point makepoint(int x,int y)
{   
	struct point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}
struct rect
{   int ekran;
	struct point p1;
	struct point p2;
};


int main()
{
	struct rect screen;
	struct point mid;
	screen.p1 = makepoint(5,10);
	
	screen.p2 = makepoint(20,30);
	
	mid = makepoint((screen.p1.x + screen.p1.y)/2,(screen.p2.x + screen.p2.y)/2);
	printf("%d-%d",mid.x,mid.y);
return 0;
}

