#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,del,x1,x2;
    scanf("%f\n%f\n%f",&a,&b,&c);
    del=b*b - 4*a*c;
    if(a==0 && b==0)
    {
        printf("IMPOSSIBLE");
    }else if(a==0 && b!=0)
    {
        printf("%0.3f",(-1*c)/b);
    }
    else if(a!=0 && b==0 && c>0)
    {
        printf("%0.3f %0.3f",sqrt((-1*c)/a),(-1*sqrt((-1*c)/a)));
    }else if(a!=0 && b==0 && c==0)
    {
        printf("%0.3f",0);
    }
    else if(del<0)
    {
        printf("IMPOSSIBLE");
    }else if(del==0)
    {
        printf("%.3f",(-1*b)/(2*a));
    }else
    {
        del=sqrt(del);
        x1=((-1*b)+del)/(2*a);
        x2=((-1*b)-del)/(2*a);
        printf("%0.3f\n%0.3f",x2,x1);
    }
    return 0;
}
