#include<stdio.h>

int main(){
    int n,k,x,y,z,det,tedad;
    tedad=0;
    scanf("%d %d\n",&n,&k);
    int bor[n][3];
    int bor1[3];
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&x,&y,&z);
        bor1[0]=x;
        bor1[1]=y;
        bor1[2]=z;
        bor[i][0]=bor1[0];
        bor[i][1]=bor1[1];
        bor[i][2]=bor1[2];
    }
    for(int i=0;i<n;i++){
            int j=i+1;
        for(j;j<n;j++){
            int d=j+1;
            for(d;d<n;d++){
                int ms[3][3];
                ms[0][0]=bor[i][0];
                ms[0][1]=bor[i][1];
                ms[0][2]=bor[i][2];
                ms[1][0]=bor[j][0];
                ms[1][1]=bor[j][1];
                ms[1][2]=bor[j][2];
                ms[2][0]=bor[d][0];
                ms[2][1]=bor[d][1];
                ms[2][2]=bor[d][2];
                det=(ms[0][0] * ((ms[1][1]*ms[2][2]) - (ms[2][1]*ms[1][2]))) - (ms[0][1] * ((ms[1][0]* ms[2][2]) - (ms[2][0] * ms[1][2]))) + (ms[0][2] * ((ms[1][0] * ms[2][1]) - (ms[2][0] * ms[1][1])));
            if(det>k || (-1*det)>k){
                tedad++;
            }
            }
        }
    }
    printf("%d",tedad);
    return 0;
}
