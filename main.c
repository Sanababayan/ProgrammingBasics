#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int n=0;
    int m=0;
    scanf("%d %d\n",&n,&m);
    char esme_negahban[n][1000];
    int begin_index=0;
    for(int i=0;i<n;i++)
    {
        char input[1000];
        memset(input,0,1000);
        gets(input);
        int flag=0;
        int iind=0;
        for(int j=0;j<strlen(input);j++)
        {
            if(input[j]=='-')
            {
                flag++;
            }
            if(flag==m-1)
            {
                begin_index=j;
                break;
            }
        }
        int ii=begin_index+1;
        if(m==1)
        {
            ii=begin_index;
            for(ii;input[ii]!='-' && input[ii]!='\n' && input[ii]!='\0';ii++)
            {
                esme_negahban[i][ii-(begin_index)]=input[ii];
            }
            esme_negahban[i][ii-(begin_index)]='\0';
        }
        else
        {
            for(ii;input[ii]!='-' && input[ii]!='\n' && input[ii]!='\0';ii++)
            {
                esme_negahban[i][ii-(begin_index+1)]=input[ii];
            }
            esme_negahban[i][ii-(begin_index+1)]='\0';
        }
    }
//    for (int i = 0; i < n; ++i) {
//        printf("<%s>\n", esme_negahban[i]);
//    }
    char temp[1000];
    memset(temp,0,1000);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(strcmp(esme_negahban[j], esme_negahban[j+1]) > 0)
            {
                strcpy(temp, esme_negahban[j]);
                strcpy(esme_negahban[j], esme_negahban[j+1]);
                strcpy(esme_negahban[j+1], temp);
            }
        }
    }
//    printf("\n");
//    for (int i = 0; i < n; ++i) {
//        printf("<%s>\n", esme_negahban[i]);
//    }
    /*char [n][1000];
    char first_name[1000];
    for(int i=0;i<strlen(esme_negahban[0]);i++)
    {
        first_name[i]=esme_negahban[0][i];
    }
    esme_negahban[0][strlen(esme_negahban[0])]='\0';
    for(int i=0;i<n;i++)
    {
    }
    */
    int accu=1;
    int accu_index=0;
    int acc_array[n][2];
    char nomo[1000];
    for(int i = 0; i < strlen(esme_negahban[0]); i++)
    {
        nomo[i] = esme_negahban[0][i];
    }
    nomo[strlen(esme_negahban[0])] = '\0';
    for(int i=0;i<n;i++)
    {
        if(strcmp(esme_negahban[i],nomo)==0)
        {
            accu++;
        }
        else
        {
            acc_array[accu_index][0]=i-1;
            acc_array[accu_index][1]=accu;
            accu=1;
            accu_index++;
            for(int jj = 0; jj < strlen(esme_negahban[i]); jj++)
            {
                nomo[jj]=esme_negahban[i][jj];
            }
            nomo[strlen(esme_negahban[i])]='\0';
        }
    }
    /* acc_array[accu_index][0]=n;
    acc_array[accu_index][1]=accu;*/
    if(strcmp(esme_negahban[n-1],esme_negahban[n-2])==0)
    {
        acc_array[accu_index][0]=n-1;
        acc_array[accu_index][1]=accu;
    }
    if(strcmp(esme_negahban[n-1],esme_negahban[n-2])!=0)
    {
        acc_array[accu_index][0]=n-1;
        acc_array[accu_index][1]=1;
    }
    acc_array[0][1]--;
    if(n == 1)
    {
        printf("      1 %s\n",esme_negahban[acc_array[0][0]]);
        return 0;
    }
    for(int i=0;i<=accu_index;i++)
    {
        printf("      %d %s\n",acc_array[i][1],esme_negahban[acc_array[i][0]]);
    }
    return 0;
}
