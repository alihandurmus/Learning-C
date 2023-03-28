#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 

{

    int n;
    printf("Kac satir olsun:");
    scanf("%d", &n);
    for(int x=0;x<n-1;x++)
    {   for(int z=n;z>=n-x;z--)
        {
        printf("%d ",z);
        }
        for(int y=n;y<n-x+n-1;y++)
        { 
        printf("%d ",n-x);
        }
        for(int y=n;y<n-x+n-1;y++)
        { 
        printf("%d ",n-x);
        }
        for(int z=n-x+1;z<n+1;z++)
        {
        printf("%d ",z);
        }
    
        printf("\n");
        
    } 
    for(int x=0;x<n;x++)
    {   
        for(int y=n;y>x+1;y--)
          printf("%d ",y);
        for(int z=n;z<n+x;z++)
          printf("%d ",x+1);
          for(int z=0;z<x;z++)
          printf("%d ",x+1);
          for(int y=x+1;y<=n;y++)
          printf("%d ",y);
        
        printf("\n");
        
    }
    printf("\nAlihan Durmus yapti moruq anladin");
 return 0;   
}
