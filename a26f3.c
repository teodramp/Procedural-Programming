#include <stdio.h>

int main(){
    int num;
    int sum = 0;
    printf("Num: ");
    scanf("%d", &num);
    for (int i = 1; i <num; i++) {
        if (num%i==0){
            sum += i;
        }
    }
    printf("Sum: %d", sum);
return 0;
}
