#include<stdio.h>
#include <stdlib.h>

int* all_ptr;
int* ptr;
long long int indexx=0;
long long int range=0;
int l=0;

static int myCompare(const void* a, const void* b)
{
    //return strcmp(*(const char**)a, *(const char**)b);
    int* aa=(int*)a;
    int* bb=(int*)b;
    for(int j=0; j<l; j++){
            if(*(aa+j)>*(bb+j))
                return 1;
            if(*(aa + j)<*(bb+j))
                return -1;
  }
  return 0;
}

void sort(long long range)
{
    qsort(all_ptr, range, sizeof(int)*l, myCompare);
}


void printarray(int *arr, int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        printf("%c",*(arr+i));
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permutation(int* arr, int start, int end)
{
    if(start==end)
    {
        //printarray(arr, l);
        for(int i=0;i<l;i++)
        {
            *(all_ptr+indexx*l+i) = *(arr+i);
        }

    indexx++;
        return;
    }
    int i;
    for(i=start;i<=end;i++)
    {
        swap((arr+start),(arr+i) );
        permutation(arr, start+1, end);
        swap( (arr+start),(arr+i));
    }
}

long long int factorial(int n)
{
    long long int fact=1;
    for(int i=1;i<=n;i++){
      fact=(long long int)fact*i;
  }
  return fact;
}

static int compare(const void *va, const void *vb)
{
    const int * const *pa = va, * const *pb = vb;
    int a = **pa, b = **pb;
    return
        a <  b ? -1 :
        a == b ?  0 :
                 +1;
}


int main()
{
    int left,right,to,from,vorodi;
    scanf("%d",&l);
    ptr = (int*)malloc(l * sizeof(int));
    if (ptr != NULL) {
        for (int i = 0; i < l; ++i) {
            scanf("%d",&vorodi);
            *(ptr+i)=vorodi;
        }
    }
    scanf("%d %d",&left,&right);
    range=(long long int)(right-left+1);
    range=factorial(range);
    if(right < left || left>l || right>l)
    {
        printf("index out of bounds");
    }else
    {
        scanf("%d %d",&from,&to);
        if(from>to || to>range)
        {
            printf("index out of bounds");
        }else
        {
            all_ptr=(int*)malloc(range*l*sizeof(int));
            permutation(ptr, left-1, right-1);
            sort(range);
            for(int i=(from-1)*l;i<(to-1)*l;i++)
            {
                if(i%l==0 && i != 0)
                    printf("\n");
                printf("%c",*(all_ptr+i));
            }
        }}
    return 0;
}
