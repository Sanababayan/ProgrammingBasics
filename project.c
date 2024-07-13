#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool is_enter_pressed = false , khod1 = false;
int al = 1 , help = 1;
//int zarayeb[10] , tavan[10] , awe[10] ,i = 0 , j = 0 , k = 0;

int zarib(){
    char a,b;
    int z=0;
    scanf("%c",&a);
    z=a-'0';
    if(a=='x'){
        z=1;
    }else{
	   if (a == '-')
	   {
		   al = -1;
		   scanf("%c" , &a);
		   z = a - '0';
	   }
        while(a != ' '){
            scanf("%c",&b);
	    if (b == 10)
		    is_enter_pressed = true;
            if(b == 10 || b == 32){
                break;
            }else{
            z=z*10+(b-'0');
            }a=b;
        }
	if (z == 1)
		khod1 = true;
  }return z * al;
}

long long int chand(int x,long long int A1){
    long long int awe;
    int powernum;
    char mul,y,p,alamat,gh;
  //  printf("%lld\n" , A1);
   // zarayeb[i] = A1;
   // i++;
    // 1 * x ^ 4
    if(A1 == 1 && khod1 == false){
        scanf(" %c ",&gh);
	al = 1;
        powernum=(int)zarib();
	khod1 = false;
        awe=help* (long long int)pow(x,powernum);
    }else{
        scanf("%c %c %c ",&mul,&y,&p);
	al = 1;
        powernum=(int)zarib();
	khod1 = false;
        long long int z=1;
        for(int i=0;i<powernum;i++){
            z=x*z;
        }
        awe= help*A1 * z;
//	printf("%lld\n" , awe);
    }
   // tavan[j] = powernum;
  //  j++;
    if (is_enter_pressed == false)
    {
    scanf("%c ",&alamat);
    if(alamat == '+'){
	    help = +1;
        long long int c = (long long int)zarib();
        awe = awe + chand(x,c);
    }
    else if(alamat == '-'){
	    help = -1;
        long long int d = (long long int)zarib();
        awe = awe + chand(x,d);
    }
}
return awe;
}
int main(){
    int x;
    long long int b;
    scanf("%d\n",&x);
    b=(long long int)zarib();
   // printf("%lld\n" , b);
    printf("%lld",chand(x,b));
    return 0;
}
