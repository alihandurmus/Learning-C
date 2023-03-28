#include<stdio.h>
#include<Windows.h>

int main(voice){
	system("COLOR 1");
	int qwer,satir,sayi,sayac,x,y,z,t,rakam,qwert;
	printf("  ||||||||||||||||  \t||||||||         ||||||||||||||||||||\t||                  ||    |||||\n");
	Sleep(100);
	printf(" ||              || \t||      ||       ||                  \t  ||              ||    ||  |||\n");
	Sleep(100);
	printf("||                ||\t||       ||      ||                  \t   ||            ||         |||\n");
	Sleep(100);
	printf("||                ||\t||        ||     ||                  \t    ||          ||          |||\n");
	Sleep(100);
	printf("||                ||\t||        ||     |||||||||||||||     \t     ||        ||           |||\n");
	Sleep(100);
	printf("||                ||\t||        ||     ||                  \t      ||      ||            |||\n");
	Sleep(100);
	printf("||                ||\t||       ||      ||                  \t       ||    ||             |||\n");
	Sleep(100);
	printf(" ||              || \t||      ||       ||                  \t        ||  ||              |||\n");
	Sleep(100);
	printf("  ||||||||||||||||  \t|||||||||        ||||||||||||||||||||\t         ||||              |||||\n");
	Sleep(100);
	for(qwert=0;qwert==0;){
		printf("\n\nCikmak icin 6 ya basabilirsiniz.\n");
	printf("Lutfen soru seciniz:");
	scanf("%d",&qwer);

	switch(qwer){
		
		case 1:
			/*
            Alihan Durmuş
            20120205028
            Bu programın amacı * ve + larla baklava dilimi yazdırmak
            */
			


            //"satir" bu değişken kullanıcının giriği satır sayısını belirleyen değişkendir.
	printf("Kac satir olsun:");
	scanf("%d",&satir);
	if(satir%2==0)
	 satir=satir/2;//Bu if elselerde yapmak istediğim programı 8 forla yazığım için kullanıcı 5 satır girdiğinde 10 satır yazıyordu bunu çözmek için böyle bir yola başvurdum.
	                //ilk önce satır sayısını direkt 2 ye böleyim dedim ama sayı tek olunca satır eksikliği oluyordu o yüzden tek sayılarda ekstradan "satir"a 1 ekledim.
	 else
	  satir=satir/2+1;
	int x,y,z,a,b,c,d,e;//Burada da 8 for için ayrı ayrı değişken tanımladım.
	for(x=1;x<=satir;x++){
	
	
	
	
	   for(y=1;y<=satir-x;y++)//Burda baklava diliminin ilk kısmını yazar
	   printf("*");
	   
	   	for(z=1;z<=x;z++)
	   	printf("+");
	   	for(a=1;a<=x-1;a++)   //Burada 2. kısmını yazar
	   	printf("+");
		 for(b=1;b<=satir-x;b++)  
	   printf("*");
	    
	  
	printf("\n");
	
}
        for(a=1;a<=satir-1;a++){//Burada "satir"ı 1 eksiltmemin sebebi ekstradan yıldız satırı basıyordu program bunu önlemek.
	
	
	
	
	   for(b=1;b<=a;b++)        //Burada 3. kısmını yazar
	   printf("*");
	   
	   	for(c=1;c<=satir-a;c++)
	   	printf("+");
	   	for(d=1;d<=satir-a-1;d++)//Burada 4.kısmını yazar
	   	printf("+");
		 for(e=1;e<=a;e++)  
	   printf("*");
	    
	  
	printf("\n");
	
}
			
			
			break;
			case 2:
				/*
                 Alihan Durmuş
                 20120205028
                 Bu program 100 ile 400 arasındaki tüm rakamları çift olan sayıları bulur ve kaç tane olduğunu hesaplar.



                 */
				
				 sayac = 0; //"sayi" for 100 den 400 e kadar olan sayıları okuması için tanımladığım değişken
  //"sayac" 100 ile 400 arasındaki tüm rakamları çift olanların sayısını bulmam için tanımladığım değişken

  for (sayi = 100; sayi >= 100 && sayi <= 400; sayi++) {

    if (sayi % 2 == 0) {

      if ((sayi / 10) % 2 == 0) { //Burada sayıyı her seferinde 10 a bölerek sistemin sayıynın tüm rakamlarına bakabilmesini sağladım.

        if ((sayi / 100) % 2 == 0) {
        	

          sayac++;
          printf("%d,", sayi);
        }
      }
    }
  }

  printf("\n100 ile 400 arasi tum rakamlari cift olanlarin sayisi %d dir\n", sayac);
				
				
				
				break;
				case 3:
					/*
                    Alihan Durmuş
                    20120205028
                    Bu program sayılarla üçgen yazdırır.
                    */
 
					
					//"satir" kullanıcının girdiği satır sayısını ifade eder.Diğer değişkenler ise for ların çalışması için tanımladığım değişkenler.
	printf("Kac satir olsun:");
	scanf("%d",&satir);
	
	    for(x=0;x<satir;){
	    	
	    	Sleep(100);
		
	    
	        
	        for(y=2;y<satir-x+1;y++)//"y" yi burada ilk 1 yaptım ama farkettim ki en son satırı yazarken ekstra bir boşluk bırakıyor o yüzden y yi 2 ye arttırdım.
	        printf(" ");
	        for (z=1;z<satir+3-y;z++)//Burada da +3 eklememin nedeni eklemediğim zaman başta satır atlaması. Bunu çözmek için de deneyerek +3 eklemem gerektiğini farkettim.
	        printf("%d",z);
	        
	        for(t=z-2;t<satir&&t>0;t--)//Burada da yaptığım şey arttırdığım sayıları azaltarak bu sayıları üçgen şekline sokmak.
	           
	        printf("%d",t);
	
	          
	
	printf("\n");
	
	x++;
	
	
}
					
					
					break;
					case 4:
						/*
                         Alihan Durmuş
                         20120205028
                         Bu program kullanıcının girdiği sayıyı tersten yazdırır.
                        */
						//"sayi" kullanıcının girdiği sayıdır.
	               //"rakam" sayıyı tersten yazdırmak için tanımladığımız bir değişkendir.
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("Sayinin tersten yazilisi:");
	   while(sayi>0){
	   	
	   	rakam=sayi%10;       //Burada sayının her seferinde sayının son basamağını rakam değişkenine atayarak ve rakamı sırasıyla yazdırarak sayıyı tersten yazdırmasını sağladım.
	   	 printf("%d",rakam);
	   	sayi=sayi/10;
	   	
	   	}
						
						
						
						break;
						
						case 5:
							/*
                            Alihan Durmuş
                            20120205028
                             Bu program 1/1+1/2+1/3....1/sayi toplam hesabını yapar

                             "sayi" kullanıcının girdiği sayıdır.

                               */
							
							sayac=1;//"sayac" while'ın çalışması için tanımladığımız bir değişkendir.
	float toplam;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayac<=sayi){
		 
		 
		toplam=toplam+1.0/sayac;//1.0 yazmamın sebebi sonucun int değilde float olarak çıkabilmesini sağlamak.
		
		if(sayac==1){
		Sleep(50);
		printf("1/%d",sayac);}
		else 
		{
		Sleep(50);
		printf("+1/%d",sayac);
	}
		sayac++;
		
		
		
	}
	Sleep(1000);
	printf("\nSerinin toplami %f dir",toplam);
							
							
							
							
							
							
							break;
							
		                 case 6:
		
		            printf("Odeve baktiginiz icin tesekkurler.\nYapan:Alihan Durmus.");
		            qwert++;
		
		
		
		
		
		
		
		
		
		
		
			
		}
	}
return 0;
}
