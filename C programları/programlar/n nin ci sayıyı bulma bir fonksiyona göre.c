#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) 
{  int sum=a+b+c,number,x;
  for(x=0;x<n-2;x++)
  {   if(n>3)
       {   
           int temp = sum;
           sum+=number;
           number = temp;
           
       }
      else if(n==3)
      return c;
      else if(n==2)
      return b;
      else 
      return a;
  }
  return number;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
