#include<stdio.h>
int main(){
	int a,c,e,f,g,h,j,k,m,n,o,p,r,s,q,w,u,v,qq,qw,qr,i,qt,qe,qa,qy,qu,qi,qo,qg,qp,qs,qd,qf,qh,qj,qk,qz,qx,qc,qv;//Burada �ok fazla for yapt���m i�in bi okadar da de�i�ken atamak zorunda kald�m.
	int islem,x,y,z,t;//Bu de�i�kenler kullan�c�n�n ne kadar otogaz alaca��n� belirtmek i�in kullan�ld�
	float d=6.75,b=7.09,l=4.07;//Bu de�i�kenler dizel benzin lpg fiyatlar�n� g�sterir
	char tip,secim;//Bu de�i�kenler switch caselerdeki benzinmi lpgmi yoksa dizel �zerinden mi i�lem yapaca��n� se�mek i�in olu�turuldu.
	float dd=1000,bd=1000,ld=1000;//Bunlar depoda ka� litre otogaz oldu�unu g�steren de�i�kenler.
	float para=0,bsatis=0,bpara=0,dsatis=0,dpara=0,lsatis=0,lpara=0,dp,bp,lp,yuzde1,yuzde2,yuzde3;//Burada 5.se�imdeki snu�lar i�in olu�turdu�um de�i�kenler.Ayr�ca 4.casedeki y�zdeleri g�stermek i�in olu�turdu�um de�i�kenler de var.
	//Hocam valla �ok u�ra�t�m ama �u benzin �eklini bi ��karamad�m.Art�k �ok da s�k�ld�m zaman da t�kendi.Oldu�u kadar teslim ediyorum hocam.
    system("COLOR 6");//Burada beyaz art�k sade gelmeye ba�lad��� i�in b�yle bi�ey yapay�m dedim.
	for(t=0;t==0;){//Burada d�ng� olu�turarak kullan�c�n�n i�lemini bitirdi�inde her seferinde men�ye d�nmesini sa�lad�m.
	dp=dd*d;
	bp=bd*b;
	lp=ld*l;
	printf("Durmus Benzin Istasyonu Takip Otomasyonu\n--------------------------------------------\n");
	printf("1.Birim fiyat goster\n2.Birim fiyat guncelle\n3.Akaryakit satisi yap\n4.Depo durumu goster\n5.Toplam satislari goster\n6.Menu goster\n7.Cikis\n");
	printf("Bir islem seciniz:");//Buras� men�y� g�sterir.
	scanf("%d",&islem);
	yuzde1=bd/10;
	yuzde2=dd/10;
    yuzde3=ld/10;
	switch(islem){//Burada switch case kullanarak sistemin kullan�c�n�n hangi i�lemi se�erse onu yapt�rmas�n� sa�lad�m.
		
		case 1://Burada her bir otogaz�n g�ncel fiyatlar� g�sterilir.
		system("COLOR 1");
			printf(">>Seciminiz:1\n\n");
			printf("---Birim Fiyat Listesi---\n");
			printf("Dizel (D)..:%.2f TL/lt\n",d);
			printf("Benzin (B).:%.2f TL/lt\n",b);
			printf("LPG (L)....:%.2f TL/lt\n\n",l);
			
			break;
			case 2://Burada her bir otogaz�n fiyat� g�ncellenir.
				system("COLOR 2");
				printf(">>Seciminiz:2\n");
				printf("---Birim Fiyat Guncelleme---\n");//�lk hangi tip otogaz olaca�� sorulur.
				printf("Akaryakit tipini seciniz(D,B,L):");
				scanf("%s",&tip);//Burada ilk �nce %c yapt�m fakat sistem bana tipini sormadan direk sona y�nlendiriyordu beni sonra %s yap�nca d�zeldi.
				switch(tip){
					case 'd':
						
						printf("Dizel Fiyat..:%.2f TL/lt\n",d);//Dizelse buraya y�nlendirilir ve g�ncel fiyat istenir
						printf("Dizel yeni fiyat giriniz:");
						scanf("%f",&d);
						printf("Degisiklik yapilmistir\n\n");
						break;
						case 'b':
							
							printf("Benzin fiyat.:%.2f TL/lt\n",b);//Benzinse buraya y�nlendirilir ve g�ncel fiyat istenir
							printf("Benzin yeni fiyat giriniz:");
							scanf("%f",&b);
							printf("Degisiklik yapilmistir\n\n");
							break;
							case 'l':
								printf("LPG fiyati:%.2f TL/lt\n",l);//LPG ise buraya y�nlendirilir ve g�ncel fiyat istenir
								printf("LPG yeni fiyat giriniz:");
								scanf("%f",&l);
								printf("Degisiklik yapilmistir\n\n");
								 break;
								 
								 default://E�er kullan�c� farkl� bi�ey girerse diye default yaparak en ba�a gitmesini sa�lad�m.
								 	printf("!!!Hatali secim\n\n");
								
				}
				           break;
				case 3:
					system("COLOR 3");
					printf(">>Seciminiz:3\n");//Burada akaryak�t sat��� ger�ekle�tirilir.
					printf("---Akaryakit satisi---\n");
					printf("Akaryakit tipini seciniz(D,B,L):");//�lk hangi tip otogaz olaca�� sorulur.
					scanf("%s",&tip);
					switch(tip){
					
					case 'd':
						printf("Ne kadarlik otogaz alacaksiniz(TL):");//Dizelse buraya y�nlendirilir.Ne kadar alaca�� sorulur.
						scanf("%d",&x);
						printf("Depoda %.2f litre %.2f TL mazot vardir Devam icin e basin:",dd,dp);
						scanf("%s",&secim);
	                        if(secim=='e'&&dd>=x/6.75){
							            dsatis=dsatis+x/6.75;
	                        dpara=dpara+x;
	                        para=para+x;
	                        dd=dd-(x/6.75);
	                        printf("Isleminiz gerceklesmisdir.\n\n");
                          }
	                        else if(secim=='e'&&dd<(x/6.75))
                          {
							printf("Depoda yeterli mazot bulunmamaktadir Isterseniz baska alternatiflere bakabilirsiniz.\n\n");}//Burada e�erki depo bo�alm��sa veya kullan�c�n�n istedi�i kadar otogaz yoksa diye ekstra else if sistemin uyar� vermesini sa�lad�m.
	                        else
	                        printf("Isleminiz iptal edilmistir.\n\n");//E�erki kullan�c� ba�ka bir de�er girerse diye buray� a�t�m.
                            
                            break;
						case 'b'://Benzinse buraya y�nlendirilir.Ne kadar alaca�� sorulur.
							printf("Ne kadarlik otogaz alacaksiniz(TL):");
						scanf("%d",&y);
							printf("Depoda %.2f litre %.2f TL benzin vardir Devam icin e basin:",bd,bp);
              scanf("%s",&secim);
              if(secim=='e'&&bd>=y/7.09){
							            bsatis=bsatis+y/7.09;
	                        bpara=bpara+y;
	                        para=para+y;//Bu i�lemler de case 5 de toplam has�lat istendi�i �in olu�turdu�um i�lemler b�ylece toplam de�erler haf�zada tutuluyor ve i�lem 5 e bast���mda neyden ne kadar satt���m� g�rebiliyorum.
	                        bd=bd-(y/7.09);
	                        printf("Isleminiz gerceklesmisdir.\n\n");}
	                        else if(bd<(y/7.09)){
							printf("Depoda yeterli benzin bulunmamaktadir Isterseniz baska alternatiflere  bakabilirsiniz.\n\n");}
	                        else
	                        printf("Isleminiz iptal edilmistir.\n\n");
                          
                          break;
							case'l':
					           printf("Ne kadarlik otogaz alacaksiniz(TL):");
						   scanf("%d",&z);
               printf("Depoda %.2f litre %.2f TL LPG vardir Devam icin e basin:",ld,lp);
						scanf("%s",&secim);
	                        if(secim=='e'&&dd>=z/4.07){
							            lsatis=lsatis+z/4.07;
	                        lpara=lpara+z;
	                        para=para+z;
	                        ld=ld-(z/4.07);
	                        printf("Isleminiz gerceklesmisdir.\n\n");}
	                        else if(ld<(z/4.07)){
							printf("Depoda yeterli LPG bulunmamaktadir Isterseniz baska alternatiflere bakabilirsiniz.\n\n");}
	                        else
	                        printf("Isleminiz iptal edilmistir.\n\n");
                          
                          break;
          }
          break;
					case 4:
						system("COLOR 4");
             printf(">>Seciminiz:4\n\n");
             
						for(a=0;a<10;a++){//Hocam buras�n� ba�aramad�m.Sadece depo full doluyken do�ru g�steriyor veya full bo�ken ama sorun �urda ��k�yor ben ilk benzin de�ilde lpg ald���mda yine benzinden gitmi� gibi g�r�n�yor onu nas�l d�zeltece�emi bulamad�m kusura bakmay�n.
							
              if(yuzde1<10&&yuzde1>0){
              for(f=0;f<6;f++)
                 printf("|");
                 for(c=0;c<6;c++)
	                printf("|");
                  for(qz=0;qz<1;qz++)
                  printf("\t");
                  }
	                if(yuzde2<10&&yuzde2>0)
                  {
				         for(qs=0;qs<6;qs++)
                 printf("|");
                 for(qd=0;qd<6;qd++)
	                printf("|");
                  for(qx=0;qx<1;qx++)
                  printf("\t");
                  }
	                if(yuzde3<10&&yuzde3>0)
                  {
					       for(qf=0;qf<6;qf++)
                 printf("|");
                 for(qg=0;qg<6;qg++)
	                printf("|");
	                for(qv=0;qv<1;qv++)
                  printf("\t");
					        }
                   if(yuzde1<20&&yuzde1>10){
                     if(a<8){
              for(d=0;d<5;d++)
                 printf("|");
                 for(e=0;e<5;e++)
				           printf("|");}
                   for(qc=0;qc<1;qc++)
                   printf("\t");
                    if(a>8){
                    for(qo=0;qo<1;qo++)
                 printf("|");
                 for(qp=0;qp<10;qp++)
                 printf("*");
                 for(qa=0;qa<1;qa++)
				           printf("|");
                   }

                   }
                   if(yuzde1<30&&yuzde1>20){
              for(h=0;h<6;h++)
                 printf("|");
                 for(j=0;j<6;j++)
				  printf("|");}
                   if(yuzde1<40&&yuzde1>30){
              for(k=0;k<6;k++)
                 printf("|");
                 for(m=0;m<6;m++)
				  printf("|");}
                   if(yuzde1<50&&yuzde1>40){
              for(n=0;n<6;n++)
                 printf("|");
                 for(o=0;o<6;o++)
				 printf("|");}
                   if(yuzde1<60&&yuzde1>50){
              for(p=0;p<6;p++)
                 printf("|");
                 for(r=0;r<6;r++)
			 printf("|");}
                   if(yuzde1<70&&yuzde1>60){
              for(s=0;s<6;s++)
                 printf("|");
                 for(q=0;q<6;q++)
				 printf("|");}
                   if(yuzde1<80&&yuzde1>70){
              for(w=0;w<6;w++)
                 printf("|");
                 for(u=0;u<6;u++)
				 printf("|");}
                   if(yuzde1<90&&yuzde1>80){
              for(i=0;i<6;i++)
                 printf("|");
                 for(v=0;v<6;v++)
				  printf("|");}
                   if(yuzde1<100&&yuzde1>90){
              for(qq=0;qq<6;qq++)
                 printf("|");
                 for(qw=0;qw<6;qw++)
					 printf("|");
                   for(qq=0;qq<6;qq++)
                 printf("|");
                 for(qw=0;qw<6;qw++)
				 printf("|");
                   for(qq=0;qq<6;qq++)
                 printf("|");
                 for(qw=0;qw<6;qw++)
					 printf("|");}
                   if(yuzde1==100){
              for(qr=0;qr<1;qr++)
                 printf("|");
                 for(qe=0;qe<10;qe++)
                 printf("*");
                 for(qt=0;qt<1;qt++)
					 printf("|\t");}
					 if(yuzde2==100){
					 
                   for(qy=0;qy<1;qy++)
                 printf("|");
                 for(qu=0;qu<10;qu++)
                 printf("*");
                 for(qi=0;qi<1;qi++)
					 printf("|\t");}
					 if(yuzde3==100){
					 
                   for(qo=0;qo<1;qo++)
                 printf("|");
                 for(qp=0;qp<10;qp++)
                 printf("*");
                 for(qa=0;qa<1;qa++)
				 printf("|");
                   }
                   
						
						printf("\n");
            
          }
					
             
						printf("\n   Benzin   \t    LPG     \t    Dizel\n");
						printf("%c%.2f dolu  \t %c%.2f dolu  \t %c%.2f dolu\n",'%',yuzde1,'%',yuzde3,'%',yuzde2);
						break; 
						case 5://Buras� toplam has�lat� g�sterir.
						system("COLOR 5");
							printf("---Toplam Satis Durumu---\n");
              printf("Benzin satilan toplam litre: %.2f\n",bsatis);
              printf("Benzinden kazanilan TL: %.2f\n",bpara);
							printf("Mazot satilan toplam litre: %.2f\n",dsatis);
							printf("Mazottan kazanilan TL: %.2f\n",dpara);
							printf("LPG satilan toplam litre: %.2f\n",lsatis);
              printf("LPGden kazan�lan TL: %.2f\n",lpara);
              printf("Kazan�lan toplam TL: %.2f\n\n",para);
							break;
							case 6:
								system("COLOR 6");
								//Buraya hi� bir �ey yazmad�m ��nk� zaten i�lem 6 men� idi kullan�c� i�lem 6 ya basarak direk men�ye geri d�n�yor.
								
								
								
								
								break;
								
								case 7://Burada da yapt���m d�ng�ye farkl� bir de�i�ken atayarak sadece buraya t�klad���nda programdan ��kabilmesini sa�lad�m.
								system("COLOR 7");
								printf("\nCikis yaptiniz Yine bekleriz Iyi gunler");
                t++;
                break;
								default :
									
		                      printf("\n!!!Hatali secim\n\n");//Burada da kullan�c� i�lemler harici bi�ey se�erse diye uyars�n istedim.
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
	
	
	
	
	
	
	
	return 0;
}
