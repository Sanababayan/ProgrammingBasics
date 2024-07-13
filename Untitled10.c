#include<stdio.h>

int main()
{
    int m,n,p,q,a,b,z,s;
    scanf("%d%d",&m,&n);
    scanf("%d%d",&p,&q);
    a = m ^ n;
    b = p | q;
    s = (a >= b) * a + (a < b) * b;
    printf("%d",s);
    return 0;

}
