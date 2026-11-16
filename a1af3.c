#include <stdio.h>
#include <math.h>
#define CARS 80000
#define rate 0.07
#define limit 160000
int main(){
    long cars, years;
    years=0;
    cars=CARS;
    while (cars<=limit){
        cars= ceil(cars*(1+rate));
        years++;
    }
    printf ("%ld\n",years);
    printf ("%ld\n", cars);
    return 0;
}
