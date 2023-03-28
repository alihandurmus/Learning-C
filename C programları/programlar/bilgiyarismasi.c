#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main(){
     printf("Bilgi yarismasina hos geldiniz asagidaki kurallari lutfen okuyunuz\n"
	"*Lutfen adinizi ve soyadiniz girerek kayit olunuz\n*Yarismamiz puan sistemlidir\n*Her soru 10 puan degerindedir\n*Her yanlis cevabinizda puaniniz 5 azalir\n*Yarismamiz 5 sorudan olusmaktadir\n*Basarilar dileriz\n");
	int y = 1;
  while(y ==1 ) 
 {
	char isimVeri[100];
	char soyisimVeri[100];
	printf("Lutfen adinizi giriniz:");
	scanf("%s",&isimVeri);
	printf("Lutfen soyadinizi giriniz:");
	scanf("%s",&soyisimVeri);
	
	printf("Basarili bir sekilde kayit oldunuz\n**Yarismamiz baslamak uzeredir bekleyiniz**\n");
	sleep(2);
	printf("Yarismamiz baslamistir\n");
	sleep(1);
	
	char cevap[2];
	int puan=0;
	printf("[Soru-1]Yazlari sicak ve kurak; kislari ise soguk ve karli gecen bir bolgede asagidaki iklimlerden hangisi gorulur?\na)Muson Iklimi\nb)Karasal Iklim\nc)Ekvatoral Iklim\nd)Tropikal Iklim\ne)Akdeniz Iklimi\n");
	printf("Cevabiniz:");
	scanf("%s",&cevap);
	if(strcmp(cevap,"b")==0){
		printf("\nDogru cevap\n");
		sleep(1);
		puan+=10;
		printf("Puaniniz:%d\n",puan);
		sleep(1);
	}
	else {
		printf("Hatali cevap dogru cevap b sikkidir\n");
		sleep(1);
		puan-=5;
		printf("Puan:%d\n",puan);
		sleep(1);
	}
	printf("Simdi 2.soruya geciyoruz.\n");
	sleep(1);
	printf("[Soru-2]Asagidakilerden hangisi Birlesmis Milletlerde veto hakkina sahip degildir?\na)Rusya\nb)Ingiltere\nc)Cin\nd)Almanya\ne)Fransa\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"d")==0){
		printf("\nDogru cevap\n");
		sleep(1);
		puan+=10;
		printf("Puaniniz:%d\n",puan);
		sleep(1);
	}
	else {
		printf("Hatali cevap dogru cevap d sikkidir\n");
		sleep(1);
		puan-=5;
		printf("Puan:%d\n",puan);
		sleep(1);
	}
	printf("Simdi 3.soruya gecelim\n");
		printf("[Soru-3]Turk hanlarinin yasadigi cerge olarak da bilinen buyuk ve suslu cadirin adi nedir?\na)Kumbet\nb)Saray\nc)Otag\nd)Halvet Cadiri\ne)Kilar Cadiri\n");
	scanf("%s",&cevap);
	sleep(1);
	if(strcmp(cevap,"c")==0){
		printf("\nDogru cevap\n");
		sleep(1);
		puan+=10;
		printf("Puaniniz:%d\n",puan);
		sleep(1);
	}
	else {
		printf("Hatali cevap dogru cevap c sikkidir\n");
		sleep(1);
		puan-=5;
		printf("Puan:%d\n",puan);
		sleep(1);
	}
	printf("Simdi 4.soruya gecelim\n");
		printf("[Soru-4]Turkiyede en cok kullanilan sinir kapisi hangisidir?\na)Kapikule\nb)Pazarkule\nc)Ipsala\nd)Derekoy\ne)Hamzabeyli\n");
	scanf("%s",&cevap);
	sleep(1);
	if(strcmp(cevap,"a")==0){
		printf("\nDogru cevap\n");
		sleep(1);
		puan+=10;
		printf("Puaniniz:%d\n",puan);
		sleep(1);
	}
	else {
		printf("Hatali cevap dogru cevap a sikkidir\n");
		sleep(1);
		puan-=5;
		printf("Puan:%d\n",puan);
		sleep(1);
	}
	printf("Simdi 5.soruya gecelim\n");
		printf("[Soru-5]Turkiye'yi agaclandirmak ve erozyonla mucadele etmek olan kurulan Sivil Toplum Kurulusu, asagidakilerden hangisidir?\na)ACEV\nb)TEGV\nc)TOG\nd)TEV\ne)TEMA\n");
	scanf("%s",&cevap);
	sleep(1);
	if(strcmp(cevap,"e")==0){
		printf("\nDogru cevap\n");
		sleep(1);
		puan+=10;
		printf("Puaniniz:%d\n",puan);
		sleep(1);
	}
	else {
		printf("Hatali cevap dogru cevap e sikkidir\n");
		sleep(1);
		puan-=5;
		printf("Puan:%d\n",puan);
		sleep(1);
	}
	
	
	
	printf("Yarismamiz sona ermistir\nOyun skorunuz:%d\n",puan);
	printf("Yeniden denemek icin 1 bitirmek icin 2 ye basiniz.");
	scanf("%d",&y);

}
	printf("Yarismamiza katildiginiz icin tesekkurler.");
	sleep(1);
	return 0;
}
