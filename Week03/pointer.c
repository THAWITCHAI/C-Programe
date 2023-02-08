#include<stdio.h>
int main()
{
    int *pt,a;
    pt = &a;
    a = 100;
    printf("Address of pt => %X\n", &pt);
    printf("Address of a => %X\n ",&a);
    printf("Data\n");
printf("Value of pt => %X\n",pt);
printf("Value of a => %d\n",a);
printf("Value of a => %d\n",*pt);
*pt = 50;
printf("value of a => %d\n",a);

return 0;
}