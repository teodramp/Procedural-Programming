#include <stdio.h>
int main(){
int M1, N1, M2, N2;
long A[50][50];
long B[50][50];
printf("Dwse to plhthos twn grammwn m1: ");
scanf("%d", &M1);
printf("Dwse to plhthos twn sthlwn n1: ");
scanf("%d", &N1);
printf("Dwse to plhthos twn grammwn m2: ");
scanf("%d", &M2);
printf("Dwse to plhthos twn sthlwn n2: ");
scanf("%d", &N2);
for (int i=0; i<M1; i++){
    for (int j=0; j<N1; j++){
        scanf("%ld", &A[i][j]);
    }
}
for (int i=0; i<M2; i++){
    for (int j=0; j<N2; j++){
        scanf("%ld", &B[i][j]);
    }
}
if (M1==M2 && N1==N2){
    for (int i=0; i<M1; i++){
        for (int j=0; j<N1; j++)
            printf("%ld ", A[i][j]+B[i][j]);
        printf("\n");
    }
     for (int i=0; i<M1; i++){
        for (int j=0; j<N1; j++)
            printf("%ld ", A[i][j]-B[i][j]);
        printf("\n");
    }
}else
    printf("ERROR +\nERROR -\n");
if (N1 == M2){
    for (int i=0; i<M1; i++){
    for (int j=0; j<N2; j++){
        long sum = 0;
        for (int k=0; k<N1; k++)
            sum += A[i][k]*B[k][j];
        printf("%ld ", sum);
        }
    printf("\n");
}
}else
    printf("ERROR *");
return 0;
}
