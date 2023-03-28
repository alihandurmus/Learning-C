#include<stdio.h>

int maxibul(int *a,int uzunluk)
{
	int max=a[0];
	int i;
	
	for(i=0;i<uzunluk;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}

int main()
{   int dizi[]={1,8,45,76,25};
    int max;
    
    max = maxibul(dizi,5);
    printf("Bu dizinin en buyuk elemani = %d",max);
    
    
      return 0;
}
