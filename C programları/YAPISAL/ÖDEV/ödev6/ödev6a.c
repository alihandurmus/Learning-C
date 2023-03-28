/*Enes Diler
 * Ödev6a
 * Alfabetik Olarak İlk ve Sonuncu Kelimeyi Bul*/

#include <stdio.h>
#include <stdlib.h>


void ilkveson(char *s[], int n, char **ilk, char **son){  //void tanım
    char *temp;

    for (int i = 0; i < n; i++)  //bütün kelimelerde denemesi için for
    {
        for (int j = i + 1; j < n; j++)  //her kelime içiçn sonraki kelimeyle karşılaştırmak için
        {
            if (*s[i] < *s[j])  //yerdeğişterme algoritması  //alfabetik olarak önceyse geriye al
            {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    
    *ilk = s[7];  //alfabetik olarak ilk ve son olan kelimeleri değişkenlere atama
    *son = s[0];
    }

int main() {
    char *array [] ={"hello", "world", "today", "is" ,"a" ,"very", "nice", "day"}; //array tanımı
    int boyut = 8; 
    
    char *min;  
    char *maks;
    
    ilkveson(array, boyut, &min, &maks);  //fonksiyonu çağırma
    
    printf("The first word is -%s- and the last is -%s-",min, maks);
    
    return 0;
}



