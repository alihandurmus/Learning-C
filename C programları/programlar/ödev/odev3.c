#include<stdio.h>
#include<Windows.h>
/*
Alihan Durmu�
20120205028
Bu program say�larla ��gen yazd�r�r.
*/
int main(){
	
	int satir,x,y,z,t;//"satir" kullan�c�n�n girdi�i sat�r say�s�n� ifade eder.Di�er de�i�kenler ise for lar�n �al��mas� i�in tan�mlad���m de�i�kenler.
	printf("Kac satir olsun:");
	scanf("%d",&satir);
	
	    for(x=0;x<satir;){
	    	
	    	
	        for(y=2;y<satir-x+1;y++)//"y" yi burada ilk 1 yapt�m ama farkettim ki en son sat�r� yazarken ekstra bir bo�luk b�rak�yor o y�zden y yi 2 ye artt�rd�m.
	        printf(" ");
	        for (z=1;z<satir+3-y;z++)//Burada da +3 eklememin nedeni eklemedi�im zaman ba�ta sat�r atlamas�. Bunu ��zmek i�in de deneyerek +3 eklemem gerekti�ini farkettim.
	        printf("%d",z);
	        
	        for(t=z-2;t<satir&&t>0;t--)//Burada da yapt���m �ey artt�rd���m say�lar� azaltarak bu say�lar� ��gen �ekline sokmak.
	           
	        printf("%d",t);
	
	
	
	printf("\n");
	
	x++;
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
