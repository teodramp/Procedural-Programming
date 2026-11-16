#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int realtime;
    int forecast;
    int approvedtime;
    printf("Dwse problepomeno xrono: ");
    scanf("%d", &forecast);
    printf("Dwse pragmatiko xrono: ");
    scanf("%d", &realtime);

    if (forecast >=0 && forecast <=29) {
        printf("apodekti diafora: 1\n");
        approvedtime = 1;
    }
    else if (forecast >=30 && forecast <=59) {
        printf("apodekti diafora: 2\n");
                approvedtime = 2;
    }
    else if (forecast >=60 && forecast <=89) {
        printf("apodekti diafora: 3\n");
        approvedtime = 3;

    }
    else if (forecast >=90 && forecast <=119) {
        printf("apodekti diafora: 4\n");
        approvedtime = 4;
    }
    else if (forecast >=120 && forecast <=179) {
        printf("apodekti diafora: 6\n");
        approvedtime = 6;
    }
    else if (forecast >=180 && forecast <=239) {
        approvedtime = 8;
        printf("apodekti diafora: 8\n");
    }
    else if (forecast >=240 && forecast <=359) {
        approvedtime = 13;
        printf("apodekti diafora: 13\n");
    }
    else if (forecast >=360) {
        printf("apodekti diafora: 17\n");
        approvedtime = 17;
    }
    printf ("diafora eisodou: %d\n", forecast-realtime);
    if (abs(realtime-forecast)<=approvedtime){
        printf("GOOD");
    }
    else if (realtime-forecast<0){
        printf("BIG");
    }
    else {
        printf("SMALL");
    }

return 0;
}