#include<stdio.h>
int main(int argc, char const *argv[])
{
    float grade [6];
    float git [6];
    
    for (int i = 1; i <=2; i++){
        printf("input grade[%d]:",i);
        scanf("%f",&grade);
        printf("input git  [%d]:",i);
        scanf("%f",&git);
        printf("-----------------------\n");
        printf("git  ");
    }
    
    return 0;
}
