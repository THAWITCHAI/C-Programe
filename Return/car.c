#include <stdio.h>
#include <string.h>
int main(){
    int length;
    typedef struct game{
        char name[20];
        int price; 
    }game;
    game game1[3];
    printf("Input Data\n");
    for(int i=0; i<2; i++){
        printf("Enter NameGame:");
        gets(game1[i].name);
        printf("Enter Price Game:");
        scanf("%d",&game1[i].price);
        getc(stdin);
        printf("--------------------------\n");
    }
    for(int i=0; i<2; i++){
        printf("Round[%d]\n",i+1);
        printf("Name Game:%s\n",game1[i].name);
        printf("Price Game:%d\n",game1[i].price);
        length = strlen(game1[i].name);
        for(i=0; game1[i].name != '\0';i++){
            printf("name[%d] => %c\n",i,game1[i].name);
        }
        printf("length of:%d\n",length);
        printf("--------------------------\n");

    }
    return 0;
}