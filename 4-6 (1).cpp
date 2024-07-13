#include "grader.h"
#include<stdio.h>
long long int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
#if s==0
long long int findDivisor(int a,int b){
long long int temp;
long long int c,d;
c=(long long int)a;
d=(long long int)b;
temp=(long long int)(c*d)/gcd(c,d);
return temp;
}

#else
long long int findDivisor(int a,int b,int c){
    long long int gcdgcd;
    gcdgcd=gcd(a,gcd(b,c));
    return gcdgcd;
}
#endif

