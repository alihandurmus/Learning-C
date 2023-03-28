#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int x[10] = {0,-5,10,-10,30,-20,25,5,0,20};
  int y[10] = {10,10,20,0,5,-20,0,5,30,0};
  float distance[10];
  
  int xcentral , ycentral,xpoint,ypoint;
  float max;
  printf("Enter x and y coordinate of central point : ");
  scanf("%d",&xcentral);
  scanf("%d",&ycentral);
  for(int i = 0;i<10;i++){
	  
	  distance[i] = sqrt(pow(xcentral-x[i],2)+pow(ycentral-y[i],2));
	  
  }
  for(int i = 0;i<10;i++){
	  if(distance[i]>max){
	  max = distance[i];
	  xpoint = x[i];
	  ypoint = y[i];
  }
	  
	  }
	  printf("Farthest distance from central point is : %f\n",max);
	  printf("Farthest point (x,y) is : (%d , %d)",xpoint,ypoint);
  
  
  
  return 0;
}
