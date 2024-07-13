#include<stdio.h>

int main()
{       int a,max,min,summ,i,b;
        float ave;
        i = 1;
        scanf("%d ",&b);
        summ = b ;
        max=min=b;
        scanf("%d ",&a);
    while (a != -1){
        summ = summ + a;
        i = i+1;

        if (max-a >= 0)
            max = max;
        else
            max = a;
        if ((min - a)>= 0 )
            min = a;
        scanf("%d",&a);
    }
    ave = (float)summ / i;
    printf("%d\n",min);
    printf("%d\n",max);
    printf("%.2f",ave);
    return 0;
}
