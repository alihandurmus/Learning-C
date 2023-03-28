#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct ogrenci
{
char no[10];
char isim[40];
char soyisim[40];	
	struct ogrenci *next;
};


int main()
{ 
  struct ogrenci *s4 = (struct ogrenci*) malloc (sizeof(struct ogrenci));
  strncpy(s4->no,"4",10);
  strncpy(s4->isim,"Fatma",40);
  strncpy(s4->soyisim,"Aydin",40);
  s4->next = NULL;
  struct ogrenci s1 = {"159","Alihan","Durmus"};
  struct ogrenci s2 = {"753","Abdu","Colak"};
  struct ogrenci s3 = {"789","Yosen","Esen"};
s1.next = &s2;
s2.next = &s3;
s3.next = s4;
struct ogrenci *temp = &s1;

while(temp != NULL)
{
printf("%s-%s-%s\n",temp->no,temp->isim,temp->soyisim);
temp = temp->next;

}

free(s4);






return 0;
}
