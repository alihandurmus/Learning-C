#include<stdio.h>

int main()
{

int a[3][3] = {{1,2,3},{3,4,5},{6,7,8}};

int *b[3];

b[0] = a[2];
b[1] = a[1];
b[2] = a[0];

for(int x = 0;x<3;x++)
{
	for(int y =0 ;y<3;y++)
	printf("%d",b[x][y]);
	printf("\n");
	
}

    























return 0;


}
