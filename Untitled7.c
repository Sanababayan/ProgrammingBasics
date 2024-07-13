#include<stdio.h>

int main()
{
    char t = ':';
    int x,y,w,z;
    scanf("%d%d",&x,&y);
    int b = x != 0;
    int c = y != 0;
    z = (12 - x) * b;
    w = (60 - y) * c;
    printf("%02d%c%02d",z,t,w);
    return 0;
}
