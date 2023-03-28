#include<stdio.h>
#include<string.h>




int main()
{
    FILE *f,*yeni;
    f = fopen("ogrenci1.txt" ,"r");

       if(f == NULL)
       {
        return 1;
       }

    yeni = fopen("dosya2.txt","a");
    if(yeni == NULL)
    {
        fclose(f);
        printf("\n");
        return 1;
    }
    char c;
    while((c = fgetc(f)) != EOF)
    {
        fputc(c,yeni);
    }

    fclose(f); fclose(yeni);

   if (remove("dosya2.txt") == 0) 
      printf("Deleted successfully"); 
   else
      printf("Unable to delete the file");
    return 0;

}
