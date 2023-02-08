#include<stdio.h>
#define SIZE 10
int main()
{
    struct stack{
        int age;

    }info[SIZE];
    int choice ;

    // printf("SIZE = %d\n",SIZE);
printf("----------------Stack operation-----------------\n");
// printf("-------------------------------\n");
do
{
printf("1. Show Stack\n");
printf("2. push\n");
printf("3. pop\n");
printf("4. Exit\n");
printf("-------------------------------\n");
printf("Select choice => ");
scanf("%d",&choice);
switch (choice)
{
case 1 : printf("-------------------------------\n");
         printf("Show data in stack\n");
         printf("-------------------------------\n");
    break;
case 2 : printf("-------------------------------\n");
         printf("push data into stack\n");
         printf("-------------------------------\n");
    break;
case 3 : printf("-------------------------------\n");
         printf("pop data from Stack\n");
         printf("-------------------------------\n");
    break;
case 4 : printf("-------------------------------\n");
         printf("Exit program\n");
         printf("-------------------------------\n");
    break;
default : printf("Choos menu 1-4 only!!\n");

}
// gets(stdin);
printf("Press Enter to continue !\n");
getchar();

} while (choice!=4);

    return 0;
}
