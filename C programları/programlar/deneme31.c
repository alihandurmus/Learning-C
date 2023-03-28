#include<stdio.h> 
int strcmp1(char *s, char *t)//iki stringi karşılaştırıp aynı olup olmadıpını belirler.
{
for(int i=0;s[i]==t[i];i++)
{
if(s[i]=='\0')
     return 0;	
}
	
	return 1;
}

int main()
{   


char dizi1[]={"Alihan"};
char dizi2[]={"Aliha"};
printf("%d",strcmp1(dizi1,dizi2));





















return 0;


}

