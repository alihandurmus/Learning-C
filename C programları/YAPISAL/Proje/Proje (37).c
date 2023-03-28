/*
 */


#include <stdio.h>

int main()

	{
	int sayi;  //girlcek sayiyi tanimla
	printf("Lutfen Bir Sayi Girin :"); //sayi iste
	scanf("%d",&sayi); //sayi girdisi
	for (int a=1; a<=sayi;a++) //satirlar için döngü
{
	printf("\n\n");   
	for (int b=1;b<=a;b++) //yildizlar için döngü
	printf("*\t"); //yildiz yaz
	if (a==sayi) //ortadan sonrasi için aynı işlemin tersi
	{
	    for (int a1=1;a1<sayi;a1++)
		{
		printf("\n\n");
		for(int b1=sayi;b1>a1;b1--)
		printf("*\t");
		}
	}
}
	
	return 0;
}

