#include<stdio.h>

int index=-1;

char smallest_alphabet(char a[], int n)
{
    char min = a[0];
    for (int i=1; i<=n-1; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int char_in_str(char ch,char two_arr[][1000],int n,char common_letter[])
{
    int count=0;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;two_arr[i][j]!='\0';j++)
        {
            if(ch==two_arr[i][j])
            {
                count++;
                break;
            }
        }
    }
    if(count==n-1)
    {
        index++;
        common_letter[index]=ch;
    }else
        return 0;
}

int main()
{
    int n=0;
    scanf("%d",&n);
    char input[n+1][1000];
    for(int i=0;i<=n;i++)
    {
        char takxat[1000];
        memset(takxat,0,1000);
        gets(takxat);
        for(int j=0;j<=strlen(takxat);j++)
        {
            input[i][j]=takxat[j];
        }
    }// 1<=i<=n
    char common_letter[strlen(input[1])];
    memset(common_letter,0,strlen(input[1]));
    for(int j=0;j<strlen(input[1]);j++)
    {
        char_in_str(input[1][j],input,n,common_letter);
    }
    char minchar=smallest_alphabet(common_letter,strlen(common_letter));
    int loc_minchar[n+1];
    for(int i=0;i<=n;i++)
    {
        loc_minchar[i]=-1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=strlen(input[i]);j++)
        {
            if(minchar==input[i][j])
            {
                loc_minchar[i]=j;
            }
        }
    }
    int max=loc_minchar[0];
    for (int i=0;i<=n;i++)
    {
            if(loc_minchar[i]>=max)
               max=loc_minchar[i];
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",max-loc_minchar[i]);
    }
    return 0;
}
