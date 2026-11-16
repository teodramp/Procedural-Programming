#include <stdio.h>
#include <math.h>
int main()
{
    int code;
    int atoma;
    long kostos;
    long esoda=0;
    do {
    printf("Dwse kwdiko: ");
    scanf("%d", &code);
        switch (code){
            case 1:
                printf("Dwse arithmo atomwn: ");
                scanf("%d", &atoma);
                if (atoma > 10){
                    kostos = ceil((350*atoma)*0.9);
                }
                else {
                    kostos = atoma*350;
                }
                printf("Kostos: %ld\n", kostos);
                esoda += kostos;
            break;
            case 2:
                printf("Kerdos: %ld", esoda - 20000);
            break;
            default:
            printf("Lathos\n");
            }
    }
    while (code != 2);
    return 0;
}