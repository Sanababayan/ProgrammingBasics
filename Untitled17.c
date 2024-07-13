#include<stdio.h>

int main(){
    int n,r,i;
    scanf("%d %d",&n,&r);
    for (i=1;i<n;i++){
    int a,b,c,d,e,x,summ;
    int af,bf,cf,df,ax,bx,cx,dx,ef,ex;
    ax=bx=cx=dx=af=bf=cf=ef=ex=df=1;
    a = (i%10);
    b = ((i/10)%10);
    c = ((i/100)%10);
    d = ((i/1000)%10);
    e = ((i/10000)%10);
    for(ax=1;ax<=a;ax++){
        af=ax*af;}
    for(bx=1;bx<=b;bx++){
        bf=bx*bf;}
    for(cx=1;cx<=c;cx++){
        cf=cx*cf;}
    for(dx=1;dx<=d;dx++){
        df=dx*df;}
    for(ex=1;ex<=e;ex++){
        ef=ex*ef;}
    summ=af+cf+df+bf+ef;
    if(e==0 && d==0 && c==0&& b==0)
        summ=summ-4;
    else if(e==0 && d==0 && c==0)
        summ=summ-3;
    else if(e==0 && d==0)
        summ = summ-2;
    else if(e==0)
        summ=summ-1;
    else
        summ=summ;
 if (summ%(i) == r){
        printf("%d\n",i);
       }
    }
    return 0;
}
