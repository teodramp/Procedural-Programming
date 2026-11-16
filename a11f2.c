#include <stdio.h>
int main()
{
    int baros;
    printf("Dwse to baros: ");
    scanf("%d", &baros);
    if (baros >=1 && baros <=20){
        printf("ta taxydromika teli einai: %.2f", 25.0);
    }
    else if (baros >20 && baros <=200){
        printf("ta taxydromika teli einai: %.2f", 60.0);
    }
    else if (baros >200){
        printf("ta taxydromika teli einai: %.2f", 0.4*baros);
    }
return 0;
}
