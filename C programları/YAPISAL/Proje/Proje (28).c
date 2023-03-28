#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void sort_words(char *words[], int count, char *bas, char *son)
{
    char *x;

    for (int i = 0; i<count; i++)
    {
        for (int j = i + 1; j<count; j++)
        {
            if ((char)(*words[i]) < (char)(*words[j]))
            {
                x = words[j];
                words[j] = words[i];
                words[i] = x;
            }
        }

    }
    *bas = &words[2];
    *son = &words[0];
}


int main()
{
    char *words[] = { "cherry", "orange", "apple" };
    char *bas[10], *son[10];

    sort_words(words, 3, &bas, &son);
    
    printf("The first word is %s and the last is %s \n ",bas, son);

    /*for (int i = 0; i < 3; i++)
    {
        printf("%s ", words[i]);
    }*/
}
