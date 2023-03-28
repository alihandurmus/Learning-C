#include <stdio.h>

int max_of_four(int a,int b,int c,int d)
{   int max;
    if(a>b)
    {
       if(a>c)
       {
           if(a>d)
           {
               max = a;
           }
           else if(d>b)
           {
               if(d>c)
               {
                   max = d;
               }
           }
       }
       else if(c>b)
       {
           if(c>d)
           {
               max = c;
           }
       }
    }
    else if(b>c)
    {
        if(b>d)
        {
            max = b;
        }
        else if(d>a)
        {
            if(d>c)
            {
                max = d;
            }
        }
    }
    else if(c>d)
    {
        max = c;
    }
    
    
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("En buyugu : %d", ans);
    
    return 0;
}
