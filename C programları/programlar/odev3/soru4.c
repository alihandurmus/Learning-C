#include<stdio.h>
#include<stdlib.h>
/*
Alihan Durmu�
20120205028
Bu program kelimelerin yerlerini de�i�tirir.
*/

char *yer_degistir(char *string,char *aranankelime,char *yenikelime)//Burada fonksyonu tan�mlad�m.
{   int q,w,e,i,j,last,checked=0;//for i�in gerekli de�i�kenleri string b�y�kl�klerini belirledi�imiz de�i�kenleri yedeklem i�lemi i�in gerekli de�i�kenleri burada tan�mlad�m.
    for(q=0;string[q]!='\0';q++){//Buarada kullan�c�n�n g�nderdi�i stringlerin b�y�kl�klerini de�i�kenlere aktard�m
    	}
	for(w=0;aranankelime[w]!='\0';w++){
		}
	for(e=0;yenikelime[e]!='\0';e++){
		}
		
		
		for (i = 0; string[i] != '\0'; i++) {//Burada okula kelimesini yazd�r�rken gelin �st�ne yazd�r�yordu onun i�in geli tekrar yazmak i�in yedekleme i�lemini ger�ekle�tirdim

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
	
    char *temp1 = (char *) malloc ((q+e+1-w)* sizeof(char));//Burada malloc ile de�i�tirdi�imiz dizinin kopyas�n� yazd�rd���m�z dizinin yerini ay�rd�m.
     
     int x = 0;
    
	int t;
	

	for(;x<q+e-w;x++)//Burada forla b�t�n dizinin karakterlerini teker teker okuyup atamas�n� yapt�m.
	{  
	   t = 0;
	   for(;t<w;t++)//Burada kelime kelime bakmas� i�in ikinci for a�t�m.
	   { 
	   if(string[x]!=aranankelime[t])//E�it olmad���nda aynen kopyal�yacak.
		{
			temp1[x] = string[x];
			x++;
			
			
		}
	   }
	   if(string[x]==' ')//Bo�lu�a gelirse e�er bo�lu�u direkt yazd�racak.
	   { 
	    t = 0;
	   	temp1[x] = string[x];
	   	x++;
	   }
	   for(;t<e;t++)//Burada arad���m�z kelimeye e�it olunca arad���m�z kelime yerine yeni kelimeyi atayan bir if kulland�m.
	   {
	   if(string[x] == aranankelime[t]||string[x]!= aranankelime[t])
		{   
			temp1[x] = yenikelime[t];
			x++;
			
			
		}
		
       }
       
       for(;x < q+e-w;x++){
       	temp1[x] = string[last+1];//Burada okula yazd�r�nca gelin �st�ne yazd�rd��� i�in gel kelimesi siliniyordu do�al olarak geli tekrar yazd�ram�yodum o y�zden as�l stringin indeksini yukar�da son kelimeyi g�sterecek �ekilde ayarlay�p kopyalama i�lemi yapt�m.
       	last++;
	   }
       
       
	   
       
	}
	for(x=0;temp1[x]!='\0';x++)//Burada yen dizimizi yazd�rd�m.
	printf("%c",temp1[x]);
		
	}
	
	
	
	  

int main()
{
	
	
	
	
	
	yer_degistir("Ali eve gel","eve","okula");//Burada fonksiyonu �a��rd�m.
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
