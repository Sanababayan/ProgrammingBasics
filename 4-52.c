#include<stdio.h>
#include<math.h>

int addaval(int a);

int addaval(int a){
    int i;
    int c;
    c=0;
    if(a==1){
    printf("-1 -1 -1 -1");
    return 0;
    }else{
    for (i=2; i<a; i++){
        if (a % i == 0 && i != a){
            c++;
            break;
        }
    }
    if(c!=1){
        if(a<101){
            printf("%d %d %d %d",a,a,a,a);
            return 0;
        }else{
            printf("%ld %ld %ld %ld",1000000,100,1000000,100);
            return 0;
        }
    }else{
        printf("-1 -1 -1 -1");
        return 0;
    }
}
}
int main(){
    int x;
    scanf("%d",&x);
    addaval(x);
    return 0;
}
