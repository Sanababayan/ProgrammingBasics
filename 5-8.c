#include<stdio.h>

int kebab(int k,char kal[50]){
    int t=0;
    for(int a=0;a<k;a++)
        {
            if(kal[a]=='-')
            {
                for(int b=0;b<k;b++){
                    if(kal[b]=='-' || (97<=kal[b] && kal[b]<=122)){
                        t++;
                    }
                    else {
                        return 0;
                    }
                }
            }

        }
        if(t > 0)
            return 1;
            return 0;
}

int snake(int k,char kal[50]){
    int t=0;
    for(int a=0;a<k;a++)
        {
            if(kal[a]=='_')
            {
                for(int b=0;b<k;b++){
                    if(kal[b]=='_' || ('a'<=kal[b] && kal[b]<='z')){
                        t++;
                    }
                    else {
                        return 0;
                    }
                }

            }
        }
        if(t > 0)
                return 1;
                return 0;

}

int paskal(int k,char kal[50]){
    int t = 0;
    if('A'<=kal[0] && kal[0]<='Z'){
        for(int b=0;b<k;b++){
            if((97<=kal[b] && kal[b]<=122) || (65<=kal[b] && kal[b]<=90)){
                t++;
            }
        }
    }
    if(t==k)
        return 1;
    else
        return 0;
}

int camel(int k,char kal[50]){
    int q = 0,t = 0;
    if(97<=kal[0] && kal[0]<=122){
        for(int b=0;b<k;b++){
            if((97<=kal[b] && kal[b]<=122)){
                t++;
            }
            if(65<=kal[b] && kal[b]<=90){
                t++;
                q++;
            }
        }
    }
    if(t==k && q!=0)
        return 1;
    else
        return 0;
}

int main()
{
    int n,k,ke,sn,ca,no,pa;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
        {
        scanf("%d ",&k);
        char kal[k+1];
        gets(kal);
        sn=snake(k,kal);
        ke=kebab(k,kal);
        ca=camel(k,kal);
        pa=paskal(k,kal);
        if(sn==1){
            printf("snake_case\n");
        }else if(ke==1){
            printf("kebab-case\n");
        }else if(ca==1){
            printf("camelCase\n");
        }else if(pa==1){
            printf("PascalCase\n");
        }else{
            printf("Undefined Case Style\n");
        }
        }
    return 0;
}
