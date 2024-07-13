#include "grader.h"
#include<malloc.h>
#include<stdio.h>
#include <string.h>

int cmpName(struct Gift var1,struct Gift var2)
{
char *str1, *str2;
str1 = (char*)malloc(50);
str1=var1.name;
str2 = (char*)malloc(50);
str2=var2.name;
if (strcmp(str1,str2)>0)
   return 1;
else
   return 0;
}

int cmpPrice(struct Gift var1,struct Gift var2)
{
    if(var1.price>var2.price)
        return 1;
    else if(var1.price==var2.price)
    {
        if(var1.id<var2.id)
            return 0;
        else
            return 1;
    }
    else
        return 0;
}

int cmpHeight(struct Gift var1,struct Gift var2)
{
    if(var1.height>var2.height)
        return 1;
    else
        return 0;
}
int cmpWeight(struct Gift var1,struct Gift var2)
{
    if(var1.weight<var2.weight)
        return 1;
    else
        return 0;
}

void sort(int n,Gift arr[], int (*cmp)(Gift,Gift)) {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
        if((*cmp)(arr[j],arr[i])) {
                Gift temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

}
