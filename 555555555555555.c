#include<stdio.h>

int main(){
    long long int n,i;
    i = 22;
    int k;
    k=0;
    scanf("%lld",&n);
    if ( n < 0)
        printf("NO");
    else if(n<484){
    if(n==0 || n==1 || n==4 || n==9 || n==16 || n==25 || n==36 || n==361 || n==400 || n==441 ||n==49 || n==64 || n==81 || n==100 || n==121 || n==144 || n==169 || n==196 || n==225 || n==256 || n==289 || n==324 )
        printf("YES");
    else
        printf("NO");
    }
    else
        {
    for (i = 22; i * i <= n; i++) {
        if ((n % i == 0) && (n / i == i)) {
            k=1;
        }
        else
            k=0;
    }
    if (k==1)
        printf("YES");
    else
        printf("NO");
                /*for(i=22;i<=1000000;i++){
                    if ((n%i==0) && (n/i==i))
                        printf("YES");
                    else
                        printf("NO");
                }*/

        /*while(i <= 1000000){
            if ((n%i)==0 && (n/i)==i)
                k = k+1;
            else
                i++;
                continue;

        if (k == 1)
            printf("YES");
        else
            printf("NO");
        }*/
    }
    return 0;
}
