#include<stdio.h>
#include<string.h>
#define size 50
int main(int argc, char const *argv[])
{
	char str[size];
	int choice;
do
{
	printf("----Select Choice----\n");
	printf("1.Insert Data\n");
	printf("2.Show Data\n");
	printf("Delete Data\n");
	printf("---------------------\n");
	printf("Enter Choice 1-4:");
	scanf("%d",&choice);
	switch (choice)
	{
	case 1 : printf("1.Insert Data\n");
		break;
	case 2 : printf("2.Show Data\n");
		break;
	case 3 : printf("Delete data");
	    break;
	default:printf("Enter 1-3 !!");
		break;
	}
} while (choice != 3);

	return 0;
}
