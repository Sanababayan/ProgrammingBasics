#include<stdio.h>
#include<math.h>

int countDivisors(int n);
int p(int a,int b,int c,int z);

int countDivisors(int n){
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                cnt++;

            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}
int p(int a,int b,int c,int z){
    int p=a*z*z+b*z+c;
    return p;
}

int main(){
    int a,b,c,d,e,m,k;
    k = 0;
    scanf("%d %d %d\n",&a,&b,&c);
    scanf("%d\n",&d);
    scanf("%d",&e);
    for(int i=0;i<d;i++){
        m=p(a,b,c,i);
        if(countDivisors(m)>=e){
            k++;
            break;
        }
    }
    if(k!=0){
    printf("%d",m);
    }else{
        printf("No match found!");
    }
    return 0;
}
