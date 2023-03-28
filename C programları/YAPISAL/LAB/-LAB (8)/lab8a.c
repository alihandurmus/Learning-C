/*lab8a.c
 * Enes Diler
 * Asal Sayi Bulma
 */

#include <stdio.h>
 


int asal(int sayi, int a)   //fonk tanımlama (a yi sayinin yarisina gitmek için verdim)
{
    if (a == 1)  //yarisi birse ikidir yani asal
        return 1;
    else
{
       if (sayi % a == 0)  //yarisi bir tam değer ise asal değildir 
       
         return 0;
       
       else
       
         return asal(sayi, a - 1);   //değilse diğer değerler için devam et
}
}
int main()
{
    int sayi, x;  //x return değeri için 
    printf("Kontrol Etmek Istediginiz Sayiyi Girin: ");
    scanf("%d", &sayi);
    x = asal(sayi, sayi/2);
    if (x == 1)  //return 1 ise asaldır
        printf("%d Bir Asal Sayi!\n", sayi);
    else
        printf("%d Bir Asal Sayi Degil!\n", sayi);  //o ise değil
    return 0;
}
