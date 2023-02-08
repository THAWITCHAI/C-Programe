#include<stdio.h>
int main()
{
    // char str[50] = {'u','b','r','u'};
    char str[50] = "ubru";
    // char name[50];
    // name[0] = 's';
    // name[1] = 'u';
    printf("Address\n");
    for (int i = 0; str[i]!='\0';i++)
    {
        printf("Address str[%d] = %X\n",i,&str[i]);
    }
    
    return 0;
}