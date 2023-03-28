#include<stdio.h>
void swap(char *p[],int i,int j)
{
  char *temp=p[i];
  p[i] = p[j];
  p[j] = temp;




}

int main()
{

     char *arr[] = {"Alihan","Ahmet","Mehmet","Mustafa"};
     
     swap(arr,2,3);
     
     for(int x=0;x<4;x++)
     printf("%s ",arr[x]);

    























return 0;


}

