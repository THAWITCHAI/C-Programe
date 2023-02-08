#include<stdio.h>
#define size 5

struct stack
{
    char nick_name[20];
    char study[50];
    int age;
};  

struct stack info[size];
int top = 0;

void show();
void push();
void pop();

int main(){
    int choice;
    do{
        printf("Show data friend\n");
        printf("Push data friend\n");
        printf("Pop data friend\n");
        printf("Exit\n");
        printf("-------------------------------\n");
        printf("Select Choice => ");
        scanf("%d",&choice);
       
        switch (choice){
        case 1 : show();
              break;
        case 2 : printf("Push data friend\n");
                 push();
              break;
        case 3 : printf("Pop data friend\n");
                 pop();
              break;
        case 4 : printf("Exit\n");
              break;
        default : printf("Choose menu 1-4 only!!!");
        }
            if (choice!=4){
                getc(stdin);
                printf("Plesse Enter To Continue!\n");
                getchar();
            }
    // while (choice!=4);
        
    } while (choice!=4);
    return 0;
}

void show(){
    if(top==0) {
        printf("Friend is Empty!\n");
    }else{
        for(int i=0; i<top; i++) {
            printf("---------- Show Friend [%d] ----------\n",i);
            printf("Name    => %s\n", info[i].nick_name);
            printf("Study   => %s\n", info[i].study);
            printf("Age     => %d\n\n", info[i].age);
        }
    }
}
void push(){
    if(top==size){
        printf("Friend is Overflow!\n");
    }else{
        printf("Enter Friends => ");
        scanf("%s %s %d",info[top].nick_name,info[top].study,&info[top].age);
        top++;    
    }
}
void pop(){
    if(top==0) {
        printf("Friend is Empty!\n");
    }else{
        top--;
        printf("Delete successfuly!");
    }
}