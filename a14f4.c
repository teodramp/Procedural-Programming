#include <stdio.h>
int max(int a,int b);
int gr(int a,int b,int c);
int main()
{
    int a;
    int b;
    int c;
    double y;
    printf("Dwse a: ");
    scanf("%d", &a);
    printf("Dwse b: ");
    scanf("%d", &b);
    printf("Dwse c: ");
    scanf("%d", &c);
    y=(2*max(a,b) + 3*gr(a,b,c))/4.0;
    printf("y = %.2f", y);
    return 0;
}
int max(int a,int b){
    if (a>b)
        return a;
    else if (b>a)
        return b;
    else
        return a;
}
int gr(int a,int b,int c){
    if (a>b && a>c)
        return a;
    else if (b>a && b>c)
        return b;
    else if (c>a && c>b)
        return c;
    else 
        return max(a,b);
}
