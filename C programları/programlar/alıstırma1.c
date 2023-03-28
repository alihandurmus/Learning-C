#include<stdio.h>
int uzunluk(char *c)
{
int len = 0;
while(c[len]!='\0')
len++;

c[len]='a';
c[len+1]='\0';
return len+1;




}

int main()
{

char msg[]="MEDENIYET!";
printf("%d-%s",uzunluk(msg),msg);


























return 0;

}
