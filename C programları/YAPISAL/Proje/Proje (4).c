/*Enes Diler
 * İki Boyutlu Koordinat Sisteminde Bölge Tespit Etme
 * (if-else)
 */


#include <stdio.h>

int main()
{
    int a, b;
    printf("Lutfen X noktasinin koordinatini giriniz:");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Lutfen Y noktasinin koordinatini giriniz:");
        scanf("%d", &b);
        if (b > 0)
        {
            printf("Koordinatinizin Bolgesi 1");
        }
        else
        {
            printf("Koordinatinizin Bolgesi 4");
        }
    }
    else
    {
        printf("Lutfen Y noktasinin koordinatini giriniz:");
        scanf("%d", &b);

        if (b > 0)
        {
            printf("Koordinatinizin Bolgesi 2");
        }
        else
        {
            printf("Koordinatinizin Bolgesi 3");
        }
    }
    getch();


    return 0;
}

