
#include <stdio.h>
#include <conio.h>


long convertBinary(int decNo)
{
    static long biNo,r,fctor = 1;

    if(decNo != 0)
    {
         r = decNo % 2;
         biNo = biNo + r * fctor;
         fctor = fctor * 10;
         convertBinary(decNo / 2);//calling the function convertBinary itself recursively
    }
    return biNo;
}


	

int main(){
	
	int sayi = 0101;
	
	convertBinary(sayi);
	
	printf("%d",sayi);
	
	
	return 0;
	}
