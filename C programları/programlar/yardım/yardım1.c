#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
  char no[10],ad[20],soyad[20];
  struct student*ptr;
}head={"no","ad","soyad",NULL};
struct student*temp=&head;
int oku(FILE*f)
{
  if(f==NULL)
  return 0;
  
  

  char l[50];
  while(fgets(l,50,f)!=NULL)
  {
    temp->ptr=(struct student*)malloc(sizeof(struct student));
    char*no=strtok(l,"\t");
    char*ad=strtok(NULL,"\t");
    char*soyad=strtok(NULL,"\t");
    if(no!=NULL&&ad!=NULL&&soyad!=NULL)
    {
      no=strncpy(temp->ptr->no,no,10);
      ad=strncpy(temp->ptr->ad,ad,20);
      soyad=strncpy(temp->ptr->soyad,soyad,20);
    }
    temp=temp->ptr;

  }
  temp->ptr=NULL;
  return 0;

}

void yaz(FILE*f)
{
  struct student*p=&head;
  while(p!=NULL)
  { if(p!=&head)
    printf("%.10s %.20s %.20s",p->no,p->ad,p->soyad);
    p=p->ptr;
  }

}

void serbest(FILE*f)
{
  struct student*k=head.ptr;
  while(k!=NULL)
  {
    struct student*next=k->ptr;
    free(k);
    k=next;
  }
}
/*int sil(FILE*f)
{
  if(f==NULL)
  return 0;
  
  
  struct student m,n;
  
  
  printf("Silmek istediğiniz öğrencinin numarasını giriniz.");
  scanf("%s",m.no);
 
  n.ptr=&m;
  
  char l[150];
  while(fgets(l,150,f)!=NULL)
  {
    
    char*no=strtok(l,"\t");
    if(no==m.no)
    {
      n.ptr=m.ptr;
      
    }
  
  }
  return 0;
}*/
int sil(FILE* f)
{   f = fopen("ogrenci.txt","r");
	if(f==NULL)
	{
		return -1;
	}
	
	FILE* p=fopen("yeniogrenci.txt","w");
	if(p==NULL)
	{
		fclose(f);
		return -1;
	}
  char no[10];
  printf("Silmek istediginiz ogrencinin numarasini giriniz.");
  scanf("%10s",no);
 
	char k[100];
	while(fgets(k,100,f)!=NULL)
	{
		
		
		if(no[0]!=k[0]||no[1]!=k[1])
	 {
		 fputs(k,p);
		}
	
    
}
	
	fclose(f);
    //if(remove("ogrenci.txt")==0)
    //rename("yeniogrenci","ogrenci");
	
	fclose(p);
	return 0;
}
int ekle(FILE*f)
{
	if(f==NULL)
	 return 0;
	
	  
  struct student *c;
  c=(struct student*)malloc(sizeof(struct student));
  printf("Eklemek istediğiniz öğrencinin bilgilerini giriniz.");
  scanf("%10s",c->no);
  scanf("%20s",c->ad);
  scanf("%20s",c->soyad);
  temp->ptr=c;
  c->ptr=NULL;
  
  return 0;
}




int main(){
  FILE*f=fopen("ogrenci.txt","r");
  oku(f);
  
  
   //ekle(f);
  sil(f);
  
  yaz(f);
  serbest(f);
 
  fclose(f);
  
  return 0;
}
