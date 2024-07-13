#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
int countDigit(long long int n)
{
	if (n == 0)
		return 1;
	int count = 0;
	while (n != 0)
    {
		n = n / 10;
		++count;
	}
	return count;
}
char input[1000000];
int size=-1;
char z1[1000000];
char z2[1000000];
char z3[1000000];

void creation();
void deposit();
void withdraw();
void bal();
void info();
void transfer();
void batchreg();
//void recent();
long long int a=0;
long long int accnumber=1000000000;
struct bank
{
    long long int no;
    char name[80];
    long long int dep;
}s[1000000];

int main()
{
    while(1)
    {
        char command[200];
        memset(command,0,200);
        fgets(input, 1000000, stdin);
//        char ch='\0';
        size=-1;
        for(int i=0;i<200;i++)
        {
            if(input[i]!=' ' && input[i]!='\n')
            {
                command[i]=input[i];
                size++;
            }
            else
                break;
        }
        if(strcmp(command,"register")==0)
            creation();
        else if(strcmp(command,"deposit")==0)
            deposit();
        else if(strcmp(command,"withdraw")==0)
            withdraw();
        else if(strcmp(command,"balance")==0)
            bal();
        else if(strcmp(command,"transfer")==0)
            transfer();
        else if(strcmp(command,"info")==0)
            info();
        else if(strcmp(command,"batchreg")==0)
            batchreg();
        //else if(strcmp(command,"recent")==0)
           // ch='8';
        else if(command[0]=='e' && command[1]=='x' && command[2]=='i' && command[3]=='t' && command[4]=='\0')
            return 0;
        else
            printf("Invalid input\n");
//        switch(ch)
//        {
//            case '1':
//               break;
//           case '2':
//               break;
//           case '3':
//               break;
//           case '4':
//               break;
//           case '5':
//               break;
//           case '6':
//               break;
//           case '7': ////////
//               break;
//              //case '8': recent();////////
//                 //          break;
//           case '9':
//           default :
//               printf("Invalid input\n");
//               break;
//        }
    }
}

void creation()
{
    long long int no=0;
    s[a].no = accnumber;
    char name[80];
    memset(name,0,80);
    int time=0;
    for(int i=size+2;i<=79+size;i++)
    {
        if(input[i]!='\n')
        {
            if(input[i]==' ')
            {
                time=1;
            }
            s[a].name[i-size-2]=input[i];
        }
        else
        break;
    }
    /*for(int i=0;i<35;i++)
    {
        s[a].name[i]=name[i];
    }*/
    if(time!=1)
        printf("Invalid input\n");
    else
    {
        printf("Account number: %lld\n",accnumber);
        s[a].dep=0;
        accnumber++;
        a++;
    }
}
void deposit()
{
    long long int b = 0, m = -1;
    int fg = -1;
    long long int no = 0;
    long long int aa = 0;
    for(int i = size + 2; i <= strlen(input); i++)
    {
        z1[i - size - 2] = input[i];
    }
    //printf("\n<%s>\n", z1);
    no=strToNum(z1);
    long long int jafar = 0;
    int dg = 0;
    if(no < 0)
    {
        jafar = -1 * no;
        dg=countDigit(jafar) + 1;
    }
    else
    {
        jafar=no;
        dg=countDigit(jafar);
    }
    int time = 0;
    for(int i = dg + size + 3; i <= strlen(input); i++)
    {
        z2[i - dg - size - 3] = input[i];
    }
    //char *endPtr;
    //aa=(long long int)strtoull(z2,endPtr,10);
    aa = strToNum(z2);
    /*for(int i=0;i<=strlen(z2);i++)
    {
    if(z2[i]>='0' && z2[i]<='9')
    {
    aa=(long long int)aa*10+(long long int)(z2[i]-'0');
    }
    }
    if(z2[0]=='-')
    aa=aa*-1;*/
    if(aa <= 0)
        printf("Invalid amount\n");
    else
    {
        for(b = 0; b < a; b++)
        {
            if(s[b].no == no)
            {
                m = b;
                break;
            }
        }
        if(m != -1)
        {
            s[m].dep+=aa;
            printf("Success\n");
        }
        else
        {
            printf("Invalid account number\n");
        }
    }
}
void withdraw()
{
    long long int b=0,m=-1;
    int fg=-1;
    long long int no=0;
    long long int aa=0;
    memset(z1,0,1000000);
    for(int i=size+2;i<=strlen(input);i++)
    {
        if(input[i]==' ')
        break;
        z1[i-size-2]=input[i];
    }
    no=strToNum(z1);
    long long int jafar=0;
    if(no<0)
    {
        jafar=-1*no;
        fg=countDigit(jafar)+1;
    }
    else
    {
        jafar =no;
        fg=countDigit(jafar);
    }
    for(int i=size+fg+3;i<=strlen(input);i++)
    {
        if(input[i]>='0' && input[i]<='9')
        {
            aa=(long long int)aa*10+(long long int)(input[i]-'0');
        }
    }
    if(input[size+fg+3]=='-')
        aa=aa*-1;
    if(aa <= 0)
        printf("Invalid amount\n");
    else
    {
        for(b = 0; b < a; b++)
        {
            if(s[b].no == no)
            {
                m = b;
            }
        }
        if(m != -1)
        {
            s[m].dep-=aa;
            if(s[m].dep>=0)
                printf("Success\n");
            else
            {
                printf("Not enough balance\n");
                s[m].dep+=aa;
            }
        }
        else
        {
            printf("Invalid account number\n");
        }
    }
}
void bal()
{
    int b=0,m=-1;
    long long int no=0;
    long long int aa=0;
    for(int i = size + 2; i <= strlen(input); i++)
    {
        z1[i-size-2]=input[i];
    }
    no= strToNum(z1);
    for(int j = 0; j <= a; j++)
    {
        if(s[j].no == 0)
        {
            s[j].no = -2468;
        }
    }
    for(b = 0; b <= a; b++)
    {
        if(s[b].no == no)
            m = b;
    }
    if(m != -1)
    {
        printf("$%lld\n",s[m].dep);
    }
    else
    {
        printf("Invalid account number\n");
    }
}
void info()
{
    int b=0,m=-1;
    long long int no=0;
    long long int aa=0;
    for(int i = size + 2; i <= strlen(input); i++)
    {
        z1[i - size - 2] = input[i];
    }
    no=strToNum(z1);
    for(int j = 0; j <= a; j++)
    {
        if(s[j].no == 0)
        {
            s[j].no = -2468;
        }
    }
    for(b = 0; b <= a; b++)
    {
        if(s[b].no == no)
        {
            m = b;
        }
    }
    if(m != -1)
    {
        printf("%s\n$%lld\n", s[m].name, s[m].dep);
    }
    else
    {
        printf("Invalid account number\n");
    }
}
void transfer()
{
    int b = 0, m = -1, z = -1;
    long long int sender, receiver;
    long long int aa = 0;
    for(int i = size + 2; i < 50; i++)
    {
        z1[i - size - 2] = input[i];
    }
    sender = strToNum(z1);
    long long int jafar1 = 0;
    int fg = 0;
    if(sender<0)
    {
        jafar1 = -1 * sender;
        fg=countDigit(jafar1) + 1;
    }
    else
    {
        jafar1 = sender;
        fg = countDigit(jafar1);
    }
    int time=0;
    for(int i = fg + size + 3; i < 50; i++)
    {
        z2[i - fg - size - 3] = input[i];
    }
    receiver=strToNum(z2);
    long long int jafar2 = receiver;
    int fgii = 0;
    if(receiver < 0)
    {
        jafar2 = -1 * receiver;
        fgii=countDigit(jafar2) + 1;
    }
    else
    {
        fgii=countDigit(jafar2);
    }
    for(int i = fg + size + fgii + 4; i < 50; i++)
    {
        z3[i - fg - 4 - size - fgii] = input[i];
    }
    aa=strToNum(z3);
    if(aa<=0)
        printf("Invalid amount\n");
    else
    {
        for(b = 0; b < a; b++)
        {
            if(s[b].no == sender)
            {
                m = b;
                break;
            }
        }
        if(m == -1)
        {
            printf("Invalid sender account number\n");
        }
        else
        {
            b=0;
            for(b=0;b<a;b++)
            {
                if(s[b].no == receiver)
                {
                    z = b;
                    break;
                }
            }
            if(z == -1)
            {
                printf("Invalid receiver account number\n");
            }
            else
            {
                if(aa<500000)
                {
                    s[m].dep-=(aa+600);
                    s[z].dep+=aa;
                    if(s[m].dep<0)
                    {
                        printf("Not enough balance\n");
                        s[m].dep += (aa + 600);
                        s[z].dep -= aa;
                    }
                    else
                        printf("Success\n");
                }
                else if(aa < 4000000)
                {
                    s[m].dep -= (aa + 800);
                    s[z].dep += aa;
                    if(s[m].dep < 0)
                    {
                        printf("Not enough balance\n");
                        s[m].dep += (aa + 800);
                        s[z].dep -= aa;
                    }
                    else
                        printf("Success\n");
                }
                else
                {
                    s[m].dep -= (aa + 1200);
                    s[z].dep += aa;
                    if(s[m].dep < 0)
                    {
                        printf("Not enough balance\n");
                        s[m].dep += (aa + 1200);
                        s[z].dep -= aa;
                    }
                    else
                        printf("Success\n");
                }
            }
        }
    }
}
void batchreg()
{
    long long int no=0;
    long long int n=0;
    s[a].no = accnumber;
    long long int nc=0;
    char name[80];
    int c=0;
    for(int i=size+2;i<=80+size;i++)
    {
        if(input[i]>='0' && input[i]<='9')
        {
            break;
        }
        else
        {
            s[a].name[i-size-2]=input[i];
            c++;
        }
    }
    s[a].name[strlen(s[a].name)-1]='\0';
    /*for(int i=0;i<strlen(name)-1;i++)
    {
    s[a].name[i]=name[i];
    }*///printf("<%c>\n",input[c+size+1]);
    for (int count =0;count<=strlen(input); count++)
    {
        if ((input[count] >= '0') && (input[count] <= '9'))
        {
            nc += 1;
            n = (input[count] - '0')+(long long int)n*10;
        }
    }
    //printf("n=%lld",n);
    for(int q=a;q<a+n;q++)
    {
        for(int i=0;i<strlen(s[a].name);i++)
        {
            s[q].name[i]=s[a].name[i];
        }
        s[q].dep=0;
        s[q].no=accnumber;
        accnumber++;
    }
    printf("Account numbers: %lld-%lld\n",accnumber-n,accnumber-1);
    a=a+n;
}
/*void recent()
{

   int b=0,m=0;
   long long int no;
   long long int aa;
   for(int i=size+2;i<1000000;i++)
             {
                 int time=0;
                 if(input[i]!=' ' && time<=1)
                    {
                        z1[i-size-2]=input[i];
                    }
                 else
                    time++;
             }
             no=strToNum(z1);
             for(int j=0;j<=a;j++)
             {
                 if(s[j].no==0)
                 {
                     s[j].no=-2468;
                 }
             }
   for(b=0;b<=a;b++)
       {
            if(s[b].no == no)
              {m = b;
              }
       }
            if(s[m].no!=no){
                     printf("Invalid account number\n");
               }else
               {
                   printf("Invalid input!\n");
               }
}*/
