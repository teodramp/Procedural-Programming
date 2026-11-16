#include <stdio.h>
#include <stdbool.h>
int num;
int Cube(int digit);
int Sum_Cube(int num);
bool Is_Armstrong(int num);
int main(){
    int i;
    for(i=1;  i<1000;  i++){
    if (Is_Armstrong(i)){
        printf("%d\n",i);
    }
    }
return 0;
}

int Cube(int digit){
int prod;
int i;
prod = 1;
for (i=0;i <3;i++){
    prod = prod *digit;
}
return prod;
}
int Sum_Cube(int num){
    int digit1, digit2, digit3;
    digit1=num%10;
    digit2=(num%100)/10;
    digit3 = num/100;
    return Cube(digit1) + Cube(digit2) + Cube(digit3);
}
bool Is_Armstrong(int num){
return Sum_Cube(num)==num;
}
