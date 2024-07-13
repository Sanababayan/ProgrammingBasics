#include<stdio.h>

int main()
{
    int a,b;
    char c,d,e,f,g,h,i,j,k;
    scanf("%d %d \n",&a,&b);
    scanf("%c%c \n",&c,&d);
    scanf("%c%c%c \n",&e,&f,&g);
    scanf("%c%c%c%c",&h,&i,&j,&k);
    int result_12a = (c == 'a' || d == 'a') && (e == 'a'|| f == 'a' || g == 'a');
    int result_12b = (c == 'b' || d == 'b') && (e == 'b'|| f == 'b' || g == 'b');
    int result_12c = (c == 'c' || d == 'c') && (e == 'c'|| f == 'c' || g == 'c');
    int result_12d = (c == 'd' || d == 'd') && (e == 'd'|| f == 'd' || g == 'd');
    int result_12e = (c == 'e' || d == 'e') && (e == 'e'|| f == 'e' || g == 'e');
    int result_12 = result_12a + result_12b + result_12c + result_12d + result_12e;
    int result_13a = (c == 'a' || d == 'a') && (h == 'a'|| i == 'a' || j == 'a' || k == 'a');
    int result_13b = (c == 'b' || d == 'b') && (h == 'b'|| i == 'b' || j == 'b' || k == 'b');
    int result_13c = (c == 'c' || d == 'c') && (h == 'c'|| i == 'c' || j == 'c' || k == 'c');
    int result_13d = (c == 'd' || d == 'd') && (h == 'd'|| i == 'd' || j == 'd' || k == 'd');
    int result_13e = (c == 'e' || d == 'e') && (h == 'e'|| i == 'e' || j == 'e' || k == 'e');
    int result_13 = result_13a + result_13b + result_13c + result_13d + result_13e;
    int result_23a = (h == 'a'|| i == 'a' || j == 'a' || k == 'a') && (e == 'a'|| f == 'a' || g == 'a');
    int result_23b = (h == 'b'|| i == 'b' || j == 'b' || k == 'b') && (e == 'b'|| f == 'b' || g == 'b');
    int result_23c = (h == 'c'|| i == 'c' || j == 'c' || k == 'c') && (e == 'c'|| f == 'c' || g == 'c');
    int result_23d = (h == 'd'|| i == 'd' || j == 'd' || k == 'd') && (e == 'd'|| f == 'd' || g == 'd');
    int result_23e = (h == 'e'|| i == 'e' || j == 'e' || k == 'e') && (e == 'e'|| f == 'e' || g == 'e');
    int result_23 = result_23a + result_23b + result_23c + result_23d + result_23e;
    int r1 = (result_12 % a) == b;
    int r2 = (result_23 % a) == b;
    int r3 = (result_13 % a) == b;
    int rt = r1 + r2 + r3;
    printf("%d",rt);
    return 0;
}
