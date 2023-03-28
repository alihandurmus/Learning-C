#include <stdio.h>

int main(void) {
  int bosluk,satir,n,k;
  printf("sayi girin\n");
  scanf("%d",&n);
  for(satir=0;satir<n;satir++)
  {
    for(bosluk=n-satir;bosluk>0;bosluk--)
    printf(" ");

    for(k=0;k<satir;++k)
    printf("%d",n-satir+k);

    printf("\n");
 
  }
  return 0;
}
