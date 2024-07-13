#include<stdio.h>
#include<math.h>

double line (double a1,double a2,double b1,double b2);
double areai (double d,double c1,double d1,double d2,double gotr);
double roundi (double a,double b,double c,double d);

double line(double a1,double a2,double b1,double b2){
    double m=(double)sqrt((a1-b1)*(a1-b1) + (a2-b2)*(a2-b2));
    return m;
}

double areai (double a,double b,double c,double d,double gotr){
    double s;
    double p =((double)(a+b+gotr)/2);
    double p1 =((double)(gotr+c+d)/2);
    s = (double)sqrt(p*(p-a)*(p-b)*(p-gotr)) + (double)sqrt(p1*(p1-gotr)*(p1-d)*(p1-c));
    return s;
}
double roundi (double a,double b,double c,double d){
    double r=a+b+c+d;
    return r;
}
int main(){
    double g,lim,limit,i1,i2,j1,j2,k1,k2,l1,l2;
    scanf("%lf\n",&g);
    for(int h=0;h<g;h++){

        scanf("%lf %lf\n",&i1,&i2);
        scanf("%lf %lf\n",&j1,&j2);
        scanf("%lf %lf\n",&k1,&k2);
        scanf("%lf %lf",&l1,&l2);

        double a = line(i1,i2,j1,j2);
        double b = line(j1,j2,k1,k2);
        double c = line(l1,l2,k1,k2);
        double d = line(i1,i2,l1,l2);
        double gotr = line(i1,i2,k1,k2);

        double s=areai (a,b,c,d,gotr);
        double r=roundi (a,b,c,d);
        printf("%.2lf\n%.2lf\n",s,r);
        lim=s/r;
        if(lim>=limit){
            limit=lim;
        }else{
            limit=limit;
        }
    }
        printf("%.2lf",limit);
    return 0;
}
