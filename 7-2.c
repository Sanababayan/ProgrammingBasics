#include<stdio.h>

void mulMat(int t,int m0,int n0,long long int mat0[m0][n0])
{
    int m,n;
    scanf("%d %d",&m,&n);
        long long int mat2[m][n];
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<n;k++)
            {
                scanf("%lld",&mat2[j][k]);
            }
        }
        long long int c[m0][n];
        for (int i = 0; i < m0; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) {
                c[i][j] += (long long int)mat0[i][k] * (long long int)mat2[k][j];
                c[i][j]%=998244353;
            }
        }
    }
    t--;
    if(t>=1)
        mulMat(t,m0,n,c);
    else
    {
        for(int i=0;i<m0;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%lld ",c[i][j]);
            }printf("\n");
        }
    }
}

int main()
{
    int t,m0,n0;
    scanf("%d",&t);
    scanf("%d %d",&m0,&n0);
        long long int mat0[m0][n0];
        for(int j=0;j<m0;j++)
        {
            for(int k=0;k<n0;k++)
            {
                scanf("%lld",&mat0[j][k]);
            }
        }
    t=t-1;
    mulMat(t,m0,n0,mat0);
    return 0;
}
