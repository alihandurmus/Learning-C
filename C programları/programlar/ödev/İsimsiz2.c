#include<stdio.h>
#include<Windows.h>

int main(voice){
	system("COLOR 1");
	int qwer,satir,sayi,sayac,x,y,z,t,rakam,qwert;
	printf("  ||||||||||||||||  \t||||||||         ||||||||||||||||||||\t||                  ||    |||||\n");
	printf(" ||              || \t||      ||       ||                  \t  ||              ||    ||  |||\n");
	printf("||                ||\t||       ||      ||                  \t   ||            ||         |||\n");
	printf("||                ||\t||        ||     ||                  \t    ||          ||          |||\n");
	printf("||                ||\t||        ||     |||||||||||||||     \t     ||        ||           |||\n");
	printf("||                ||\t||        ||     ||                  \t      ||      ||            |||\n");
	printf("||                ||\t||       ||      ||                  \t       ||    ||             |||\n");
	printf(" ||              || \t||      ||       ||                  \t        ||  ||              |||\n");
	printf("  ||||||||||||||||  \t|||||||||        ||||||||||||||||||||\t         ||||              |||||\n");
	for(qwert=0;qwert==0;){
		printf("\n\nCikmak icin 6 ya basabilirsiniz.\n");
	printf("Lutfen soru seciniz:");
	scanf("%d",&qwer);

	switch(qwer){
		
		case 1:
			/*
            Alihan Durmu�
            20120205028
            Bu program�n amac� * ve + larla baklava dilimi yazd�rmak
            */
			


            //"satir" bu de�i�ken kullan�c�n�n giri�i sat�r say�s�n� belirleyen de�i�kendir.
	printf("Kac satir olsun:");
	scanf("%d",&satir);
	if(satir%2==0)
	 satir=satir/2;//Bu if elselerde yapmak istedi�im program� 8 forla yaz���m i�in kullan�c� 5 sat�r girdi�inde 10 sat�r yaz�yordu bunu ��zmek i�in b�yle bir yola ba�vurdum.
	                //ilk �nce sat�r say�s�n� direkt 2 ye b�leyim dedim ama say� tek olunca sat�r eksikli�i oluyordu o y�zden tek say�larda ekstradan "satir"a 1 ekledim.
	 else
	  satir=satir/2+1;
	int x,y,z,a,b,c,d,e;//Burada da 8 for i�in ayr� ayr� de�i�ken tan�mlad�m.
	for(x=1;x<=satir;x++){
	
	
	
	
	   for(y=1;y<=satir-x;y++)//Burda baklava diliminin ilk k�sm�n� yazar
	   printf("*");
	   
	   	for(z=1;z<=x;z++)
	   	printf("+");
	   	for(a=1;a<=x-1;a++)   //Burada 2. k�sm�n� yazar
	   	printf("+");
		 for(b=1;b<=satir-x;b++)  
	   printf("*");
	    
	  
	printf("\n");
	
}
        for(a=1;a<=satir-1;a++){//Burada "satir"� 1 eksiltmemin sebebi ekstradan y�ld�z sat�r� bas�yordu program bunu �nlemek.
	
	
	
	
	   for(b=1;b<=a;b++)        //Burada 3. k�sm�n� yazar
	   printf("*");
	   
	   	for(c=1;c<=satir-a;c++)
	   	printf("+");
	   	for(d=1;d<=satir-a-1;d++)//Burada 4.k�sm�n� yazar
	   	printf("+");
		 for(e=1;e<=a;e++)  
	   printf("*");
	    
	  
	printf("\n");
	
}
			
			
			break;
			case 2:
				/*
                 Alihan Durmu�
                 20120205028
                 Bu program 100 ile 400 aras�ndaki t�m rakamlar� �ift olan say�lar� bulur ve ka� tane oldu�unu hesaplar.



                 */
				
				 sayac = 0; //"sayi" for 100 den 400 e kadar olan say�lar� okumas� i�in tan�mlad���m de�i�ken
  //"sayac" 100 ile 400 aras�ndaki t�m rakamlar� �ift olanlar�n say�s�n� bulmam i�in tan�mlad���m de�i�ken

  for (sayi = 100; sayi >= 100 && sayi <= 400; sayi++) {

    if (sayi % 2 == 0) {

      if ((sayi / 10) % 2 == 0) { //Burada say�y� her seferinde 10 a b�lerek sistemin say�yn�n t�m rakamlar�na bakabilmesini sa�lad�m.

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
                    Alihan Durmu�
                    20120205028
                    Bu program say�larla ��gen yazd�r�r.
                    */
 
					
					//"satir" kullan�c�n�n girdi�i sat�r say�s�n� ifade eder.Di�er de�i�kenler ise for lar�n �al��mas� i�in tan�mlad���m de�i�kenler.
	printf("Kac satir olsun:");
	scanf("%d",&satir);
	
	    for(x=0;x<satir;){
	    	
	    	Sleep(100);
		
	    
	        
	        for(y=2;y<satir-x+1;y++)//"y" yi burada ilk 1 yapt�m ama farkettim ki en son sat�r� yazarken ekstra bir bo�luk b�rak�yor o y�zden y yi 2 ye artt�rd�m.
	        printf(" ");
	        for (z=1;z<satir+3-y;z++)//Burada da +3 eklememin nedeni eklemedi�im zaman ba�ta sat�r atlamas�. Bunu ��zmek i�in de deneyerek +3 eklemem gerekti�ini farkettim.
	        printf("%d",z);
	        
	        for(t=z-2;t<satir&&t>0;t--)//Burada da yapt���m �ey artt�rd���m say�lar� azaltarak bu say�lar� ��gen �ekline sokmak.
	           
	        printf("%d",t);
	
	          
	
	printf("\n");
	
	x++;
	
	
}
					
					
					break;
					case 4:
						/*
                         Alihan Durmu�
                         20120205028
                         Bu program kullan�c�n�n girdi�i say�y� tersten yazd�r�r.
                        */
						//"sayi" kullan�c�n�n girdi�i say�d�r.
	               //"rakam" say�y� tersten yazd�rmak i�in tan�mlad���m�z bir de�i�kendir.
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("Sayinin tersten yazilisi:");
	   while(sayi>0){
	   	
	   	rakam=sayi%10;       //Burada say�n�n her seferinde say�n�n son basama��n� rakam de�i�kenine atayarak ve rakam� s�ras�yla yazd�rarak say�y� tersten yazd�rmas�n� sa�lad�m.
	   	 printf("%d",rakam);
	   	sayi=sayi/10;
	   	
	   	}
						
						
						
						break;
						
						case 5:
							/*
                            Alihan Durmu�
                            20120205028
                             Bu program 1/1+1/2+1/3....1/sayi toplam hesab�n� yapar

                             "sayi" kullan�c�n�n girdi�i say�d�r.

                               */
							
							sayac=1;//"sayac" while'�n �al��mas� i�in tan�mlad���m�z bir de�i�kendir.
	float toplam;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayac<=sayi){
		 
		 
		toplam=toplam+1.0/sayac;//1.0 yazmam�n sebebi sonucun int de�ilde float olarak ��kabilmesini sa�lamak.
		
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
