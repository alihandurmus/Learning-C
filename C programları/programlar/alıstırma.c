#include<stdio.h>
#include<string.h>

int main()
{   int a,b;
printf("satir sayisini giriniz:");
scanf("%d",&a);
printf("sütun sayisini giriniz:");
scanf("%d",&b);

 int matris[a][b];
 for(int x=0;x<a;x++)
 {   
	 
	 for(int y=0;y<b;y++)
     {   
		 printf("matris[%d][%d]=",x,y);
	     scanf("%d",&matris[x][y]);
     }
     
 }



 int matris1[a][b];
 for(int x=0;x<a;x++)
 {   
	 
	 for(int y=0;y<b;y++)
     {   
		 printf("matris1[%d][%d]=",x,y);
	     scanf("%d",&matris1[x][y]);
     }
     
 }
 
int matris2[a][b];
 for(int x=0;x<a;x++)
 {   
	 
	 for(int y=0;y<b;y++)
     {   
		 matris2[x][y]=matris[x][y]+matris1[x][y];
     }
     
 }
printf("Matrislerin toplami:\n");
for(int x=0;x<a;x++)
 {   
	 for(int y = 0;y<b;y++)
     {   
		 printf("%d ",matris2[x][y]);
     }
     printf("\n");
 }






return 0;


}
