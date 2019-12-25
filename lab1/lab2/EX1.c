#include <stdio.h>
int main()
{
    unsigned int a=1;
    int m=0;
    while (a!=0)
    {
        a=a<<1;
        m++;
    }
    printf("unsignes int is size of %d bit.The max is %u\n",m,0-1);
     return 0;
    
}
