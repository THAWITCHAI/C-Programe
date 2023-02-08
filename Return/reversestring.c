#include<stdio.h>
#define size 50

void push(char);
char pop();

typedef struct stack{
    char ch;
}stack;
stack name[size];
int top = 0;

int main(){
    char str[50];
    printf("Enter name:");
    gets(str);
    printf("\n");
    for(int i=0; str[i]!='\0';i++){
        push(str[i]);
        printf("\n");
    }
    printf("Original String: %s\n",str);
    printf("Reverse String:");
    for( ;top!=0; ){
        printf("%c",pop());
    }
    printf("\n");
    return 0;
}

void push(char ch){
    if(top!=size){
        name[top].ch = ch;
        top++;
    }else{
        printf("Full Stack\n");
    }
}

char pop(){
    char c;
    if(top!=0){   
        top--;
        c = name[top].ch;
    }else{
        printf("Empty!\n");
    }
    return c;
}