#include <stdio.h>
#define size 2

typedef struct student{
    char name[50], position[5];
}student;
student info[size];
int top = 0;

void push();
void show();

int main(){
    int choice;
    do{
        printf("|----------------------------------|\n");
        printf("|---- Press Enter to continue. ----|\n");
        printf("|----------------------------------|\n");
        getc(stdin);
        printf("\n");
        printf("|-----------------------|\n");
        printf("|---- Select Choice ----|\n");
        printf("|-----------------------|\n");
        printf("1.Show data soccer\n");
        printf("2.Input data soccer\n");;
        printf("3.Exit\n");
        printf("-------------------------\n");
        printf("| select => ");
        scanf("%d",&choice);
        getc(stdin);
        printf("-------------------------\n");
        printf("\n");
        
        switch (choice)
        {
        case 1: printf("|-----------------------|\n");
                printf("|--- Show data soccer --|\n");
                printf("|-----------------------|\n");
                printf("\n");
                // printf("-------------------------\n");
                show();
                break;               
        case 2: printf("|-----------------------------|\n");
                printf("|-- Input Data soccer Pleass -|\n");
                printf("|-----------------------------|\n");
                push();
                break;    
        case 3: printf("|-----------------------|\n");
                printf("|---- Exit Program  ----|\n");
                printf("|-----------------------|\n");
                break;
        default:printf("|------------- Enter numbers 1-2 only! -------------|\n");
                printf("\n");
            break;
        }

    } while (choice!=3);
    
    return 0;
}


void push(){
if (top==size){
    printf("|-----------------------|\n");
    printf("|------ Data Full! -----|\n");
    printf("|-----------------------|\n");
    printf("\n");
}else{
    printf("-------------------------\n");
    printf("Push Name Soccer =>");
    gets(info[top].name);
    printf("Push position =>");
    gets(info[top].position);
    printf("-------------------------\n");
    printf("\n");
    top ++ ;
}


};


void show(){
    if(top==0){
        printf("|-----------------------|\n");
        printf("|---- Data is Empty! ---|\n");
        printf("|-----------------------|\n");
        printf("\n");
    }else{
        for (int i = 0; i <top; i++){
            // printf("-------------------------\n");
            printf("Name is => %s\n",info[i].name);
            printf("Position is => %s\n",info[i].position);
            printf("-------------------------\n");
            
            
        }
        
    }
    printf("\n");
}