#include<stdio.h>
#define size 5

struct stack
{
    char name[20];
    int id;
};  

struct stack info[size];
int top = 0;

void show();
void push();
void pop();

int main(){
    int choice;
    do{
        printf("--------------Select choice------------\n");
        printf("1. Show data Book\n");
        printf("2. Push data Book\n");
        printf("3. Pop data Book\n");
        printf("4. Exit\n");
        printf("----------------------------------------\n");
        printf("Select Choice => ");
        scanf("%d",&choice);
        printf("----------------------------------------\n");
        switch (choice){
            case 1 :
                    show();
                    printf("-------------------------------------------------------------------\n");
                    break;
            case 2 :
                    printf("Push data Book\n");
                    push();
                    printf("-------------------------------------------------------------------\n");
                    break;
            case 3 :
                    printf("Pop data Book\n");
                    pop();
                    printf("-------------------------------------------------------------------\n");
            case 4 :
                    printf("Exit\n");
                    printf("-------------------------------------------------------------------\n");
                    break;
            default :
                     printf("-------------------------------------------------------------------\n");
                     printf("Choose menu 1-4 only!!!");
        }
            if (choice!=4){
                getc(stdin);
                printf("Plesse Enter To Continue!\n");
                getchar();
            }
        
    } while (choice!=4);
    return 0;
}

void show(){
    if(top==0) {
        printf("Book is Empty!\n");
    }else{
        for(int i=0; i<top; i++) {
            printf("---------- Show Book [%d] ----------\n",i);
            printf("Name   => %s\n", info[i].name);
            printf("ID    => %d\n\n", info[i].id);
            printf("-------------------------------------------------------------------\n");
        }
    }
}
void push(){
    if(top==size){
        printf("Book is Overflow!\n");
    }else{
        printf("-------------------------------------------------------------------\n");
        printf("1. Enter nameBook => ");
        scanf("%s",info[top].name);
        printf("3. Enter ID => ");
        scanf("%d",&info[top].id);
        printf("-------------------------------------------------------------------\n");

        top++;    
    }
}
void pop(){
    if(top==0) {
        printf("-------------------------------------------------------------------\n");
        printf("Book is Empty!\n");
        printf("-------------------------------------------------------------------\n");
    }else{
        top--;
        // printf("Delete successfuly!\n");
        printf("-------------Delete successfuly Data friend! [%d]-----------------\n",top);
        printf("Name Book => %s\n",info[top].name);
        printf("ID Book => %d\n",info[top].id);
        printf("-------------------------------------------------------------------\n");
    }
}