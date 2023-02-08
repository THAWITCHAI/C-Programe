#include<stdio.h>
int main()
{
    int *pt,a = 20;
    pt = &a;
    printf("value of pt => %X\n",pt);
    printf("address of a => %X\n",a);
    pt = pt + 1; //pt++;
    printf("value of pt : %X\n",pt);
    printf("a = %d\n",*pt);
    return 0;
}
