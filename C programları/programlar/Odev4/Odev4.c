#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include<unistd.h>
/*
 *Alihan Durmus
 * 20120205028
 * Bu program linked list(bağlı liste) oluşturur ve dosyaya öğrenci silme ekleme yapar.
*/

struct ogrenci//Burada linked listimizi oluşturacağımız strcutımızı oluşturdum.
{
    char no[10];
    char isim[40];
    char soyisim[40];	
    struct ogrenci *next;//Burada öğrencileri birbirine bağlayabilmek için tanımladığım pointer var.
} head = {"ID","NAME","LASTNAME",NULL};
int ogrencileri_oku(FILE *f)//Bu fonksiyon ile linked list oluşturdum.
{
if(f == NULL)
return -1;
char a[500];//İlk önce dosyayı kopyalayabileceğimiz bir car dizisi tanımladım.
struct ogrenci *temp = &head;//Burada bu eşitliği yaparak her bir öğrenciyi diğerine bağlamak için bir temp tanımladım.

while(fgets(a,500,f)!=NULL)//Bu while ile hem chara dosyadan harfler geçirdim hem de öğrencileri temp ile birbirinin adreslerini gösterterek bağladıö.
{
	temp->next = (struct ogrenci *) malloc (sizeof(struct ogrenci));
	char *no = strtok(a,"\t"); //Bu strtoklarla dosyadaki kelimeleri teker teker çektim
	char *isim = strtok(NULL,"\t"); 
	char *soyisim = strtok(NULL,"\t"); 
	if(no != NULL && isim != NULL && soyisim != NULL)
	{
		strncpy(temp->next->no,no,10);//Çektiğim kelimeleri burada structa kopyaladım
		strncpy(temp->next->isim,isim,40);
		strncpy(temp->next->soyisim,soyisim,40);
		temp = temp->next;//Bu işlemi yaparak kopyalama işlemine bi diğer öğrenciden devam ettirdim.
	}
	
}
	temp->next = NULL;//Bu yaptığımız işlem yazdırma fonksiyonunda işimize yarayacak
	fseek(f,0,SEEK_SET);//Burada fgetsi sıfırladım.
	
	return 0;
}
void ogrencileri_yazdir()
{
	struct ogrenci *temp=&head;
	while(temp!=NULL)//Yukarıda yaptığımız NULL a eşitleme sayesinde öğrencileri NULL a kadar yazdırabildim.
	{  if(temp!=&head)
		{
		printf("%.10s-",temp->no);
		printf("%.40s-",temp->isim);
		printf("%.40s",temp->soyisim);
		usleep(1000);
	}
		temp = temp->next;
	}
	printf("\n");
}
void freeogrenci()//Bu fonksiyon ile temp öğrenciler için ayırdığımız yeri serbest bırakarak yer kaplamasını engellemiş oldum.
{
	struct ogrenci *temp = head.next;
   while(temp!=NULL)
   {
	   
	   struct ogrenci *nextogrenci  = temp->next;
	   free(temp);
	   temp = nextogrenci;
	}	
}
void ogrenci_ekle(FILE *f)
{   
	 f = fopen("students.txt","a+");

char no[4],isim[40],soyisim[40];
	printf("No:");
    scanf("%10s",no);

	printf("Isim:");
	scanf("\n");
	scanf("%[^\n]%*c", isim);

	printf("Soyisim:");
	scanf("%40s",soyisim);
	fprintf(f,"\n%s\t%s\t%s",no,isim,soyisim);//Bu fonksiyon ile yukarıda kullanıcıdan aldığım kayıtları dosyaya yazdırdım.
    printf("Ogrenci eklenmistir.\n");
    fseek(f,0,SEEK_SET);
}
int ogrenci_sil(FILE *f,char *no)
{
	FILE *newf = fopen("students1.txt","w");//Bu sildiğimiz kısım hariç diğer kısımları yazdığımız dosyayı w moduyla açarak hem yazma hem de dosyayı oluşturmayı sağladım.
	if(newf == NULL)
	return 0;
	f = fopen("students.txt","r");
	if(f == NULL)
	return -1;
	char p[500];
	
	
	
	while(fgets(p,500,f)!=NULL)
	{   
		
       if(no[0]!=p[0]||no[1]!=p[1])//Burada kullanıcının girdiği numara ile dosyada bulunan numaraları eşitmi diye karşılaştırdım.
        fputs(p,newf);//Burada eşit olunca yazdırmıyacak eşit olmayınca yazdıracak şeklinde düşündüm.
		
	}
	fseek(f,0,SEEK_SET);
	ogrencileri_oku(f);
	fclose(newf);//Bu kapatma işlemleriyle dosyayı silebildim.
	fclose(f);
	
	
	
	
	return 1;
}
int main()
{
  int islem,t=0;
  char y[10];
  FILE *f = fopen("students.txt","a+");
  ogrencileri_oku(f);
 while(t==0)
 { 
  printf("-------OGRENCI LISTESI------\n1-Ogrencileri Yazdir\n2-Ogrenci Sil\n3-Ogrenci ekle\n4-Cikis\n");
  printf("Hangi islemi yapmak istiyorsunuz:");//Burada programın menüsü var.
  scanf("%d",&islem);
  fseek(f,0,SEEK_SET);
  

  switch (islem)//Bu switch case ler ile kullanıcı istediği işlemi yapabiliyor.
  {
	  case 1:
	  
      ogrencileri_yazdir();
      freeogrenci();
      break;
      case 2:
      
      printf("Kac numarali ogrenciyi sileceksiniz:");
      scanf("%10s",y);
      ogrenci_sil(f,y);
      
      fclose(f);
      int temp = remove("students.txt");
	   if(temp==0)
	  {
		printf("Silme islemi basarili\n");//Burada eskiyi silip yeniyi eskinin ismi yaptım.
	    rename("students1.txt","students.txt");
	  }
      
      break;
      case 3:
      
      ogrenci_ekle(f);
      ogrencileri_oku(f);
      break;
      case 4:
      
      printf("Ogrenci listesinden ciktiniz.");
      t++;//Burada yaptığım işlemdeki amacım ise döngüden çıkabilmek.
      break;
   }   
      
}


















return 0;



}
