#include<stdio.h>
#include<Windows.h>

int main(voice){
	int qwer,satir,sayi,sayac,x,y,z,t,rakam;
	printf("||||||||||||||||||||\t||||||||         ||||||||||||||||||||\t||                  ||    |||||\n");
	printf("||                ||\t||     ||        ||                  \t ||                ||    || |||\n");
    printf("||                ||\t||      ||       ||                  \t  ||              ||    ||  |||\n");
	printf("||                ||\t||       ||      ||                  \t   ||            ||         |||\n");
	printf("||                ||\t||        ||     ||                  \t    ||          ||          |||\n");
	printf("||                ||\t||        ||     |||||||||||||||     \t     ||        ||           |||\n");
	printf("||                ||\t||        ||     ||                  \t      ||      ||            |||\n");
	printf("||                ||\t||       ||      ||                  \t       ||    ||             |||\n");
	printf("||                ||\t||      ||       ||                  \t        ||  ||              |||\n");
	printf("||||||||||||||||||||\t|||||||||        ||||||||||||||||||||\t         ||||              |||||\n");
	printf("Lutfen soru seciniz:");
	scanf("%d",&qwer);
	switch(qwer){
		
		case 1:
			/*
            Alihan Durmuþ
            20120205028
            Bu programýn amacý * ve + larla baklava dilimi yazdýrmak
            */
			


            //"satir" bu deðiþken kullanýcýnýn giriði satýr sayýsýný belirleyen deðiþkendir.
	printf("Kac satir olsun:");
	scanf("%d",&satir);
	if(satir%2==0)
	 satir=satir/2;//Bu if elselerde yapmak istediðim programý 8 forla yazýðým için kullanýcý 5 satýr girdiðinde 10 satýr yazýyordu bunu çözmek için böyle bir yola baþvurdum.
	                //ilk önce satýr sayýsýný direkt 2 ye böleyim dedim ama sayý tek olunca satýr eksikliði oluyordu o yüzden tek sayýlarda ekstradan "satir"a 1 ekledim.
	 else
	  satir=satir/2+1;
	int x,y,z,a,b,c,d,e;//Burada da 8 for için ayrý ayrý deðiþken tanýmladým.
	for(x=1;x<=satir;x++){
	
	
	
	
	   for(y=1;y<=satir-x;y++)//Burda baklava diliminin ilk kýsmýný yazar
	   printf("*");
	   
	   	for(z=1;z<=x;z++)
	   	printf("+");
	   	for(a=1;a<=x-1;a++)   //Burada 2. kýsmýný yazar
	   	printf("+");
		 for(b=1;b<=satir-x;b++)  
	   printf("*");
	    
	  
	printf("\n");
	
}
        for(a=1;a<=satir-1;a++){//Burada "satir"ý 1 eksiltmemin sebebi ekstradan yýldýz satýrý basýyordu program bunu önlemek.
	
	
	
	
	   for(b=1;b<=a;b++)        //Burada 3. kýsmýný yazar
	   printf("*");
	   
	   	for(c=1;c<=satir-a;c++)
	   	printf("+");
	   	for(d=1;d<=satir-a-1;d++)//Burada 4.kýsmýný yazar
	   	printf("+");
		 for(e=1;e<=a;e++)  
	   printf("*");
	    
	  
	printf("\n");
	
}
			
			
			break;
			case 2:
				/*
                 Alihan Durmuþ
                 20120205028
                 Bu program 100 ile 400 arasýndaki tüm rakamlarý çift olan sayýlarý bulur ve kaç tane olduðunu hesaplar.



                 */
				
				 sayac = 0; //"sayi" for 100 den 400 e kadar olan sayýlarý okumasý için tanýmladýðým deðiþken
  //"sayac" 100 ile 400 arasýndaki tüm rakamlarý çift olanlarýn sayýsýný bulmam için tanýmladýðým deðiþken

  for (sayi = 100; sayi >= 100 && sayi <= 400; sayi++) {

    if (sayi % 2 == 0) {

      if ((sayi / 10) % 2 == 0) { //Burada sayýyý her seferinde 10 a bölerek sistemin sayýynýn tüm rakamlarýna bakabilmesini saðladým.

        if ((sayi / 100) % 2 == 0) {
        	

          sayac++;
          printf("%d,", sayi);
        }
      }
    }
  }

  printf("\n100 ile 400 arasi tum rakamlari cift olanlarin sayisi %d dir", sayac);
				
				
				
				break;
				case 3:
					/*
                    Alihan Durmuþ
                    20120205028
                    Bu program sayýlarla üçgen yazdýrýr.
                    */
 
					
					//"satir" kullanýcýnýn girdiði satýr sayýsýný ifade eder.Diðer deðiþkenler ise for larýn çalýþmasý için tanýmladýðým deðiþkenler.
	printf("Kac satir olsun:");
	scanf("%d",&satir);
	
	    for(x=0;x<satir;){
	    	
	    	Sleep(100);
		
	    
	        
	        for(y=2;y<satir-x+1;y++)//"y" yi burada ilk 1 yaptým ama farkettim ki en son satýrý yazarken ekstra bir boþluk býrakýyor o yüzden y yi 2 ye arttýrdým.
	        printf(" ");
	        for (z=1;z<satir+3-y;z++)//Burada da +3 eklememin nedeni eklemediðim zaman baþta satýr atlamasý. Bunu çözmek için de deneyerek +3 eklemem gerektiðini farkettim.
	        printf("%d",z);
	        
	        for(t=z-2;t<satir&&t>0;t--)//Burada da yaptýðým þey arttýrdýðým sayýlarý azaltarak bu sayýlarý üçgen þekline sokmak.
	           
	        printf("%d",t);
	
	          
	
	printf("\n");
	
	x++;
	
	
}
					
					
					break;
					case 4:
						/*
                         Alihan Durmuþ
                         20120205028
                         Bu program kullanýcýnýn girdiði sayýyý tersten yazdýrýr.
                        */
						//"sayi" kullanýcýnýn girdiði sayýdýr.
	               //"rakam" sayýyý tersten yazdýrmak için tanýmladýðýmýz bir deðiþkendir.
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("Sayinin tersten yazilisi:");
	   while(sayi>0){
	   	
	   	rakam=sayi%10;       //Burada sayýnýn her seferinde sayýnýn son basamaðýný rakam deðiþkenine atayarak ve rakamý sýrasýyla yazdýrarak sayýyý tersten yazdýrmasýný saðladým.
	   	 printf("%d",rakam);
	   	sayi=sayi/10;
	   	
	   	}
						
						
						
						break;
						
						case 5:
							/*
                            Alihan Durmuþ
                            20120205028
                             Bu program 1/1+1/2+1/3....1/sayi toplam hesabýný yapar

                             "sayi" kullanýcýnýn girdiði sayýdýr.

                               */
							
							sayac=1;//"sayac" while'ýn çalýþmasý için tanýmladýðýmýz bir deðiþkendir.
	float toplam;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayac<=sayi){
		 
		 
		toplam=toplam+1.0/sayac;//1.0 yazmamýn sebebi sonucun int deðilde float olarak çýkabilmesini saðlamak.
		
		if(sayac==1){
		Sleep(250);
		printf("1/%d",sayac);}
		else 
		{
		Sleep(250);
		printf("+1/%d",sayac);
	}
		sayac++;
		
		
		
	}
	Sleep(1000);
	printf("\nSerinin toplami %f dir",toplam);
							
							
							
							
							
							
							break;
							
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
			}
return 0;
}
