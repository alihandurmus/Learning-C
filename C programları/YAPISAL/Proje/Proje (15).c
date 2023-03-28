#include <stdio.h>
int asal(int n)	{
	int i;
	for (i = 0; i < n; i++)
	{
		if ((n % i) == 0)
		return 0;
		
		else if (n % i == 1)
		return asal(n-1);
	}
}


int main ()	{
	int n;
	printf("sayi giriniz:");
	scanf("%d",&n);
	if(asal(n) == 0)	
	{
		printf("Bu sayi asal degildir");
	}
	else
	{
		printf("Bu sayi asaldir");
	}
	return 0;
}
