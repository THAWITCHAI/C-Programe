#include <stdio.h>
#define size 5

int rear = 0, front = 0, num = 0;
char q[size];
void enq(char);
int length();
char deq();
void showq();
int main()
{
    int choice;
    char str;
    do
    {
        printf("1.Enq\n");
        printf("2.Deq\n");
        printf("3.Showq\n");
        printf("4.Length\n");
        printf("5.Exit !\n");
        printf("Select >> ");
        scanf("%d", &choice);
        getc(stdin);
        switch (choice)
        {
        case 1:
            printf("you select enq\n");
            printf("input charcater >> ");
            scanf("%c", &str);
            enq(str);
            break;
        case 2:
            printf("you select deq\n");
            printf("%c\n", deq());
            break;
        case 3:
            printf("you select showq\n");
            showq();
            printf("\n");
            break;
        case 4:
            printf("you select length\n");
            printf("%d", length());
            printf("\n");
            break;
        case 5:
            printf("Exit Programe!\n");
        default:
            printf("1-5!\n");
        }
    } while (choice != 5);

    return 0;
}

void enq(char ch)
{
    if (num == size)
    {
        printf("Full Q!\n");
    }
    else
    {
        q[rear] = ch;
        rear++;
        num++;
        if (rear == size)
        {
            rear = 0;
        }
    }
}

char deq()
{
    char ch;
    if (num == 0)
    {
        printf("Empty Q!\n");
        return 0;
    }
    else
    {
        ch = q[front];
        front++;
        num--;
        if (front == size)
        {
            front = 0;
        }
    }
    return ch;
}

int length()
{
    return num;
}

void showq()
{
    if (num == 0)
    {
        printf("Empty Q!\n");
    }
    else
    {
        if(rear<size){
            for(int i=0;i<size;i++){
                printf("%c",q[i]);
            }
        }
    }
}
