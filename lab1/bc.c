#include <stdio.h>

main()
int count_one_bits(unsigned int value)
{
    int count=0;
    while(value)
    {
        if(1==value%2)
        {
            count++;
        }
        value=value/2;
    }
    ruturn count;
}
int main()
{
    int input;
    int c=0;
    printf("please enter an integer less than 100000\n")
    scanf("%d",&input);
    c=count_one_bits(input);
    printf("%d\n",c);
    return 0
}