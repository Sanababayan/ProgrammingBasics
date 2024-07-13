//Mitra Golipour helped me on line 20
#include<stdio.h>

int main(){
    int a,b,sum,xor,mul,mul0,z,m,y1=0,y2=0;
    scanf("%d %d",&sum,&xor);
    mul0=0;
    m=sum/2;
    if (sum % 2 == 1){
        m++;
    }
    for(int b=0;b<=m;b++){
        a = sum - b;
        if (a >=0 &&(a^b) == xor){
            z=a*b;
            y1=b;
            y2=a;
            }
        }
        if (y1+y2 !=sum || (y1^y2) != xor){
            //printf("%d %d\n",y1+y2,y1^y2);
            printf("None");
        }else if(y1 < y2){
            printf("%d %d",y1,y2);
        }else{
            printf("%d %d",y2,y1);
        }
    return 0;
}
















/*int main(){
   int n = 5;
   int counter = 0;
   for(int i=0; i<=n; i++ )
      if ( (n+i) == (n^i) )
         counter++;
    printf("%d",counter);
    return 0;
}*/
