#include <stdio.h>
#include <math.h>
int main()
{
    long Arithmo_Aytok;
    double Rythmos;
    long Orio;
    long years=0;
    printf("Dwse ton arxiko arithmo aytokinitwn: ");
    scanf("%ld", &Arithmo_Aytok);
    printf("Dwse ton ethsio rythmo: ");
    scanf("%lf", &Rythmos);
    printf("Dwse to orio: ");
    scanf("%ld", &Orio);
    while (Arithmo_Aytok<=Orio){
        Arithmo_Aytok =ceil(Arithmo_Aytok*(1+Rythmos));
        years++;
    }
printf("%ld\n", years);
printf("%ld\n", Arithmo_Aytok);
return 0;
}