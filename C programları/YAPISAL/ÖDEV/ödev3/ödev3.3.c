/* ödev3.3.c
 * ucgen doğrulama
 */
#include <stdio.h>
int main()
{
	int a, b, c;  //kenar tanımı
	printf("Lutfen Ucgenin Ilk Kenarini Giriniz :");  //kenar iste   
	scanf("%d",&a); //kenar al
	printf("Lutfen Ucgenin Ikinci Kenarini Giriniz :");
	scanf("%d",&b);
	printf("Lutfen Ucgenin Ucuncu Kenarini Giriniz :");
	scanf("%d",&c);
	if ((a+b>c) && (a+c>b) && (c+b>a) && (a-b<c) && (a-c<b) && (b-c<a))  //koşullara göre sonuç yaz 
{
	if (a==b && a==c && b==c) //üçgenn özelliğini yaz 
	printf ("Bu Bir Eskenar Ucgen");
    else if (a==b || a==c || b==c)
	printf("Bu Bir Ikizkenar Ucgen");
	else
	printf("Bu Bir Cesitkenar Ucgen");
}
	else   //koşullar sağlanmazsa yaz
	printf("Boyle Bir Ucgen Olamaz");
    
    return 0;
}

