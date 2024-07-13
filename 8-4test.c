#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

double get_double(const char *str)
{
    while (*str && !(isdigit(*str) || ((*str == '-' || *str == '+') && isdigit(*(str + 1)))))
        str++;
    return strtod(str, NULL);
}


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


double largestFloat(double array[], int length){
    double max = array[0];
    int i;
    double result=0;
    for( i=1; i<length; i++){
        if(array[i] > max){
            max = array[i];
            result=i;
        }
    }

    return result;
}

int main()
{
    char vorodi[1000000];
    memset(vorodi,0,1000000);
    gets(vorodi);
    char vorodi2[1000000];
    memset(vorodi2,0,1000000)
;
    for(int i = 0; i < strlen(vorodi); i++)
    {
        vorodi2[i]=vorodi[i];
    }
    vorodi2[strlen(vorodi)] = '\0';
    int count = 0;
    int beshmor = 0;
    if(vorodi[0]>='0'&&vorodi[0]<='9')
    {
        beshmor=1;
    }
    for(int i = 0; i < strlen(vorodi); i++)
    {
        if(!((vorodi[i] >= '0' && vorodi[i] <= '9') || vorodi[i] == '.' || vorodi[i] == '-'))
            vorodi[i] = 32;
    }

    if(vorodi[0] == '.')
    {
        for (int i = 0; i < strlen(vorodi); ++i) {
            if(vorodi[i] != ' ')
                vorodi[i] = ' ';
            else
                break;
        }
    }
    if(vorodi[strlen(vorodi) - 1] == '.')
    {
        for (int i = strlen(vorodi) - 1; i >= 0 ; --i) {
                if(vorodi[i] != ' ')
                    vorodi[i] = ' ';
                else
                    break;
        }
    }
    for(int i = 1; i < strlen(vorodi) - 1; i++)
    {
        if(vorodi[i] == '.' && vorodi[i + 1] == ' ')
        {
            for (int j = i; i >= 0 ; --j) {
                if(vorodi[j] != ' ')
                    vorodi[j] = ' ';
                else
                    break;
            }

        }
        if(vorodi[i] == '.' && vorodi[i - 1] == ' ')
        {
            for (int j = i; i < strlen(vorodi) ; ++j) {
                if(vorodi[j] != ' ')
                    vorodi[j] = ' ';
                else
                    break;
            }
        }
    }
    beshmor += vorodi[0] <= '9' && vorodi[0] >= '0';
    for(int i = 1; i < strlen(vorodi); i++)
        beshmor += vorodi[i - 1] == ' ' && vorodi[i] <= '9' && vorodi[i] >= '0';

    if(vorodi2[0]>='0'&&vorodi2[0]<='9')
    {
        beshmor=1;
    }
    for(int i=0;i<strlen(vorodi2);i++)
    {
        if((vorodi2[i]>='0' && vorodi2[i]<='9') || vorodi2[i]=='.' || vorodi2[i]=='-')
            continue;
        else
            vorodi2[i]=32;
    }

    if(vorodi2[0] == '.')
    {
        for (int i = 0; i < strlen(vorodi2); ++i) {
            if(vorodi2[i] != ' ')
                vorodi2[i] = ' ';
            else
                break;
        }
    }
    if(vorodi2[strlen(vorodi2) - 1] == '.')
    {
        for (int i = strlen(vorodi2) - 1; i >= 0 ; --i) {
                if(vorodi2[i] != ' ')
                    vorodi2[i] = ' ';
                else
                    break;
        }
    }
    for(int i = 1; i < strlen(vorodi2) - 1; i++)
    {
        if(vorodi2[i] == '.' && vorodi2[i + 1] == ' ')
        {
            for (int j = i; i >= 0 ; --j) {
                if(vorodi2[j] != ' ')
                    vorodi2[j] = ' ';
                else
                    break;
            }

        }
        if(vorodi2[i] == '.' && vorodi2[i - 1] == ' ')
        {
            for (int j = i; i < strlen(vorodi2) ; ++j) {
                if(vorodi2[j] != ' ')
                    vorodi2[j] = ' ';
                else
                    break;
            }
        }
    }

    beshmor += vorodi2[0] <= '9' && vorodi2[0] >= '0';
    for(int i = 1; i < strlen(vorodi2); i++)
        beshmor += vorodi2[i - 1] == ' ' && vorodi2[i] <= '9' && vorodi2[i] >= '0';

    double kole_adad[beshmor];
    for(int i=0;i<beshmor;i++)
    {
        kole_adad[i]=-1;
    }
    int index_ma=0;
    int dot_shomar=0;
    const char s[2] = " ";
    char *token;
    token = strtok(vorodi, s);
    while( token != NULL )
    {
        for(int i=0;i<strlen(token);i++)
        {
            if(token[i]=='.' && (token[i-1]>='0' && token[i-1]<='9') && (token[i+1]>='0' && token[i+1]<='9'))
            {
                dot_shomar++;
            }
        }
        long long int dnum=0;
        double fnum=0;
        int flagg=-1;
        if(dot_shomar==1)
        {
            fnum=get_double(token);
            kole_adad[index_ma]=fnum;
            index_ma++;
        }
        if(dot_shomar==0)
        {
            dnum=strToNum(token);
            kole_adad[index_ma]=(double)dnum;
            index_ma++;
        }
        if(dot_shomar>=2)
        {
            kole_adad[index_ma]=-256;
            index_ma++;
        }
        dot_shomar=0;
        token = strtok(NULL, s);
    }

    double answer=largestFloat(kole_adad,beshmor);
    double hii=-1;
    const char d[2] = " ";
    char *token3;
    token3 = strtok(vorodi2, d);
    while( token3 != NULL )
    {
        hii++;
        if(hii==answer)
        {
            if(token3[strlen(token3)-1]=='.')
            {
                for(int i=0;i<strlen(token3)-1;i++)
                {
                    printf("%c",token3[i]);
                }
            }else if(token3[0]=='.')
            {
                for(int i=1;i<strlen(token3);i++)
                {
                    printf("%c",token3[i]);
                }
            }else
                printf("%s",token3);
        }

        token3 = strtok(NULL, d);
    }
    return 0;
}
