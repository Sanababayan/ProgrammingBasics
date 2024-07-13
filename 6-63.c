//Mitra Golipour helped me debugging my code

#include<stdio.h>
int tree[10000][10000];
int bw[10000][2];
int ans=0;

void kosar(int i)
{
    int len = tree[i][0],a;
    if(len != 0){

        for(int j=1;j<=len;j++){
            a = tree[i][j];
            kosar(a);
            bw[i][0] += bw[a][0];
            bw[i][1] += bw[a][1];
        }
        if(bw[i][0] == bw[i][1]){
            ans += 1;
        }
        return;
    }
    return;
}

int main()
{
    int n,a,count;
    scanf("%d",&n);
    int sh[n];
    char col[n];


    for(int i = 1;i < n;i++)
    {
        scanf("%d ",&sh[i]);
        a = sh[i];
        count = ++tree[a - 1][0];
        tree[a - 1][count] = i;
    }
    scanf("%s",col);
    for(int i = 0;i < n;i++)
    {
        if(col[i] == 'W'){
            bw[i][0]  = 1;
        }else{
            bw[i][1]  = 1;
        }
    }
    kosar(0);
    printf("%d\n",ans);
    return 0;
}
