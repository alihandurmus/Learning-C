#include<stdio.h>
#include<stdlib.h>
/*
Alihan Durmuþ
20120205028
Bu program kelimelerin yerlerini deðiþtirir.
*/

char *yer_degistir(char *string,char *aranankelime,char *yenikelime)//Burada fonksyonu tanýmladým.
{   int q,w,e,i,j,last,checked=0;//for için gerekli deðiþkenleri string büyüklüklerini belirlediðimiz deðiþkenleri yedeklem iþlemi için gerekli deðiþkenleri burada tanýmladým.
    for(q=0;string[q]!='\0';q++){//Buarada kullanýcýnýn gönderdiði stringlerin büyüklüklerini deðiþkenlere aktardým
    	}
	for(w=0;aranankelime[w]!='\0';w++){
		}
	for(e=0;yenikelime[e]!='\0';e++){
		}
		
		
		for (i = 0; string[i] != '\0'; i++) {//Burada okula kelimesini yazdýrýrken gelin üstüne yazdýrýyordu onun için geli tekrar yazmak için yedekleme iþlemini gerçekleþtirdim

		checked = 0;
		for (j = 0; j < w; j++) {

			if (aranankelime[j] == string[i]) {
				last = i;
				i++;
				checked++;
				

			}

		}
		if (checked == w)
			break;
	}
	
    char *temp1 = (char *) malloc ((q+e+1-w)* sizeof(char));//Burada malloc ile deðiþtirdiðimiz dizinin kopyasýný yazdýrdýðýmýz dizinin yerini ayýrdým.
     
     int x = 0;
    
	int t;
	

	for(;x<q+e-w;x++)//Burada forla bütün dizinin karakterlerini teker teker okuyup atamasýný yaptým.
	{  
	   t = 0;
	   for(;t<w;t++)//Burada kelime kelime bakmasý için ikinci for açtým.
	   { 
	   if(string[x]!=aranankelime[t])//Eþit olmadýðýnda aynen kopyalýyacak.
		{
			temp1[x] = string[x];
			x++;
			
			
		}
	   }
	   if(string[x]==' ')//Boþluða gelirse eðer boþluðu direkt yazdýracak.
	   { 
	    t = 0;
	   	temp1[x] = string[x];
	   	x++;
	   }
	   for(;t<e;t++)//Burada aradýðýmýz kelimeye eþit olunca aradýðýmýz kelime yerine yeni kelimeyi atayan bir if kullandým.
	   {
	   if(string[x] == aranankelime[t]||string[x]!= aranankelime[t])
		{   
			temp1[x] = yenikelime[t];
			x++;
			
			
		}
		
       }
       
       for(;x < q+e-w;x++){
       	temp1[x] = string[last+1];//Burada okula yazdýrýnca gelin üstüne yazdýrdýðý için gel kelimesi siliniyordu doðal olarak geli tekrar yazdýramýyodum o yüzden asýl stringin indeksini yukarýda son kelimeyi gösterecek þekilde ayarlayýp kopyalama iþlemi yaptým.
       	last++;
	   }
       
       
	   
       
	}
	for(x=0;temp1[x]!='\0';x++)//Burada yen dizimizi yazdýrdým.
	printf("%c",temp1[x]);
		
	}
	
	
	
	  

int main()
{
	
	
	
	
	
	yer_degistir("Ali eve gel","eve","okula");//Burada fonksiyonu çaðýrdým.
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
