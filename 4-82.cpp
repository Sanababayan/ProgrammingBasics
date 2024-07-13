
#include "grader.h"
#include<stdio.h>
#include<stdarg.h>

long long int solve(int n, ...){
    long long int sum=0;
    va_list tedad;
    va_start(tedad, n);
    int a=va_arg(tedad,int);
    int b=a;
    for(int i=0;i<n-1;i++){
        int a = va_arg(tedad, int);
        long long int def;
        if(a-b > 0){
            def=a-b;
        }else{
        def=b-a;
        }
        sum = sum + def;
        b=a;
       }
       return sum;
}
