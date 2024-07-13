#include<stdio.h>

int main(){
    int n,en,eb,sum;
    scanf("%d\n",&n);
    int A[n];
    int D[n];
    int G[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    D[0] = A[0];
    for(int i=1;i<n;++i){
    if(D[i - 1] + A[i]> A[i]){
        eb=i;
        D[i]=D[i - 1] + A[i];
    }else{
        D[i]=A[i];
    }
    }
    int ans = D[0];
    for(int i=1;i<n;++i){
        if(ans>D[i]){
            ans=ans;
        }else{
            ans=D[i];
        }
    }
    for(int i=0;i<n;i++){
        if(ans==D[i]){
            en=i+1;
            break;
        }
    }
    for(int i=en-1;i>-1;i--){
        sum=sum+A[i];
        if(sum==ans){
            eb=i+1;
        }
    }
        printf("%d\n%d %d",ans,eb,en);
    return 0;
}
