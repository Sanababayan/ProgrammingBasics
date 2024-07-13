#include<stdio.h>

int  main()
{
  int i,n,a[100000],temp,k;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int t=0;t<k;t++){
    temp=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;}
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

/*
int main(){
    int n,b,k;
    scanf("%d %d\n",&n,&k);
    b=k;
    int par[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&par[i]);
    }
    for(int i=0;i<1;i++)
    {
        int g=i+k;
        if(g<n)
        {
            printf("%d ",par[g]);
        }else
        {
            g=g-n;
            printf("%d ",par[g]);
        }
    }
    return 0;
}
*/
