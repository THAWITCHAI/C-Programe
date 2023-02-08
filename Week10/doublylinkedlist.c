#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};
struct node *start=NULL, *end=NULL;
int numberofnode=0;

void menus();
int getnumberofnode();
void addnode(int);
void forwardtraverse();
void backwardtraverse();
void deletenode(int);
void insertnode(int, int);
int searching(int);
void printlist();

int main()
{
    int choice, n, data;
    do{
        menus();
        printf("select menu >> ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: printf("adding node to linked list\n");
                    printf("enter data >> ");
                    scanf("%d", &data);
                    addnode(data);
                    printlist(); // debug
                    break;
            case 2: printf("deleting node in linked list\n");
                    printf("enter node to delete >> ");
                    scanf("%d", &n);
                    deletenode(n);
                    printlist(); // debug
                    break;
            case 3: printf("forward traversing in linked list\n");
                    forwardtraverse();
                    break;
            case 4: printf("backward traversing in linked list\n");
                    backwardtraverse();
                    break;
            case 5: printf("inserting data into linked list\n");
                    printf("enter node to insert >> ");
                    scanf("%d", &n);
                    printf("enter data >> ");
                    scanf("%d", &data);
                    insertnode(n, data);
                    printlist(); // debug
                    break;
            case 6: printf("searching data in linked list \n");
                    printlist(); // debug
                    printf("enter data to searching >> ");
                    scanf("%d", &data);
                    int dat = searching(data);
                    if(dat !=0) {
                        printf("founded! in node %d\n", dat);
                    }else{
                        printf("not found!\n");
                    }
                    break;
            case 7: printf("get number of node in linked list\n");
                    printf("number of node in linked list >> %d\n", getnumberofnode());
                    break;
            case 8: printf("exiting program\n");
                    break;
            default: printf("you should select menu 1-8 only!\n");
        }

    }while(choice!=8);
    return 0;
}

void insertnode(int n, int data)
{
    //ไม่มี node ให้สร้างใหม่
    if (numberofnode == 0) {
        addnode(data);
        return;
    }
    //ไม่มี ตำแหน่ง node หรือ ตำแหน่งเกิดกำนวน node ให้สร้างใหม่

    if (n>numberofnode) {
       addnode(data);
       return;
    }
    //clone struct node
    struct node *pt = (struct node *)malloc(sizeof(struct node));
    //เก็บค่า data เข้าตัว clone
    pt->data = data;
    //ถ้าต้องการเปลี่ยนตำแหน่งแรกของ list
    if (n == 1) {
        struct node *temp = start;
        pt->next = start;
        temp->prev = pt;
        start = pt;
        numberofnode++;
        return;
   }
   struct node *current =start;
   for (int i = 1; i <= n; i++)
   {
       if (i == 1) {
           continue;
       }
       current=current->next;
       if (i==n) {
         if (n > numberofnode) {
            pt->prev= current;
            current->next = pt;
            numberofnode++;
            return;
         }
           pt->next= current;
           pt->prev = current->prev;
           current->prev->next = pt;
           current->prev = pt;
           numberofnode++;
           return;
       }
   }
    numberofnode++;
}
void printlist(){
    struct node **t= &start;
    struct node *tmp= *t;
    while(tmp!=NULL){
        printf("%d->",tmp->data);
        tmp=tmp->next;
    }
    printf("\t\t\t<=== Debug\n");
    printf("\n");
}

int searching(int data) {
    struct node *pt;
    if(getnumberofnode()==1) {
        if(start->data == data)
            return 1;
    }else {
        for(int i=1; i<=getnumberofnode(); i++) {
            if(i==1){
                pt=start;
            }else{
                pt=pt->next;
            }
            if(pt->data==data)
                return i;
        }
    }
    return 0;
}


void deletenode(int n)
{
    struct node *pt;
    if(getnumberofnode()==1) {
        printf("deleting 1st node\n");
        pt = start;
        start=NULL;
        end=NULL;
        free(pt);
    }else{
        if(n==1){
            printf("deleting 1st node\n");
            pt = start;
            start = pt->next;
            start->prev = NULL;
            free(pt);
        }else if(n==getnumberofnode()) {
            printf("deleting end node\n");
            pt = end;
            end = pt->prev;
            end->next = NULL;
            free(pt);
        }else {
            printf("deleting immediate node\n");
            for(int i=1; i<=n; i++) {
                if(i==1){
                    pt=start;
                }else if(i==n) {
                    pt=pt->next;
                    (pt->prev)->next = pt->next;
                    (pt->next)->prev = pt->prev;
                    free(pt);
                }else {
                    pt=pt->next;
                }
            }
        }
    }
    numberofnode--;
}

void forwardtraverse()
{
    struct node *pt;
    int i=1;
    do{
        if(i==1)
            pt=start;
        else
            pt=pt->next;
        printf("data in node %d >> %d\n", i, pt->data);
        i++;
    }while(pt->next!=NULL);
}

void backwardtraverse()
{
    struct node *pt;
    int i=getnumberofnode();
    do{
        if(i==getnumberofnode())
            pt=end;
        else
            pt=pt->prev;
        printf("data in node %d >> %d\n", i, pt->data);
        i--;
    }while(pt->prev!=NULL);
}


void addnode(int data)
{
    struct node *pt = (struct node *)malloc(sizeof(struct node));
    pt->data = data;
    if(getnumberofnode()==0) {
        printf("adding 1st node\n");
        pt->prev = NULL;
        pt->next = NULL;
        start=pt;
        end=pt;
    }else {
        printf("appending node to linked list\n");
        pt->next = NULL;
        pt->prev = end;
        end->next = pt;
        end = pt;
    }
    numberofnode++;
}


int getnumberofnode()
{
    return numberofnode;
}
void menus()
{
    printf("--------doubly linked list---------\n");
    printf("\t1. adding\n");
    printf("\t2. deleting\n");
    printf("\t3. forward traversing\n");
    printf("\t4. backward traversing\n");
    printf("\t5. inserting\n");
    printf("\t6. searching\n");
    printf("\t7. getting number of node\n");
    printf("\t8. exiting\n");
    printf("-------------------------------------\n");
}