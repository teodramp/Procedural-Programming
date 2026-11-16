#include <stdio.h>
#include <stdbool.h>
bool Valid_Time(int ores, int lepta, int defterolepta);
int main()
{
    int ores;
    int lepta;
    int defterolepta;
    printf("Dwse tis ores: ");
    scanf("%d", &ores);
    printf("Dwse ta lepta: ");
    scanf("%d", &lepta);
    printf("Dwse ta defterolepta: ");
    scanf("%d", &defterolepta);
    if (Valid_Time(ores,lepta,defterolepta))
        printf("Valid: yes");
    else
        printf("Valid: no");
    return 0;
}
bool Valid_Time(int ores, int lepta, int defterolepta){
    if ((ores>=0 && ores<=23)&&(lepta>=0 && lepta<=59)&&(defterolepta>=0&&defterolepta<=59))
        return true;
    else
        return false;
}