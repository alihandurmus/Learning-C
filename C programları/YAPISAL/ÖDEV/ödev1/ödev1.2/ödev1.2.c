/*ödev1.2.c
 * Enes Diler
 * işlemler
 */


#include <stdio.h>


int main()
{
	int x=18,y=3,z=-3;
	printf("a>18+3*(-3)=%d\n",x+y*z);
	printf("b>2*18+4-(3+3)=%d\n",2*x+4-(y-z));
	printf("c>18/3-3=%d\n",x/y+z);
	printf("d>18%%(18*3)=%d\n",x%(y*x));
	printf("e>18/-3=%d\n",x/z);
	printf("f>18%%-3+1=%d\n",x%z+1);
	printf("g>18+3/-3=%d\n",x+y/z);
	printf("h>18*(3/-3)=%d\n",x*(y/z));
	printf("i>(18*-3)%%3-1=%d\n",(x*z)%y-1);
	printf("j>18*(-3%%3)=%d\n",x*(z%y));
	
	return 0;
}

