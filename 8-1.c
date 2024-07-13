#include<stdio.h>

void revstr(char *str1,int n,int a,int right_left[][n])
{
    char temp='\0';
    int len = right_left[1][a]-right_left[0][a]+1;
    int i=right_left[0][a];
    int komaki=i-right_left[0][a];
    for (i = right_left[0][a]; i < right_left[0][a]+len/2; i++)
    {
        temp = str1[i];
        str1[i] = str1[right_left[1][a] - komaki];
        str1[right_left[1][a] - komaki] = temp;
        komaki++;
    }
}

int main()
{
    char vorodi[2000]={0};
    memset(vorodi,0,2000);
    gets(vorodi);
    int n=0;
    scanf("%d",&n);
    int right_left[2][n];
    int q1,q2;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&q1,&q2);
        right_left[0][i]=q1-1;
        right_left[1][i]=q2-1;
    }
    for(int a=0;a<n;a++)
    {
        revstr(vorodi,n,a,right_left);
    }
    printf("%s",vorodi);
    //strrev(vorodi);
    //printf("%s>",vorodi);
    return 0;
}
