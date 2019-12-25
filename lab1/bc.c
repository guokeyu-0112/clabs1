#include <stdio.h>

int main()
{
    int count=0;
    int n1=0;
    int n2=0;
    printf("please input the number\n");
    scanf("%d",&n2);
    while(n2!=0)
    {
        n1=n2%2;
        n2=n2/2;
        if(n1==1)
        count++;
    }
    printf("the amount is:%d\n",count);
    return 0;
}