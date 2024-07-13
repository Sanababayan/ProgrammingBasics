#include<stdio.h>

int main()
{
    unsigned int a,b,x,y,s;
    scanf("%u \n %u",&a,&b);
    x = a << b;
    y = a >> (32 - b);
    s = x | y;
    printf("%u",s);
    return 0;
}
