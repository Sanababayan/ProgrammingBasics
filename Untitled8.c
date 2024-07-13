#include<stdio.h>
#include<math.h>

int main()
{
    double x,y,z,r;
    scanf("%lf%lf%lf",&x,&y,&z);
    r = x*x + y*y + z*z;
    r = sqrt(r);
    printf("%.2lf",r);
    return 0;
}
