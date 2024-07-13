#include<stdio.h>

void printRLE(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        int count = 1;
        while (s[i] == s[i + 1])
            {
                i++;
                count++;
            }if(count>1)
            {
                printf("%c%d",s[i],count);
            }else
            {
                printf("%c",s[i]);
            }

        //cout << s[i] << count << " ";
    }

    //cout << endl;
}

int main()
{
    char vorodi[10001];
    memset(vorodi,0,10001);
    gets(vorodi);
    printRLE(vorodi);
    return 0;
}
