#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ogrenci{
    char no[10],isim[40],soyisim[40];
    struct ogrenci *next;
};


void sil_ekle(FILE *f1,FILE *f2);


int main()
{
    FILE *f,*f2;
    sil_ekle(f,f2);
    return 0;
}

void sil_ekle(FILE *f1,FILE *f2){
	
	 f1 = fopen("ogrenci1.txt", "r");
     f2= fopen("yedek.txt","w");
    if(f1 == NULL && f2==NULL) 
		printf("hata");

    printf("Silmek istediginiz ogrencinin No sunu giriniz: ");
    char silinecekno[3];
		scanf("%s",silinecekno);

    char l[100];
    while (fgets(l,100,f1) != NULL )
        {
            if(l[0]!=silinecekno[0] || l[1]!=silinecekno[1])
			{
                fputs(l,f2);
            }
        }
		printf("\nOgrenci silindi");
		int x;
		printf("\nOgrenci eklemek istiyorsaniz 1'e,istemiyorsaniz 0'a basin ");
		scanf("%d",&x);
	if(x==1){	
		printf("\nOgrenci ekleme islemi yapiliyor\n");
    struct ogrenci s1;
     printf("\nOgrenci no giriniz ");
     scanf("%s",s1.no);
     printf("\nOgrenci isim giriniz ");
	 scanf("%s",s1.isim);
	 printf("\nOgrenci soyisim  giriniz ");
     scanf("%s",s1.soyisim);
	 char *yeni;
	 fputc('\n',f2);
	 yeni=s1.no;
	 fputs(yeni,f2);
	 fputc('\t',f2);
     yeni=s1.isim; 
	 fputs(yeni,f2);
	 fputc('\t',f2);
	 yeni=s1.soyisim; 
	 fputs(yeni,f2);
	 
	 printf("\nOgrenci eklendi");
    }
    else if(x==0){
		printf("\nOgrenci eklenmedi");
		}

    fclose(f1);
    fclose(f2);
    remove("ogrenci1.txt");
    rename("yedek.txt","ogrenci1.txt");
	
	
	
	}
