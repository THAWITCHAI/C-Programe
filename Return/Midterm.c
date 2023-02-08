
#include <stdio.h>
#define size 50

typedef struct football{
    char name[50], date[50], position[50], team[50], citizenship[50];
    
}football;
football info[5];

int main(){
    printf("--------------Input Data Soccer Player--------------\n");
    for(int i=0; i<2; i++){
        printf("Input Name Scccer Player :");
        scanf("%s",&info[i].name);
        printf("Input Date of Birth :");
        scanf("%s",&info[i].date);
        printf("Input Citizenship :");
        scanf("%s",&info[i].citizenship);
        printf("Input Position :");
        scanf("%s",&info[i].position);
        printf("Input Team :");
        scanf("%s",&info[i].team);
        printf("----------------------------------------------------\n");
    }
    printf("--------------Shows Data Soccer Player--------------\n");
    for(int i=0 ; i<2; i++){
        printf("Soccer Name: %s\n",info[i].name);
        printf("Date of Birth: %s\n",info[i].date);
        printf("Citizenship: %s\n",info[i].citizenship);
        printf("Position: %s\n",info[i].position);
        printf("Team: %s\n",info[i].team);
        printf("----------------------------------------------------\n");
    }
    return 0;
}
