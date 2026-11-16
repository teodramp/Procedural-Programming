#include <stdio.h>
int main(){
long id;
double salary;
double wage;
double wageh;
int hours;
printf("Dwse ton kwdiko:");
scanf("%ld", &id);
if (id >= 1000) {
        printf("Dwse etisio mistho:", "\n");
    scanf("%lf", &salary);
    wage = salary/52;
}else {
    printf("Dwse ores evdomadas: ", "\n");
        scanf("%d", &hours);
    printf("Dwse mistho ana ora: ", "\n");
        scanf("%lf", &wageh);
        if (hours <=40){
            wage = wageh*hours;
        } else {
            wage = wageh*40 + 1.5*wageh*(hours-40);
        }
}
printf("H amoibi einai: %g", wage);
return 0;
}
