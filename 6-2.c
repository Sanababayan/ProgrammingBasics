#include<stdio.h>

long long int don(int n)
{
    long long int a[30];
    if(n==0)
            {
                 return a[0]=1;
            }else if(n==1)
            {
                return a[1]=7;
            }
                a[n]=5*don(n-1)-4*don(n-2);
                return a[n];
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%lu",don(n));
    return 0;
}
