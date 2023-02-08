
#include <stdio.h>
#define SIZE 20

void push(char);
char pop();
typedef struct stack {
    char ch;
} stack;

stack name[SIZE];   // global
int top = 0;

int main()
{
    char str[50];
    printf("enter your string -> ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++) {
        push(str[i]);
    }
    printf("original string -> %s\n", str);
    printf("reverse string -> ");
    for( ;top!=0; )
    {
        printf("%c", pop());
    }
    // printf("\n");
    return 0;
}

void push(char ch)      // pass by value
{
    if(top!=SIZE) {
        name[top].ch = ch;
        top++;
    } else {
        printf("Full Stack!!!\n");
    }
}
char pop() 
{
    char c;
    if(top!=0) {
        top--;
        c = name[top].ch;
    }else {
       printf("Empty Stack!\n"); 
    }
    return c;
}