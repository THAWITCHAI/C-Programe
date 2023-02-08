#include<stdio.h>
#define SIZE 10
int main(int argc, char const *argv[])
{
    struct stack
    {
        int data;
        char name[50];
    };
    struct stack info[SIZE];
    int top = 0;
    int choice;
    printf("----------Stack Operation----------\n");
    printf("1. Show data in Stack\n");
    printf("2. Push data info Stack\n");
    printf("3. Pop data from Stack\n");
    printf("4. Exit\n");
    printf("------------------------------------\n");
    printf("Select Choice :");
    scanf("%d",choice);

    switch (choice){
    case 1 : printf("1. Show data in Stack\n");
        break;
    case 2 : printf("2. Push data info Stack\n");
        break;
    case 3 : printf("3. Pop data from Stack\n");
        break;
    case 4 : printf("4. Exit\n");
        break;    
    default : printf("Chosse menu 1-4 only!\n");
    }
    return 0;
}
