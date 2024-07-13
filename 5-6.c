#include<stdio.h>

int main(){
    int sho;
    char k,u;
    int n,m=0;
    scanf("%d\n",&n);

    int fd[n];
    int sr[2][n];
    for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&sr[i][j]);
            }
    }
    int max = sr[1][0];
    int ry,kl;
    for (int i = 0; i < n; i++) {
       if(sr[1][i] > max){
           max = sr[1][i];
           ry=i;
    }
    }
    kl=sr[0][ry];
    for (int i = ry; i < n; i++) {
       if(sr[1][i] == max){
            if(kl>=sr[0][i]){
                sho=i;
            }
    }
    }
    printf("%d %d",sr[0][sho],sr[1][sho]);
    return 0;
}
