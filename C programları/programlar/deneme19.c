#include<stdio.h>
int main()
{   
    int *p , c[4] = {0,1,2,3};
    
    p = c;
    
    printf("%d",*p++);
	return 0;
}
