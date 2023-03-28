#include<stdio.h>
int e_veya_h(const char *soru)
{
	fputs(soru,stdout);
	while(1)
	{
	   char c,cevap;
	   fputc(' ',stdout);
	   c = tolower(fgetc(stdin));	
	   cevap = c;
	   while(c!='\n' && c != EOF)//Bunu yapmazsak aşağıdaki else in içindeki metni iki kere yazıyor nedense.			
	    c = fgetc (stdin);
	   if(cevap == 'e')
	   return 1;
		else if(cevap == 'h')
		return 0;
		else 
		fputs("Lutfen sadece e veya h cevabi giriniz.",stdout);
	}
	



}
int main()
{
 char *soru = "Medeniyet Universitesi 2010 yilinda kurulmustur.Evet ise e hayir ise h giriniz.";
 
 if(e_veya_h(soru)==1)
 fputs("\nTebrikler\n",stdout);
 else
 fputs("\nAllahin mali\n",stdout);
 
 
return 0;
}
