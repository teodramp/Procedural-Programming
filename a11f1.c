#include <stdio.h> 

int main(){
    long plithos;
    double FPA;
    long price;
    printf("Dwse thn timi temaxiou: \n");
    scanf("%ld", &price);
    printf("Dwse to pososto FPA: \n");
    scanf("%lf", &FPA);
    printf("Dwse to plithos twn temaxion: \n");
    scanf("%ld", &plithos);
    printf("To kostos paragelias einai: %lf \n", plithos*(price+price*FPA));
    return 0;
}