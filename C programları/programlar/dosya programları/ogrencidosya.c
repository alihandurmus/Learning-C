#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
struct ogrenci
{
	char no[10];
	char isim[40];
	struct ogrenci *next;
	
}head={"458","NAME",NULL};
int ogrenci_oku(FILE *f)
{
if(f == NULL)
return -1;
struct ogrenci *temp = &head;
char a[150];


while (fgets(a,150,f)!=NULL)
{
	temp->next = (struct ogrenci *) malloc (sizeof(struct ogrenci));
	char *no = strtok(a,"\t");
	char *isim = strtok(NULL,"\t");
	if(no != NULL && isim != NULL)
	{
		strncpy(temp->next->no,no,10);
		strncpy(temp->next->isim,isim,40);
		temp = temp->next;
	}
	
}	
	temp->next = NULL;
	return 0;
}
void ogrenci_yazdir()
{
	struct ogrenci *temp = &head;
	while(temp!=NULL)
	{  if(temp != &head)
		{
		printf("%.10s-",temp->no);
		printf("%.40s",temp->isim);
	    }
		temp = temp->next;
	}
}
void ogrenci_serbest_birak()
{
   struct ogrenci *temp = head.next;
   while(temp!=NULL)
   {
	   
	   struct ogrenci *nextogrenci  = temp->next;
	   free(temp);
	   temp = nextogrenci;
	}	
}



int main()
{
	FILE *f = fopen("ogrenci.txt","r");
	ogrenci_oku(f);
	ogrenci_yazdir();
	ogrenci_serbest_birak();
return 0;
}
