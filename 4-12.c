#include<stdio.h>
#include<math.h>
/*
long long int base1_to_base10(long long int base1,long long int x);
long long int base10_to_base2(long long int base2,long long int x);
long long int digit(long long int d,long long int base2);

long long int base1_to_base10(long long int base1,long long int x){
    long long int a1,a2,a3;
    a1=x;
    for(int i =0;i<10;i++){
        a2 =(x/(long long int)pow(10,i)) % ((long long int)pow(10,i+1));
        printf("\na2=%d",a2);
        a2=x-(a2*pow(10,i+1));
        a3 = a3+(a2*pow(base1,i));
    }
    return a3;
}

long long int digit(long long int d,long long int base2){
    long long int count,e;
    long long int n,d1,d2,total;
    long long int x1,x2,x3,x4,x5,x6;
    n=d;
    count=0;
    while(d!=0)
   {
       d=(long long int)d/10;
       count++;
   }
   if(count%2==0){
    e=(long long int)count/2;
    d1=n%(long long int)(pow(10,e));
    d2=(long long int)(n-d1)/(long long int)pow(10,e);
    d1=base1_to_base10(d1,base2);
    d2=base1_to_base10(d2,base2);
    total=d1+d2;
    total=base10_to_base2(total,base2);
    return total;
   }else{
    e=(count+1)/2;
    n=(long long int)n*10;
    d1=n%(long long int)(pow(10,e));
    d2=(long long int)(n-d1)/(long long int)pow(10,e);
    d1=base1_to_base10(d1,base2);
    d2=base1_to_base10(d2,base2);
    total=d1+d2;
    total=base10_to_base2(total,base2);
    return total;
   }
}

int main(){
    long long int base1,base2,x,a,b,c;
    scanf("%lld %lld\n",&base1,&base2);
    scanf("%lld",&x);
    a=base1_to_base10(base1,x);
    //b=base10_to_base2(base2,a);
    printf("%lld",a);
    return 0;
}
*/
long long int base10tobase2(long long int n,int b)
{
    long long int sum=0;
    int i=1;
    while(n>0)
    { sum+=(n%b)*i;
        i*=10;
        n/=b;
}
    return sum;
}
long long int base1tobase10(long long int n,int k)
{
    long long int sum=0;
    int i=1;
    while(n>0)
    {sum+=(n%10)*i;
        i*=k;
        n/=10;
}
    return sum;
}

long long int digit(long long int d,int base2){
    long long int count,e,n,d1,d2,total;
    n=d;
    count=0;
    while(d!=0)
   {
       d=(long long int)d/10;
       count++;
   }
   if(count%2==0){
    e=(long long int)count/2;
    d1=n%(long long int)(pow(10,e));
    d2=(long long int)(n-d1)/(long long int)pow(10,e);
    d1=base1tobase10(d1,base2);
    d2=base1tobase10(d2,base2);
    total=d1+d2;
    total=base10tobase2(total,base2);
    return total;
   }else{
    e=(count+1)/2;
    n=(long long int)n*10;
    d1=n%(long long int)(pow(10,e));
    d2=(long long int)(n-d1)/(long long int)pow(10,e);
    d1=base1tobase10(d1,base2);
    d2=base1tobase10(d2,base2);
    total=d1+d2;
    total=base10tobase2(total,base2);
    return total;
   }
}
int main(){
    long long int n,a,b,total;
    int base1,base2;
    scanf("%d %d\n%lld",&base1,&base2,&n);
    a=base1tobase10(n,base1);
    b=base10tobase2(a,base2);
    total=digit(b,base2);
    printf("%lld",total);
    return 0;
}

