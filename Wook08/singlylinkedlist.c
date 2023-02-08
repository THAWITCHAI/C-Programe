#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;   // information part
    struct node *next;  // link part
};
struct node *start=NULL, *end=NULL;
int numberofnode = 0;

void menu();
void addnode(int);
int getnumberofnode();
void deletenode(int);
void traversing();
int searching(int);
void insertnode(int, int);

int main()
{
    int choice, data, n;
    do {
        menu();
        printf("select choice >> ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("add new node to linked list\n");
                    printf("enter data >> ");
                    scanf("%d", &data);
                    addnode(data);
                    break;
            case 2: printf("delete node in linked list\n");
                    printf("enter node to delete >> ");
                    scanf("%d", &n);
                    deletenode(n);
                    break;
            case 3: printf("traversing in linked list\n");
                    traversing();
                    break;
            case 4: printf("searching data in linked list\n");
                    printf("enter data to searching >> ");
                    scanf("%d", &data);
                    if(searching(data)) {
                        printf("Found!\n");
                    }else{
                        printf("Not Found!\n");
                    }
                    break;
            case 5: printf("inserting node to linked list\n");
                    printf("enter node to insert >> ");
                    scanf("%d", &n);
                    printf("enter data >> ");
                    scanf("%d", &data);
                    insertnode(n, data);
                    break;
            case 6: printf("show number of node in linked list\n");
                    printf("number of node => %d\n", getnumberofnode());
                    break;
            case 7: printf("exit program\n");
                    break;
            default: printf("you should select choice 1-7 only!\n");
        }
    }while(choice!=7);

    return 0;
}

void menu()
{
    printf("-----Singly Linked List-----\n");
    printf("1. add node\n");
    printf("2. delete node\n");
    printf("3. traversing\n");
    printf("4. searching\n");
    printf("5. Inserting\n");
    printf("6. show number of node\n");
    printf("7. exit program\n");
    printf("----------------------------\n");
}

void addnode(int data)
{
    struct node *ptr = (struct node*) malloc(sizeof(struct node));
    if(getnumberofnode()==0) {
        printf("adding 1st node\n");
        ptr->data = data;       // assign info part
        ptr->next = NULL;       // assign link part
        start = ptr;
        end = ptr;
        numberofnode++;
    }else {
        printf("appending new node\n");
        ptr->data = data;
        ptr->next = NULL;
        end->next = ptr;
        end = ptr;
        numberofnode++;
    }
    
}
int getnumberofnode()
{
    return numberofnode;
}

void deletenode(int n)
{
    struct node *ptr, *prevptr;
    if(getnumberofnode()==0) {
        printf("no node to delete\n");
    }else if(getnumberofnode()==1){
        printf("deleting 1st node\n");
        ptr = start;
        start = NULL;
        end = NULL;
        free(ptr);
        numberofnode--;
    } else {
        if(n==1) {
            printf("deleting 1st node\n");
            ptr = (struct node*) malloc(sizeof(struct node));
            ptr = start;
            start = start->next;
            free(ptr);
            numberofnode--;
        }else if(n==getnumberofnode()) {
            printf("deleting end node\n");
            ptr = (struct node*) malloc(sizeof(struct node));
            prevptr = (struct node*) malloc(sizeof(struct node));
            for(int i=1; i<=n; i++) {
                if(i==1) {
                    prevptr = start;
                }else if(i==n) {
                    ptr = prevptr->next;
                    end = prevptr;
                    end->next = NULL;
                    free(ptr);
                }else {
                    prevptr = prevptr->next;
                }
            }
            numberofnode--;
        }else {
            printf("deleting node number %d\n", n);
            ptr = (struct node*) malloc(sizeof(struct node));
            prevptr = (struct node*) malloc(sizeof(struct node));
            for(int i=1; i<=n; i++) {
                if(i==1) {
                    prevptr = start;
                }else if(i==n) {
                    ptr = prevptr->next;
                    prevptr->next = ptr->next;
                    free(ptr);
                }else {
                    prevptr = prevptr->next;
                }
            }
            numberofnode--;
        }
    }
}

void traversing()
{
    if(getnumberofnode()==0) {
        printf("no node to traversing\n");
    }else {
        struct node *ptr;
        ptr = (struct node*) malloc(sizeof(struct node));
        ptr = start;
        printf("data => %d\n", ptr->data);
        while(ptr->next != NULL) {
            ptr = ptr->next;
            printf("data => %d\n", ptr->data);
        }
    }
}

int searching(int data) 
{
    int result = 0;
    struct node *ptr;
    ptr = start;
    int i=1;
    do {
        if(ptr->data == data) {
            result = 1;
            return result;
        }
        ptr = ptr->next;
        i++;
    }while(i<=getnumberofnode());
    
    return result;
    
}

void insertnode(int n, int data)
{
    if(n==1) {
        printf("insert to beginning of linked list\n");
        struct node *ptr = (struct node*) malloc(sizeof(struct node));
        ptr->data = data;
        ptr->next = start;
        start = ptr;
        numberofnode++;
    } else {
        printf("insert new node to linked list\n");
        struct node *newptr = (struct node*) malloc(sizeof(struct node));
        struct node *prevptr = (struct node*) malloc(sizeof(struct node));

        newptr->data = data;

        for(int i=1; i<=n; i++) {
            if(i==1) {
                prevptr = start;
            }else if(i==n) {
                newptr->next = prevptr->next;
                prevptr->next = newptr;
            }else {
                prevptr = prevptr->next;
            }
        }
        numberofnode++;
    }
}