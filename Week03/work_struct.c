#include<stdio.h>
int main(int argc, char const *argv[])
{
    typedef struct friend{
        char nick_name[5];
        char study [50];
        int hight;
        int weight;
        int age;
    }friend;
     friend c[5];
     printf("--------------------------------------------------\n");
    printf("My Friend\n");
    int i;
    for (i=0; i<5;i++)
    {
        printf("Enter your friend Nickname %d :",i+1);
        gets(c[i].nick_name);
        printf("place of study :");
        gets(c[i].study);
        printf("Enter your friend age. :");
        scanf("%d",&c[i].age);
        printf("Heght My friend :");
        scanf("%d",&c[i].hight);
        printf("Weight My friend :");
        scanf("%d",&c[i].weight);
        getc(stdin);
        printf("-----------------------------------------------\n");
    }

    return 0;
}
