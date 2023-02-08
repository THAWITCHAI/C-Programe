#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct foods_info{
    char name_food[50];
    int total, price;
};

struct foods_info add[SIZE];
int top = 0;

void show();
void push();
void pop();
void clrscr();

int main(){
    int menu;
    do {
        clrscr();
        printf("----------FOODS DATA----------\n");
        printf("1. Show data in foods_info\n");
        printf("2. Push data into foods_info\n");
        printf("3. Pop data from foods_info\n");
        printf("4. Exit\n");
        printf("------------------------------\n");
        printf("Select menu => ");
        scanf("%d", &menu);
        switch (menu){
            case 0: // à¤Ê¹ÕéÊÃèÒ§ÁÒà¾×èÍ check value µÑÇá»Å "top" áÅÐ ¢éÍÁÙÅã¹ "struct foods_info" à·èÒ¹Ñé¹!
                clrscr();
                printf("Check top value = %d\n",top);
                printf("---------- Show Data [%d] ----------\n",top);
                printf("Food name => %s\n", add[top].name_food);
                printf("Total     => %d\n", add[top].total);
                printf("Price     => %d$\n\n", add[top].price);
                break; // end check

            case 1:
                show();
                break;
            case 2:
                push();
                break;
            case 3:
                pop();
                break;
            case 4:
                clrscr();
                printf("Exit Program!\n");
                break;
            default:
                clrscr();
                printf("Choose menu 1-4 only!\n");
        }
        if(menu != 4){
            getc(stdin);
            printf("\nPress Enter to Continue!\n");
            getchar();
        }
    } while (menu != 4);
    return 0;
}

void show(){
    clrscr();
    if(top==0) {
        printf("Foods_Info is Empty!\n");
    }else{
        for(int i=0; i<top; i++) {
            printf("---------- Show Data [%d] ----------\n",i);
            printf("Food name => %s\n", add[i].name_food);
            printf("Total     => %d\n", add[i].total);
            printf("Price     => %d$\n\n", add[i].price);
        }
    }
}
void push(){
    clrscr();
    if(top==SIZE){
        printf("Foods_Info is Overflow!\n");
    }else{
        printf("push food name: ");
        scanf("%s", add[top].name_food);
        printf("push total    : ");
        scanf("%d", &add[top].total);
        printf("push price    : ");
        scanf("%d", &add[top].price);
        top++;
    }
}
void pop(){
    clrscr();
    if(top==0) {
        printf("Foods_Info is Empty!\n");
    }else{
        top--;
        // printf("info[%d] => %d\n", top, add[top]);
        printf("Delete successfuly!");
    }
}
void clrscr(){
    system("@cls||clear");
}