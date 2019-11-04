#include <stdio.h>

int main()
{
    unsigned int a=1,b=0;
    while (a>0)
        a<<1;
        ++a;
    printf("the maximum number of unsigned in is:%u\n",a-1);
      
      unsigned int n=a-1;
     do
     {
         n=n/10;
         b++;
     }
     while(n>0)
     printf("there are %d\n digits in the maximum number of unsigned int",b)
     
     return 0
    
}