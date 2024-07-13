#include<stdio.h>
#include<math.h>

long long int fact(int y)
{
    if (y == 0)
        return 1;
    return y * fact(y - 1);
}

int spring(int n)
{
    int a;
    long long int b,c;
    c=1;
    for(int i=0;i<n;i++)
    {
        b=0;
        scanf("%d",&a);
        for(int j=0;j<=a;j++)
        {
            b=b+(fact(a)/fact(j));
        }
        c=c%1000000007;
        b=b%1000000007;
        c=c*b;
    }
    c=c%1000000007;
    return c;
}

int main()
{
    int n;
    scanf("%d",&n);
    long long int ans=spring(n)%1000000007;
    printf("%ld",ans);
    return 0;
}
