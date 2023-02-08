#include<stdio.h>
#define size 5
 
struct stack
{
    char sccer_name[50], data_birth[50], citizenship[50], position[50],  host_team[50] ; 
    int data_birth1;
};  
 
struct stack info[size];
int top = 0;
 
void show();
void push();
 
int main(){
    int choice;
    do{
        printf("--------------Select choice------------\n");
        printf("1. Show data soccer player\n");
        printf("2. Push data soccer player\n");
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
                    printf("Push data soccer player\n");
                    push();
                    printf("-------------------------------------------------------------------\n");
                    break;
            case 3 :
                    printf("Exit\n");
                    printf("-------------------------------------------------------------------\n");
                    break;
            default :
                     printf("-------------------------------------------------------------------\n");
                     printf("Choose menu 1-4 only!!!");
        }
            if (choice!=3){
                getc(stdin);
                printf("Plesse Enter To Continue!\n");
                getchar();
            }
       
    } while (choice!=3);
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
        printf("Soccer is Overflow!\n");
    }else{
        printf("Enter athlete information[%d]\n",i+1);
        printf("---------------------------------------\n");
        printf("Soccer Name :");
        gets(data[i].sccer_name);
        printf("Date of Birth :");
        gets(data[i].data_birth);
        printf("Citizenship :");
        gets(data[i].citizenship);
        printf("Position :");
        gets(data[i].position);
        printf("Host Team :");
        gets(data[i].host_team);
        printf("---------------------------------------\n");
 
        top++;    
    }
}
 
