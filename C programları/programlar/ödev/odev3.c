#include<stdio.h>
#include<Windows.h>
/*
Alihan Durmuþ
20120205028
Bu program sayýlarla üçgen yazdýrýr.
*/
int main(){
	
	int satir,x,y,z,t;//"satir" kullanýcýnýn girdiði satýr sayýsýný ifade eder.Diðer deðiþkenler ise for larýn çalýþmasý için tanýmladýðým deðiþkenler.
	printf("Kac satir olsun:");
	scanf("%d",&satir);
	
	    for(x=0;x<satir;){
	    	
	    	
	        for(y=2;y<satir-x+1;y++)//"y" yi burada ilk 1 yaptým ama farkettim ki en son satýrý yazarken ekstra bir boþluk býrakýyor o yüzden y yi 2 ye arttýrdým.
	        printf(" ");
	        for (z=1;z<satir+3-y;z++)//Burada da +3 eklememin nedeni eklemediðim zaman baþta satýr atlamasý. Bunu çözmek için de deneyerek +3 eklemem gerektiðini farkettim.
	        printf("%d",z);
	        
	        for(t=z-2;t<satir&&t>0;t--)//Burada da yaptýðým þey arttýrdýðým sayýlarý azaltarak bu sayýlarý üçgen þekline sokmak.
	           
	        printf("%d",t);
	
	
	
	printf("\n");
	
	x++;
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
