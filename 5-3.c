#include<stdio.h>

int main(){
    int n;
    char harf;
    scanf("%d\n",&n);
    int mat1[n][n];
    int mat2[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    scanf("\n%c\n",&harf);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    if(harf=='A'){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int matf[n][n];
            matf[i][j]=mat1[i][j] + mat2[i][j];
            printf("%d ", matf[i][j]);
        }printf("\n");
    }
    }else if(harf=='S'){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int matf[n][n];
            matf[i][j]=mat1[i][j] - mat2[i][j];
            printf("%d ", matf[i][j]);
        }printf("\n");
    }
    }else if(harf=='M'){
        int sum,we;
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum=0;
            int matf[n][n];
            for(int k=0;k<n;k++){
                we=mat1[i][k] * mat2[k][j];
                sum=sum + we;
            }
            matf[i][j]=sum;
            printf("%d ", matf[i][j]);
    }
    printf("\n");
    }
    }
    return 0;
}
