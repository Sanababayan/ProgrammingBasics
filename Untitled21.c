#include<stdio.h>

int main(){
    int a,b,h,m,x,n,y,l,i,u,p,o,mid_line,second_mid_line,t,k,t1,k2,k1,k3,k4,third_mid_line,q1,q2,xy,j1,j2,j3,j4,j5;
    u=i=0;
    scanf("%d %d %d",&a,&b,&h);
    x=(h-1)/4;
    m=a*x;
    y=x;
    n=b*x;
    l=2*(m+n)+1;
    p=(l-1)/2;
    mid_line=(h+1)/2;
    second_mid_line=(mid_line+1)/2;
    third_mid_line=h-second_mid_line+1;


    for(int u=0;u<mid_line;u++,printf("\n")){

            if(u<second_mid_line)
            {
            o=a;
            t1=2*a*u;
            k2=0;
            k4=0;
            }

            else if(second_mid_line<=u<=mid_line)
            {
                    t1=0;
                    k1=u-second_mid_line+1;
                    k2=k1*(b-a);
                    k4=0;
            }
        for(int i=0;i<l;i++){
                if((i==(p-o*u-k2+k4)) || (i==(2*p-(p-o*u-k2+k4)))){
                   printf("*");
                   }
                else
                    printf("-");
        }
        xy=2+u;
        }




        /*for(int u=xy;u<h;u++,printf("\n")){
            if(mid_line<= u <=third_mid_line)
            {
            k3=u-mid_line+1;
            k4=k3*b;
            q1=(p-o*u-k2+k4);
            q2=(2*p-(p-o*u-k2+k4));
            q1=q2=0;
            }

            else
            {
                printf("KUIO");
            }

        for(int i=0;i<l;i++){
                if((i==(p-o*u-k2+k4)) || (i==(2*p-(p-o*u-k2+k4)))){
                   printf("*");
                   }
                else
                    printf("-");
        }
        }*/









j2=h+1-mid_line;
j3=(j2+1)/2;
for(int j1=1;j1<j2;j1++,printf("\n")){
    if(j1<j3){
        j4=j1*b;              //j5=j3*(1+j4)+j1*2+(b-a);
        j5=0;
    }
    else
    {
        j4=0;
        j5=(j3-2)*b+(j1-j3+2)*a+(b-a);
    }
    for(int i=0;i<l;i++){
                if((i==(j5+j4)) || (i==2*p-(j5+j4))){
                   printf("*");
                   }
                else
                    printf("-");
        }
  }
















    return 0;
}
