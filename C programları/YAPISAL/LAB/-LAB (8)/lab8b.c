/*
 * lab8b.c
 */


#include<stdio.h>
 
int fibo(int x) //fonk tanımlama x = o adimdaki fibo terimi
{
   if ( x == 0 ) //0 adim ise 0 dön
      return 0;
   else if ( x == 1 ) //1 ise 1 dön
      return 1;
   else
      return ( fibo(x-1) + fibo(x-2) );  //fibonacci işlemleri
} 

int main()
{
   int x, a;  // a for döngüsünde yazdirmak için değişken
   int i = 0;  //i fonksiyon değişkeni
   
   printf("Gidilecek Adim Sayisi:");
   scanf("%d",&x);
   printf("Fibonacci Serisi:\n");
 
   for ( a = 1 ; a <= x ; a++ )  //belirtilen adima kadar git 
   {
      printf("%d\n", fibo(i));  //o adimi yaz
      i++; 
   }
 
   return 0;
}
