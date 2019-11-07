#include <stdio.h>

int main()
{
    unsigned int a=1,n=1;
    while (a>0)
        a<<1;
        ++n;
    printf("the maximum number of unsigned in is:%u\n",n);
      
    int result;
    int i;
    result=1,i=0;
    while(i<=n)
     {
         result=result*2;
         ++i;
     }
     printf("there are %d\n digits in the maximum number of unsigned int",result-1)
     
     return 0
    
}
