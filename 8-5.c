#include<stdio.h>
#include<math.h>

int main()
{
    char input[1001];
    memset(input,0,1001);
    gets(input);
    int L=strlen(input);
    int A=(int)ceil(sqrt(L));
    int B=(int)floor(sqrt(L));
    char vorodi[A][B];
    memset(vorodi,0,A*B);
    for(int i=0;i<L;i++)
    {
        vorodi[i%A][i/B]=input[i];
    }
    for(int i=0;i<A;i++)
    {
        for(int j=0;j<B;j++)
        {
            printf("%c",vorodi[i][j]);
        }
    }
    return 0;
}
