#include<stdio.h>

int main(){
    int n=9;
    int valid=0;
    int arr[9][9];
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int g=0;g<9;g++)
{
    for (int i = 0; i < n - 1; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (arr[g][i] == arr[g][j])
        {
            valid=1;
        }}}}
        if(valid==1){
            printf("Not Valid");
        }
        else
        {
    for(int g=0;g<9;g++)
{
    for (int i = 0; i < n - 1; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (arr[i][g] == arr[j][g])
        {
            valid=1;
        }}}}
        if(valid==1){
            printf("Not Valid");
        }
        else
        {
        printf("Valid");
        }
        }
    return 0;
}
