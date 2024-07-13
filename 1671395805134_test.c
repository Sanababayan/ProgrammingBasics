#include<stdio.h>

long long product(int n1, int n2)
{
   if(n2 == 0)
      return 0;

    return n1 + product(n1, n2 - 1);
}


int main()
{
    int n,a,b;
    long long ans;
    scanf("%d",&n);
    int l[n+1];
    for(int i = 0; i < n+1;i++){
        scanf("%d", &l[i]);
    }

    for(int i =0; i < n;i++){
        a = l[i];
        b = l[i+1];
        if(a == 0 || b == 0){
            printf("%d ",0);
            continue;
        }
        if(a > 0 && b >0){
            ans = product(b,a);

        }else if (a > 0 && b < 0)
        {
            ans = product(b,a);
        }else if (a < 0 && b > 0)
        {
            ans = product(a,b);
        }
        else{
            ans = product(-b,-a);
        }
        printf("%ld ", ans);
    }
    return 0;
}
