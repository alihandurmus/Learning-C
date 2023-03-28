#include <stdio.h>
#include <stdlib.h>


void ilkveson(char *s[], int n, char **ilk, char **son){
    char *temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*s[i] < *s[j])
            {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    
    *ilk = s[7];
    *son = s[0];
    }

int main() {
    char *array [] ={"hello", "world", "today", "is" ,"a" ,"very", "nice", "day"};
    int boyut = 8; 
    
    char *min;
    char *maks;
    
    ilkveson(array, boyut, &min, &maks);
    
    printf("The first word is -%s- and the last is -%s-",min, maks);
    
    return 0;
}



