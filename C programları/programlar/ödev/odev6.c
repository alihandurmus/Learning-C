#include<stdio.h>
int main(){
	int a,c,e,f,g,h,j,k,m,n,o,p,r,s,q,w,u,v,qq,qw,qr,i,qt,qe,qa,qy,qu,qi,qo,qg,qp,qs,qd,qf,qh,qj,qk,qz,qx,qc,qv;//Burada çok fazla for yaptýðým için bi okadar da deðiþken atamak zorunda kaldým.
	int islem,x,y,z,t;//Bu deðiþkenler kullanýcýnýn ne kadar otogaz alacaðýný belirtmek için kullanýldý
	float d=6.75,b=7.09,l=4.07;//Bu deðiþkenler dizel benzin lpg fiyatlarýný gösterir
	char tip,secim;//Bu deðiþkenler switch caselerdeki benzinmi lpgmi yoksa dizel üzerinden mi iþlem yapacaðýný seçmek için oluþturuldu.
	float dd=1000,bd=1000,ld=1000;//Bunlar depoda kaç litre otogaz olduðunu gösteren deðiþkenler.
	float para=0,bsatis=0,bpara=0,dsatis=0,dpara=0,lsatis=0,lpara=0,dp,bp,lp,yuzde1,yuzde2,yuzde3;//Burada 5.seçimdeki snuçlar için oluþturduðum deðiþkenler.Ayrýca 4.casedeki yüzdeleri göstermek için oluþturduðum deðiþkenler de var.
	//Hocam valla çok uðraþtým ama þu benzin þeklini bi çýkaramadým.Artýk çok da sýkýldým zaman da tükendi.Olduðu kadar teslim ediyorum hocam.
    system("COLOR 6");//Burada beyaz artýk sade gelmeye baþladýðý için böyle biþey yapayým dedim.
	for(t=0;t==0;){//Burada döngü oluþturarak kullanýcýnýn iþlemini bitirdiðinde her seferinde menüye dönmesini saðladým.
	dp=dd*d;
	bp=bd*b;
	lp=ld*l;
	printf("Durmus Benzin Istasyonu Takip Otomasyonu\n--------------------------------------------\n");
	printf("1.Birim fiyat goster\n2.Birim fiyat guncelle\n3.Akaryakit satisi yap\n4.Depo durumu goster\n5.Toplam satislari goster\n6.Menu goster\n7.Cikis\n");
	printf("Bir islem seciniz:");//Burasý menüyü gösterir.
	scanf("%d",&islem);
	yuzde1=bd/10;
	yuzde2=dd/10;
    yuzde3=ld/10;
	switch(islem){//Burada switch case kullanarak sistemin kullanýcýnýn hangi iþlemi seçerse onu yaptýrmasýný saðladým.
		
		case 1://Burada her bir otogazýn güncel fiyatlarý gösterilir.
		system("COLOR 1");
			printf(">>Seciminiz:1\n\n");
			printf("---Birim Fiyat Listesi---\n");
			printf("Dizel (D)..:%.2f TL/lt\n",d);
			printf("Benzin (B).:%.2f TL/lt\n",b);
			printf("LPG (L)....:%.2f TL/lt\n\n",l);
			
			break;
			case 2://Burada her bir otogazýn fiyatý güncellenir.
				system("COLOR 2");
				printf(">>Seciminiz:2\n");
				printf("---Birim Fiyat Guncelleme---\n");//Ýlk hangi tip otogaz olacaðý sorulur.
				printf("Akaryakit tipini seciniz(D,B,L):");
				scanf("%s",&tip);//Burada ilk önce %c yaptým fakat sistem bana tipini sormadan direk sona yönlendiriyordu beni sonra %s yapýnca düzeldi.
				switch(tip){
					case 'd':
						
						printf("Dizel Fiyat..:%.2f TL/lt\n",d);//Dizelse buraya yönlendirilir ve güncel fiyat istenir
						printf("Dizel yeni fiyat giriniz:");
						scanf("%f",&d);
						printf("Degisiklik yapilmistir\n\n");
						break;
						case 'b':
							
							printf("Benzin fiyat.:%.2f TL/lt\n",b);//Benzinse buraya yönlendirilir ve güncel fiyat istenir
							printf("Benzin yeni fiyat giriniz:");
							scanf("%f",&b);
							printf("Degisiklik yapilmistir\n\n");
							break;
							case 'l':
								printf("LPG fiyati:%.2f TL/lt\n",l);//LPG ise buraya yönlendirilir ve güncel fiyat istenir
								printf("LPG yeni fiyat giriniz:");
								scanf("%f",&l);
								printf("Degisiklik yapilmistir\n\n");
								 break;
								 
								 default://Eðer kullanýcý farklý biþey girerse diye default yaparak en baþa gitmesini saðladým.
								 	printf("!!!Hatali secim\n\n");
								
				}
				           break;
				case 3:
					system("COLOR 3");
					printf(">>Seciminiz:3\n");//Burada akaryakýt satýþý gerçekleþtirilir.
					printf("---Akaryakit satisi---\n");
					printf("Akaryakit tipini seciniz(D,B,L):");//Ýlk hangi tip otogaz olacaðý sorulur.
					scanf("%s",&tip);
					switch(tip){
					
					case 'd':
						printf("Ne kadarlik otogaz alacaksiniz(TL):");//Dizelse buraya yönlendirilir.Ne kadar alacaðý sorulur.
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
							printf("Depoda yeterli mazot bulunmamaktadir Isterseniz baska alternatiflere bakabilirsiniz.\n\n");}//Burada eðerki depo boþalmýþsa veya kullanýcýnýn istediði kadar otogaz yoksa diye ekstra else if sistemin uyarý vermesini saðladým.
	                        else
	                        printf("Isleminiz iptal edilmistir.\n\n");//Eðerki kullanýcý baþka bir deðer girerse diye burayý açtým.
                            
                            break;
						case 'b'://Benzinse buraya yönlendirilir.Ne kadar alacaðý sorulur.
							printf("Ne kadarlik otogaz alacaksiniz(TL):");
						scanf("%d",&y);
							printf("Depoda %.2f litre %.2f TL benzin vardir Devam icin e basin:",bd,bp);
              scanf("%s",&secim);
              if(secim=='e'&&bd>=y/7.09){
							            bsatis=bsatis+y/7.09;
	                        bpara=bpara+y;
	                        para=para+y;//Bu iþlemler de case 5 de toplam hasýlat istendiði çin oluþturduðum iþlemler böylece toplam deðerler hafýzada tutuluyor ve iþlem 5 e bastýðýmda neyden ne kadar sattýðýmý görebiliyorum.
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
             
						for(a=0;a<10;a++){//Hocam burasýný baþaramadým.Sadece depo full doluyken doðru gösteriyor veya full boþken ama sorun þurda çýkýyor ben ilk benzin deðilde lpg aldýðýmda yine benzinden gitmiþ gibi görünüyor onu nasýl düzelteceðemi bulamadým kusura bakmayýn.
							
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
						case 5://Burasý toplam hasýlatý gösterir.
						system("COLOR 5");
							printf("---Toplam Satis Durumu---\n");
              printf("Benzin satilan toplam litre: %.2f\n",bsatis);
              printf("Benzinden kazanilan TL: %.2f\n",bpara);
							printf("Mazot satilan toplam litre: %.2f\n",dsatis);
							printf("Mazottan kazanilan TL: %.2f\n",dpara);
							printf("LPG satilan toplam litre: %.2f\n",lsatis);
              printf("LPGden kazanýlan TL: %.2f\n",lpara);
              printf("Kazanýlan toplam TL: %.2f\n\n",para);
							break;
							case 6:
								system("COLOR 6");
								//Buraya hiç bir þey yazmadým çünkü zaten iþlem 6 menü idi kullanýcý iþlem 6 ya basarak direk menüye geri dönüyor.
								
								
								
								
								break;
								
								case 7://Burada da yaptýðým döngüye farklý bir deðiþken atayarak sadece buraya týkladýðýnda programdan çýkabilmesini saðladým.
								system("COLOR 7");
								printf("\nCikis yaptiniz Yine bekleriz Iyi gunler");
                t++;
                break;
								default :
									
		                      printf("\n!!!Hatali secim\n\n");//Burada da kullanýcý iþlemler harici biþey seçerse diye uyarsýn istedim.
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
	
	
	
	
	
	
	
	return 0;
}
