#include <stdio.h>  
int main() {
    typedef struct liverpool{
        char name_soccer[50], position[50];
        int spirit;
    }liverpool;
    liverpool data[50];
    int top = 0;
    for (int i=0; i<2; i++){
        printf("---------------Input Data Soccer-----------\n");
        printf("Input Name Soccer :");
        gets(data[i].name_soccer);
        printf("Inut Position :");
        gets(data[i].position);
        printf("Input Spirit :");
        scanf("%d",&data[i].spirit);
        getc(stdin);
        printf("-------------------------------------------\n");
        printf("---------------------Show Data-------------\n");
        printf("Name Soccer : %s\n",data[i].name_soccer);
        printf("Position : %s\n",data[i].position);
        printf("Spirit : %d\n",data[i].spirit);
        printf("-------------------------------------------\n");
    }
        return 0;

    }









    