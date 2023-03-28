  
  #include<iostream>
  using namespace std;
  
  
  class Personel
  {
  	int    id;
  	string isim;
  	string soyisim;
  	int    maas;
  	
  	public Personel(int aid,string aisim,string asoyisim,int amaas)
	  {
  		id = aid;
  		isim = aisim;
  		soyisim = asoyisim;
  		maas = amaas;
	  }
  	
  	 
  }
  int main(){
  	
  	Personel personel1 = new Personel(190704013,"Mehmet Tunahan","Degirmenci",50.000);  	
  	Personel personel2 = new Personel(190720201,"Alihan","Durmus",51.000);
    Personel personel3 = new Personel(190720018,"Muhammed Enes","Diler",10.000);
	 
  	
  }
