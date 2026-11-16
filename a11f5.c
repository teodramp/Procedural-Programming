#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
double temp;
double sum = 0;
double sumall = 0;
int i;
int j;
double navg;
double MO[10];
double AP[10];
double TEMPS[10][3];
    for (i = 0; i<=9; i++) {
    sum = 0;
      for (j=0; j <3; j++) {
        printf("Temp of City %d During %d 8-hour period: ", i, j);
        scanf("%lf", &temp);
        sum += temp;
        sumall += temp;
        TEMPS[i][j] = temp;
      }
      MO[i]= sum/3.0;
    }
    navg = sumall/30;
printf("%.1f \n", navg);
for (i=0; i<10; i++){
  AP[i]= fabs(TEMPS[i][1]-navg);
  for (j=1; j<3; j++) {
    if (fabs(TEMPS[i][j]-navg)>AP[i])
        AP[i]= fabs(TEMPS[i][j]-navg);
  }
}
  for (i=0; i<=9; i++) {
    printf("City %d %.1f %.1f \n",i, MO[i], AP[i]);
  }
  return 0;
}
