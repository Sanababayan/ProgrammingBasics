#include<stdio.h>

int main(){
    int n,a;
    char c,d;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
   scanf("%d\n",&a);
   char str1[a+1];
   //gets(str1);
   char str2[a+1];
   //gets(str2);

   for(int i=0;i<a+1;i++){
    scanf("%c",&str1[i]);
   }

   for(int i=0;i<a+1;i++){
    scanf("%c",&str2[i]);
   }

   for (int i = 0; i < a; ++i)
    {
        for (int j = i + 1; j < a; ++j)
        {
            if (str1[i] > str1[j])
            {
                 char a =  str1[i];
                    str1[i] = str1[j];
                    str1[j] = a;
            }

        }

    }

       for (int i = 0; i < a; ++i)
    {
        for (int j = i + 1; j < a; ++j)
        {
            if (str2[i] > str2[j])
            {
                 char a =  str2[i];
                    str2[i] = str2[j];
                    str2[j] = a;
            }

        }

    }
    int e=0;
    for(int f=0;f<a;f++){
        if(str1[f]!=str2[f]){
            e++;
        }
    }
        if(e!=0){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}
