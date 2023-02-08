#include<stdio.h>
#define size 5
 
struct stack
{
    char soccer_name[50], data_birth[50], citizenship[50], position[50],  host_team[50] ; 
};  
 
struct stack info[size];
int top = 0;
 
void show();
void push();
 
int main(){
    int choice;
    do{
        printf("--------------Select choice------------\n");
        printf("1. Show data Soccer\n");
        printf("2. Push data Soccer\n");
        printf("3. Exit\n");
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
                    printf("Push data Soccer\n");
                    push();
                    printf("-------------------------------------------------------------------\n");
                    break;
            case 3 :
                    printf("Exit\n");
                    printf("-------------------------------------------------------------------\n");
                    break;
            default :
                     printf("-------------------------------------------------------------------\n");
                     printf("Choose menu 1-3 only!!!");
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
        printf("Soccer is Empty!\n");
    }else{
        for(int i=0; i<top; i++) {
            printf("---------- Show Soccer [%d] ----------\n",i);
            printf("Soccer Name   => %s\n", info[i].soccer_name);
            printf("Date of Birth  => %s\n", info[i].data_birth);
            printf("Citizenship  => %s\n", info[i].citizenship);
            printf("Position  => %s\n", info[i].position);
            printf("Host Team  => %s\n", info[i].host_team);
             

        }
    }
}
 
void push(){
    if(top==size){
        printf("Data Full !");
        
    }
    else{
        for (int i=0 ; i <top ; i++){
        printf("---------- Show Soccer [%d] ----------\n",i);
        printf("Soccer Name :");
        gets(info[top].soccer_name);
        getc(stdin);
        printf("Date of Birth :");
        gets(info[top].data_birth);
        getc(stdin);
        printf("Citizenship :");
        gets(info[top].citizenship);
        getc(stdin);
        printf("Position :");
        gets(info[top].position);
        getc(stdin);
        printf("Host Team :");
        gets(info[top].host_team);
        getc(stdin);
        printf("---------------------------------------\n");
        getc(stdin);
 
        top++;    
    }
    }

}
 