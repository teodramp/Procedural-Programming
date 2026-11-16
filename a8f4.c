#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int MKD (int x, int y);
int EKP (int x, int y);
int main()
{
int x;
int y;
printf("Dwse times: ");
scanf("%d %d", &x, &y);
printf("%d %d", MKD(abs(x),abs(y)), EKP(abs(x),abs(y)));
return 0;
}
int MKD (int x, int y){
    if (x==0 || y==0)
        return MAX(x,y);
    else if (x > y)
        return MKD(x-y,y);
    else 
        return MKD(x,y-x);
}
int EKP(int x, int y){
    if (x==0 || y==0)
        return 0;
    int i=MAX(x, y);
    int step = i;
    while (true){ 
        if (i%x==0 && i%y==0) 
            return i;
        i += step;
    }
}