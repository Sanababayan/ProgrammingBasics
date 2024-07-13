#include <stdio.h>
#include <stdint.h>

uint64_t DoubleToHexCoverter(double d)
{
  return (*(uint64_t*)&d);
}

int main()
{
    double a;
    scanf("%lf",&a);
    uint64_t b = DoubleToHexCoverter(a);
    unsigned char digest[sizeof(uint64_t) / sizeof(char)];

for (int i = sizeof(digest) - 1; i >= 0; i--) {
   digest[i] = b % 256;
   b /= 256;
}

for (int i =sizeof(digest)-1; i >= 0; i--) {
    if(digest[i]==0 || digest[i]==1 || digest[i]==2 || digest[i]==3 || digest[i]==4 || digest[i]==5 || digest[i]==6 || digest[i]==7 || digest[i]==8 || digest[i]==9)
       printf("%d",0);
   printf("%x", digest[i]);
}
    return 0;
}
