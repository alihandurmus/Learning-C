#include<stdio.h>
struct point
{
  int x;
  int y;

};
struct rect
{    
	int ekran;
	struct point p1;
	struct point p2;
	struct point p3;
};
int dikdortgenin_icinde_mi(struct rect d,struct point p3)
{
	if(d.p3.x>0&&d.p3.x<100&&d.p3.y>0&&d.p3.y<100)

    return 1;
     else 
    return 0;
}
int main()
{   
    struct rect screen;
    struct point p1 = {0,0};
    struct point p2 = {100,200};
    struct point p3;
    printf("Noktanin x degerini giriniz:");
    scanf("%d",&screen.p3.x);
    printf("Noktanin y degerini giriniz:");
    scanf("%d",&screen.p3.y);

printf("%d",dikdortgenin_icinde_mi(screen,screen.p3));


return 0;
}
