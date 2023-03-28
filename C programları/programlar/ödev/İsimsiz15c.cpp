#include <math.h>
#include <stdio.h>

float cikar(int x1,int x2,int y1,int y2){
    
    float kesir1,kesir2,cikar;
    kesir1=x1/x2;
    kesir2=y1/y2;
    
    cikar=kesir1-kesir2;
    
    return cikar;
}
float bol(int x1,int x2,int y1,int y2){
	
	float kesir1,kesir2,bol;
	
	kesir1=x1/x2;
    kesir2=y1/y2;
	
	bol=kesir1/kesir2;
	
	return bol;
}
float ondalik_goster(int x1,int y1){
	
	float kesir1,ondalik_goster;
	
	kesir1=x1/y1;
    
    
    ondalik_goster=kesir1;
	
	
	return ondalik_goster;
}
void ekrana_bas(int x1,int y1)
{
	
	float ekrana_bas;
	ekrana_bas=x1/y1;
	printf("%f",ekrana_bas);
	
	
}

int main() {
    
    int x;
    float x1,x2,y1,y2;
    scanf("%f",&x1);
    scanf("%f",&y1);
    scanf("%f",&x2);
    scanf("%f",&y2);
    
    
    
    printf("1-Kesirleri çıkarmak için 1'e \n 2-Kesirleri bölmek için 2'ye \n 3- Kesir değerini ondalık göstermek için 3'e \n 4- Kesri ekrana basmak için 4'e basınız\n");
    scanf("%d",&x);
     switch(x){
         
         case 1:
          
          printf("%f",cikar(x1,x2,y1,y2));
          
         break;
         case 2:
         	
         	printf("%f",bol(x1,x2,y1,y2));
         	 break;
         	case 3:
         		
         		printf("%f",ondalik_goster(x1,y1));
         		 break;
         		case 4:
         			ekrana_bas(x1,y1);
                      break;
                   default :
                   	
                   	
                   	printf("error");
         
          break;
         
         
         
         
         
         
         
         
         
         
         
         
     }
    
    
    return 0;
}
