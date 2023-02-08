#include <stdio.h>
#include <string.h>

int stringlength(char art[50]);

int main(int argc, char const *argv[])
{ 
    char str[50];
    int length = 0;
    printf("enter string: ");
    scanf("%s",&str);
    // getf(str);
// while (str[length] != '\0')

    // length++;
    length = stringlength(str);
printf("the length of %s is %d\n",str,length);

    return 0;
}
int stringlength(char art[50])
{
    int length;
while (art[length] != '\0')
    length++;
    return length;
}