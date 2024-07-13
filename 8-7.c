#include<stdio.h>
#include<string.h>

long long strToNum(char *ch)
{
    long long res = 0;
    int flag = 1;
    if(*ch == '-')
    {
        flag = -1;
        *ch = '0';
    }
    for(int i = 0; ; i++)
    {
        if(*(ch + i) >= '0' && *(ch + i) <= '9')
        {
            res = res * 10 + (int)(*(ch + i) - '0');
        }
        else
        {
            return flag * res;
        }
    }
}

int size_ins_name=-1;
int size_dovomi=-1;
int size_sevomi=-1;
int size_axari=-1;

int main()
{
    char input[101];
    char ins_name[101];
    char dovomi[101];
    char sevomi[101];
    char axari[101];
    memset(input,0,101);
    memset(ins_name,0,101);
    memset(dovomi,0,101);
    memset(sevomi,0,101);
    memset(axari,0,101);
    gets(input);
    int andaze=0;
    for(int i=0;i<strlen(input);i++)
    {
        if(input[i]>=33 && input[i]!=44)
        {
            size_ins_name++;
            ins_name[size_ins_name]=input[i];
        }
        if(size_ins_name!=-1 && input[i]==32)
        {
            andaze=i;
            break;
        }
    }
    for(int i=andaze;i<strlen(input);i++)
    {
        if(input[i]==36 || input[i]!=32)
        {
            size_dovomi++;
            dovomi[size_dovomi]=input[i];
        }
        if(size_dovomi!=-1 && input[i]==44)
        {
            andaze=i;
            break;
        }
    }
    for(int i=andaze+1;i<strlen(input);i++)
    {
        if(input[i]==36 || input[i]!=32)
        {
            size_sevomi++;
            sevomi[size_sevomi]=input[i];
        }
        if(size_sevomi!=-1 && input[i]==44)
        {
            andaze=i;
            break;
        }
    }
    for(int i=andaze+1;i<strlen(input);i++)
    {
        if(input[i]==9 || input[i]==36 || input[i]=='-' || (input[i]>='0' && input[i]<='9') || input[i]=='t' ||input[i]=='s' ||input[i]=='a')
        {
            if(input[i]=='-' && (input[i+1]>'9' || input[i+1]<'0'))
            {
                printf("0");
                return 0;
            }
            size_axari++;
            axari[size_axari]=input[i];
        }else
        {
            size_axari++;
            axari[size_axari]=input[i];
        }
    }
    //printf("<%s><%s><%s><%s>\n",ins_name,dovomi,sevomi,axari);
    for(int i=0;i<strlen(dovomi);i++)
    {
        if(dovomi[i]==9)
        {
            printf("0");
            return 0;
        }
    }for(int i=0;i<strlen(sevomi);i++)
    {
        if(sevomi[i]==9)
        {
            printf("0");
            return 0;
        }
    }
    int i_format=0;
    if(ins_name[strlen(ins_name)-1]==105)
        {
            i_format=1;
        }
    for(int i=0;i<strlen(ins_name);i++)
    {
        if(ins_name[i]==NULL || (ins_name[i]>=0 && ins_name[i]<=32) || ins_name[i]==',')
        {
            printf("0");
            return 0;
        }
    }
    if(dovomi[0]!='$' || sevomi[0]!='$')
    {
        printf("0");
        return 0;
    }
    if(dovomi[1]!='a' && dovomi[1]!='t' && dovomi[1]!='s')
    {
        printf("0");
        return 0;
    }
    if(sevomi[1]!='a' && sevomi[1]!='t' && sevomi[1]!='s')
    {
        printf("0");
        return 0;
    }
    if(dovomi[2]<'0' || dovomi[2]>'9')
    {
        printf("0");
        return 0;
    }
    if(sevomi[2]<'0' || sevomi[2]>'9')
    {
        printf("0");
        return 0;
    }
    if(sevomi[3]!=',' && sevomi[3]!=9 && sevomi[3]!=32)
    {
        printf("0");
        return 0;
    }
    if(dovomi[3]!=',' && dovomi[3]!=9 && dovomi[3]!=32)
    {
        printf("0");
        return 0;
    }
    if(i_format==0)
    {
        int jgj=0;
        for(int i=0;i<strlen(axari);i++)
    {
        if(axari[i]!='$' && i==strlen(axari)-1)
        {
            printf("0");
            return 0;
        }else if(axari[i]=='$')
        {
            jgj=i;
            break;
        }
    }
    if(axari[jgj+1]!='a' && axari[jgj+1]!='t' && axari[jgj+1]!='s')
    {
        printf("0");
        return 0;
    }
    if(axari[jgj+2]<'0' || axari[jgj+2]>'9')
    {
        printf("0");
        return 0;
    }
    if(axari[jgj+3]!=32 && axari[jgj+3]!='\0')
    {
        printf("0");
        return 0;
    }
    }else
    {
        int kjjk=0;
        for(int i=0;i<strlen(axari);i++)
        {
            if(axari[i]!=32 && axari[i]!=9)
            {
                kjjk=i;
                break;
            }
        }
        if(axari[kjjk]=='-')
        {
            if(axari[kjjk+1]>'9' || axari[kjjk+1]<'0')
            {
                printf("0");
                return 0;
            }
            for(int i=kjjk+2;i<strlen(axari);i++)
            {
                if(axari[i]=='-')
                {
                    printf("0");
                    return 0;
                }

            }
        }
        for(int i=0;i<strlen(axari);i++)
        {
            if((axari[i]>'9' || axari[i]<'0') && axari[i]!='-')
                {
                    if(axari[i]!=32 && axari[i]!=10)
                    {
                        printf("0");
                        return 0;
                    }
                }
        }int avi=0;
        for(int i=0;i<strlen(axari);i++)
        {
            if(axari[i]>='0' && axari[i]<='9')
            {
                avi=1;
            }
        }if(avi==0)
        {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}
