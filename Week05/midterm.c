#include <stdio.h>
int main()
{
    typedef struct cat{
        char sccer_name[50];
        char data_birth[50];
        int data_birth1;
        char citizenship[50];
        char position[50];
        char host_team[50]
    }cat;
    cat data[5];

    for (int i ; i <2 ; i++){
        printf("Enter athlete information[%d]",i+1);
        gets(data[i].sccer_name);
        getc(stdin);
    }
    printf("The End");

    return 0;

}
