/*ödev1.4.c
 * Enes Diler
 * Escape Karakterler
 */


#include <stdio.h>

int main()
{
	printf("Uyari!\an"); //uyarı sesi gönderir//
	printf("Medeniyett\b Universitesi\n");   //silme//
	printf("Ust Satir\nAlt Satir\n"); //alt satıra geçer/
	printf("Merhaba\r  Ar\n"); //satırbaşından üstüne yazar//
	printf("1234\t9\n"); //dört boşluk bırakır//
	printf("AA\\\v\\BB\n");  //imleci aynı hizada alt satıra geçirir(bende çalışmıyor ama repl.it de denedim//
	printf("\\\\ isaretleri \\ yazar\n"); //backslash yazar//
	printf("What\?\n");  //soru işareti koyar//
	printf("Karac\'oglan\n"); //kesme işareti//
	printf("\"TURKIYE\"\n"); //çift tırnak//
	printf("BIN\101RY\n"); //16lık sayı//
	
	
	return 0;
}

