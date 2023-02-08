# include <stdio.h>
# define SIZE 5

struct stack {
    int data;
} info[SIZE];   // global variable
int top = 0;    // global variable

void show();
void push(int);
void pop();

int main()
{  
    int choice, data;     // local variable
    // printf("SIZE = %d\n", SIZE);
    do {
        printf("---------Stack Operations--------\n");
        printf("1. Show Stack\n");
        printf("2. Push\n");
        printf("3. Pop\n");
        printf("4. Exit\n");
        printf("---------------------------------\n");
        printf("Select choice => ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1 : printf("---------------------------------\n");
                    printf("Show data in Stack\n");
                    printf("---------------------------------\n");
                    show();
                    printf("---------------------------------\n");
                    break;
            case 2 : printf("---------------------------------\n");
                    printf("Push data into Stack\n");
                    printf("---------------------------------\n");
                    printf("Input data => ");
                    scanf("%d", &data);
                    push(data);
                    printf("---------------------------------\n");
                    break;
            case 3 : printf("---------------------------------\n");
                    printf("Pop data from Stack\n");
                    printf("---------------------------------\n");
                    pop();
                    printf("---------------------------------\n");
                    break;
            case 4 : printf("---------------------------------\n");
                    printf("Exit program\n");
                    printf("---------------------------------\n");
                    break;
            default : printf("---------------------------------\n");
                    printf("Choose menu 1-4 only!!!\n");
                    printf("---------------------------------\n");

        }
        if(choice!=4)
        {
            getc(stdin);      
            printf("Press Enter to continue!\n");    
            getchar();
        }
        
    } while(choice!=4);
    return 0;
}

void show() {
    if(top==0) {
        printf("Empty Stack!!!\n");
    } else {
        for(int i=0; i<top; i++) {
            printf("info[%d] => %d\n", i, info[i].data);
        }
    }
}
void push(int data){
    if(top==SIZE) {
        printf("Stack is Overflow!!!\n");
    } else {
        info[top].data = data;
        top++;
    }
}
void pop(){
    if(top==0) {
        printf("Empty Stack!!!\n");
    } else {
        top--;
        printf("info[%d] => %d\n", top, info[top]);
    }
}