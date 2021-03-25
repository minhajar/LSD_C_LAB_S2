#include "header.h"
#include<stdio.h>

int iterative_fibo(int n)
{
   if (n==0||n==1)
       return n;
   else
    {
        int a,b,c;
        a=0;
        b=1;
        for (int i=2;i<=n;i++)
            c=a+b;
            a=b;
            b=c;
        return c;
    }
}
            
