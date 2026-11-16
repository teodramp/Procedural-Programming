#include <stdio.h> 

int main(){
    double synolo;
    long temp;
    printf("Dwse tis synolikes eispraxeis gia FPA 0.04: \n");
    scanf("%ld", &temp);
    synolo = temp*0.04;
    printf("Dwse tis synolikes eispraxeis gia FPA 0.08: \n");
    scanf("%ld", &temp);
    synolo += temp*0.08;
    printf("Dwse tis synolikes eispraxeis gia FPA 0.18: \n");
    scanf("%ld", &temp);
    synolo += temp*0.18;
    printf("To synoliko poso gia FPA einai: %lf \n", synolo);
    return 0;
}