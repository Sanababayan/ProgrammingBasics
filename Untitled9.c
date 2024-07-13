#include<stdio.h>

int main()
{
    int a,c,d,s,q;
    char b;
    scanf("%d%c%d",&a,&b,&c);
    int m =  b == 'p';
    d = (m * 2) - 1;
    s = a + (d * c);
    printf("%d",s);
    return 0;
}
