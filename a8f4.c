#include <stdio.h>
#include <stdbool.h>
int MKD (int x, int y);
int EKP (int x, int y);
int main()
{
int x;
int y;
printf("Dwse times: ");
scanf("%d", "%d", &x, &y);
printf("%d", "%d", MKD(x,y), EKP(x,y));
return 0;
}
int EKP(int x, int y){
    bool done = true;
    int i=1
    while (done){ 
        i += 1
        if x%i==0 && y%i==0 
        {
            return i;
        }
    }
}
int EKP(int x, int y){
    int i=MAX(x, y);
    int step = i;
    while (true){ 
        if (i%x==0 && i%y==0) 
        {
            return i;
        }
        i += step;
    }
}