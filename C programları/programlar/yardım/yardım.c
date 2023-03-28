#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ogrenci{
    char no[10],isim[40],soyisim[40];
    struct ogrenci *next;
}head={"NO","İSİM","SOYİSİM",NULL};

int ogrenci_oku(FILE *f);
int sil(FILE *f1, char *silinecekno);
int ekle(FILE *newf);
void free_ogrenci();

int main()
{
	FILE *f1=fopen("ogrenci1.txt","a+");
	char silinecekno[2];
	ogrenci_oku(f1);
	
	printf("Silinecek ogrencinin numarasini giriniz: ");
	scanf("%s",silinecekno);
	fclose(f1);
	int a=sil(f1,silinecekno);
	if(a==1)
	  printf("\nOgrenci silindi");
	  int tercih;
	   printf("\nOgrenci eklemek istiyorsaniz 1'e , istemiyorsaniz 0'a basin.");
	    scanf("%d",&tercih);
	     if(tercih==1)
	      {
		    int b;
		    b=ekle(f1);
		    if(b==1)
		    printf("\nOgrenci eklendi");
		  }
	     else
	      {
		    printf("Yeni ogrenci eklenmiyor");
		  }  
	
	return 0;
}
int ogrenci_oku(FILE *f)
{
	if(f == NULL)
	return -1;
	char l[150];
	struct ogrenci *temp=&head;
	while(fgets(l,150,f)!=NULL)
	{
		temp->next=(struct ogrenci*)malloc(sizeof(struct ogrenci));
			char *no=strtok(l,"\t");
			char *isim=strtok(NULL,"\t");
			char *soyisim=strtok(NULL,"\t");
			if(no!=NULL && isim!=NULL && soyisim!=NULL)
			{
				strncpy(temp->next->no,no,10);
		        strncpy(temp->next->isim,isim,40);
		        strncpy(temp->next->soyisim,soyisim,40);
		        temp=temp->next;
			}
			
			
	}
	temp->next=NULL;
	return 0;
}

int sil(FILE *f1, char *silinecekno)
{
	f1 = fopen("ogrenci1.txt","r");
	int silindimi=0;
	FILE *f2=fopen("yedek.txt","w");
	if(f1 == NULL && f2==NULL) 
		printf("hata");
		
	
	char l[150];
    while (fgets(l,150,f1)!= NULL)
     {      char *no=strtok(l,"\t");
			char *isim=strtok(NULL,"\t");
			char *soyisim=strtok(NULL,"\t");
		    
			if(silinecekno[0]==l[0]&&silinecekno[1]==l[1])
			{
				silindimi=1;
			}
		    else
		    {
		    
		    fprintf(f2,"%s\t%s\t%s",no,isim,soyisim);
		    
		    }
		
		
		  
		  		
	}
		
          
          fclose(f2);
		  fclose(f1);
		  remove("ogrenci1.txt");
		  rename("yedek.txt","ogrenci1.txt");
		  return silindimi;
	}
	int ekle(FILE *f){
		f = fopen("ogrenci1.txt","a+");
		char no[4],isim[40],soyisim[40];
	    printf("Ogrencinin nosunu giriniz:");
        scanf("%10s",no);

	    printf("Ogrencinin ismini giriniz:");
	    scanf("\n");
	    scanf("%[^\n]%*c", isim);

	    printf("Ogrencinin soyismini giriniz:");
	    scanf("%40s",soyisim);
	    fprintf(f,"\n%s\t%s\t%s",no,isim,soyisim);
        
    fclose(f);
	 
	 return 1;
	}
		
		void free_ogrenci(){
			struct ogrenci *temp=head.next;
			while(temp!=NULL)
			{
				struct ogrenci *nextogrenci=temp->next;
				free(temp);
				temp=nextogrenci;
				}
			}
