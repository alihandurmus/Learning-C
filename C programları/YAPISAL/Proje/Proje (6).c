/*ENES DİLER
 *Vücut Kilo Endeksi Hesaplama
 */


#include <stdio.h>

int main()
{
    float b, k, e;
    printf("Lutfen Boyunuz Girin(Metre Cinsinden):"); 
    scanf("%f", &b); //boy girdisi
    printf("Lutfen Kilonuzu Girin:");
    scanf("%f", &k); //kilo girdisi
    e = k / (b * b); //endeks hesaplama
    if (e < 18.5)  //belirtilen şartlar sağlanırsa kod bloğu çalışır
    {
        printf("Vucut Kilo Endeksiniz->%.2f Sonuc-->Zayif",e);
    }
    else if (e < 24.9 && e > 18.5)
    {
        printf("Vucut Kilo Endeksiniz->%.2f Sonuc-->Normal",e);
    }
    else if (e < 29.9 && e > 25)
    {
        printf("Vucut Kilo Endeksiniz->%.2f Sonuc-->Fazla Kilolu",e);
    }
    else if (e < 39.9 && e > 30)
    {
        printf("Vucut Kilo Endeksiniz->%.2f Sonuc-->Obez",e);
    }
    else if (e > 40)
    {
        printf("Vucut Kilo Endeksiniz->%.2f Sonuc-->***MORBID OBEZ***\a",e);
    }


    return 0;
}

