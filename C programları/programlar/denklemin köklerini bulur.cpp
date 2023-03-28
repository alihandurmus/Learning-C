#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
 float x1,x2,delta;

    printf ("Bir a sayisi giriniz:");
	scanf("%d",&a);
	printf ("Bir b sayisi giriniz:");
	scanf("%d",&b);
    printf ("Bir c sayisi giriniz:");
    scanf("%d",&c);
    delta=b*b-4*a*c;
    x1=(-b - (sqrt(delta)))/2*a;
    x2=(-b + (sqrt(delta)))/2*a;
    printf("Denklemin kokleri %f ile %f dir",x1,x2);
    

	return 0;
}
