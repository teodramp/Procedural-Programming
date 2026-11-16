#include <stdio.h>
int f(int a);
int g(int a, int b);
int main(){
int x,y;
printf("Enter x: ");
scanf("%d", &x);
printf("Enter y: ");
scanf("%d", &y);
printf("f(x) = f(%d) = %d\n", x, f(x));
printf("g(x,y) = g(%d,%d) = %d\n", x, y, g(x,y));
printf("f(g(x,y)) = f(g(%d,%d)) = %d", x, y, f(g(x,y)));
return 0;
}
int f(int a){
if (a>0)
    return (a+2);
else
    return (-3*a+7);
}
int g(int a, int b){
if ( a>0 && b >0)
    return(a-b);
else
    return (7*a-5);
}
