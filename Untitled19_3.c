#include<stdio.h>

int main(){
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,ab,bc,cd,da,mab,mbc,mcd,mda,ac,bd;
    scanf("%d %d",&Ax,&Ay);
    scanf("%d %d",&Bx,&By);
    scanf("%d %d",&Cx,&Cy);
    scanf("%d %d",&Dx,&Dy);
    ab=(Ax-Bx)*(Ax-Bx) + (Ay-By)*(Ay-By);
    bc=(Cx-Bx)*(Cx-Bx) + (Cy-By)*(Cy-By);
    cd=(Cx-Dx)*(Cx-Dx) + (Cy-Dy)*(Cy-Dy);
    da=(Ax-Dx)*(Ax-Dx) + (Ay-Dy)*(Ay-Dy);
    ac=(Ax-Cx)*(Ax-Cx) + (Ay-Cy)*(Ay-Cy);
    bd=(Bx-Dx)*(Bx-Dx) + (By-Dy)*(By-Dy);


    if(ab==cd && bc==da && ab!=bc)
 {  if (ac==bd)
        printf("Rectangle");
    else
        printf("Parallelogram");}


    else if((ab==bc)&& (cd==da) &&(ab==cd))
 {  if (ac==bd)
        printf("Square");
    else
        printf("Diamond");}


    else if(((ab==bc && da==cd && ab!=da) || (ab==da && bc==cd && ab!=bc)) && (ac != bd))
        printf("Kite");


    else
        printf("None");


   /* printf("%d   %d      %d  %d",ab,bc,cd,da);
    if((ab==bc)&& (cd==da) &&(ab==cd))
 {  if (ac==bd)
        printf("Square");
    else
        printf("Diamond");}*/
  return 0;
}














