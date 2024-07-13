#include<stdio.h>

int main(){
    unsigned long long int a,b,d;
    int n,z,sum,z2,y;
    a=0;
    y=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&z);
    b=(long long)1<<z;
    a=a | b;
    }
    scanf("%d",&sum);
    if(1>sum || sum>125){
        printf("NO");
        }else{
    for(int z1=0;z1<64;z1++){
        if(((a>>z1)&1 )== 1){
        z2=sum-z1;
    if(z2>=0 && z2<64 && z2 != z1){
        d=a>>z2;
        d=d&1;
        if(d==1){
            y=1;
            break;
        }
    }
}
}
    if(y==1){
        printf("YES");
        }else{
        printf("NO");
        }
        }
    return 0;
}
