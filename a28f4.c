#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int get_code();
int product_points(int code,float price);
float discount_percentage(int code);
int main()
{
    int code;
    float sum = 0;
    float price;
    float finalprice;
    float discountp;
    float dissum = 0;
    int points = 0;
    do{
    code = get_code();
    if (code!=0){
    printf("Dwse tin timh: ");
    scanf("%f", &price);
    discountp = discount_percentage(code);
    finalprice = price - price*discountp;
    dissum += price*discountp;
    sum += finalprice;
    points += product_points(code,finalprice);
    }
    }while(code != 0);
    printf("-----------------------------\n");
    printf("Teliko synolo: %.2f Euro\n", sum);
    printf("Ekptwsh: %.2f Euro\n", dissum);
    printf("Pontoi: %d", points);
    return 0;
}
int get_code(){
    int code;
    do{
    printf("Dwse ton kwdiko: ");
    scanf("%d", &code);
    if (code<0 || code>2000)
    {
        printf("Lathos Kwdikos (0-2000)\n");
    }
    } while (code >2000 || code<0 );
    return code;
}
float discount_percentage(int code){
if (code >=1 && code <=300)
    return 0.05;
else if (code<=500)
    return 0.10;
else if (code<=1000)
    return 0.15;
else if (code<=2000)
    return 0.20;
}

int product_points(int code,float price){
    int points = 0;
    points = points + 1;
    if (code>1000 && code <=1500){
        points = points + ceil(price/5);
    }
    return points;
}
