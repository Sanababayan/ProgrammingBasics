#include<stdio.h>

int main(){
    int n;
    char a,b,d;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        int s=0,t=0;
        scanf("%c",&a);
        scanf("%c",&b);
        if (b == '\n'){
            printf("common\n");
        }else{
        if(b>=a){
            s=1;
            //printf("0-a:%c b:%c\n",a ,b);
        }
        scanf("%c",&d);
        while (d != '\n'){
        if (d>=b && s==0){
            t++;
            //printf("1-t:%d %d\n",t,d<b);
            s=1;
        }
        else if(s==1 && d<b){
            t++;
            //printf("2-t:%d %d  \n",t, d<b);
            s=0;
        }
        b=d;
        scanf("%c",&d);
    }
    if (t==0){
        printf("common\n");
    }
    else if(t==1){
        printf("efficient\n");
    }
    else{
        printf("inefficient\n");
    }
    }
    }
    return 0;
}
