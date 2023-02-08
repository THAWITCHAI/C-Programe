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
        printf("--------------Select choice------------\n");
        printf("1. Show data friend\n");
        printf("2. Push data friend\n");
        printf("3. Pop data friend\n");
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
                    printf("Push data friend\n");
                    push();
                    printf("-------------------------------------------------------------------\n");
                    break;
            case 3 :
                    printf("Pop data friend\n");
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
        printf("Friend is Empty!\n");
    }else{
        for(int i=0; i<top; i++) {
            printf("---------- Show Friend [%d] ----------\n",i);
            printf("Name   => %s\n", info[i].nick_name);
            printf("Study  => %s\n", info[i].study);
            printf("Age    => %d\n\n", info[i].age);
            printf("-------------------------------------------------------------------\n");
        }
    }
}


void push(){
    if(top==size){
        printf("Friend is Overflow!\n");
    }else{
        printf("-------------------------------------------------------------------\n");
        printf("1. Enter Namefriends => ");
        scanf("%s",info[top].nick_name);
        printf("2. Enter Study => ");
        scanf("%s",info[top].study);
        printf("3. Enter age => ");
        scanf("%d",&info[top].age);
        printf("-------------------------------------------------------------------\n");

        top++;    
    }
}


void pop(){
    if(top==0) {
        printf("-------------------------------------------------------------------\n");
        printf("Friend is Empty!\n");
        printf("-------------------------------------------------------------------\n");
    }else{
        top--;
        printf("-------------Delete successfuly Data friend! [%d]-----------------\n",top);
        printf("Name friend => %s\n",info[top].nick_name);
        printf("Study => %s\n",info[top].study);
        printf("Age => %d\n",info[top].age);
        printf("-------------------------------------------------------------------\n");
    }
}