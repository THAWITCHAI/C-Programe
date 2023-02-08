#include<stdio.h>
#define SIZE 20
void push();
void pop();
void show();

struct stack{
	char name;
	int age;
}info[SIZE];
int top = 0;

int main(){
	char str[10];
	int age2,choice,count,aa;

	do{
		printf("\n");
		printf("---------------------------------\n");
		printf("|----------- Count[%d] ---------|\n",count+1);
		printf("---------------------------------\n");
		printf("1.Enter Data into Stack\n");
		printf("2.Delete Data \n");
		printf("3.Show Data Stack\n");
		printf("4.Exit Progame!\n");
		printf("---------------------------------\n");
		printf("Selece Choice =>");
		scanf("%d",&age2);
		printf("---------------------------------\n");
		printf("\n");
		switch(age2){
			case 1:
			printf("---------------------------------\n");  
			printf("|--------- Input Data ----------|\n");
			printf("---------------------------------\n");
			printf("Enter Age:");
			scanf("%d",&aa);
			push(aa);
			break;
			case 2:
			printf("---------------------------------\n");
			printf("|---------- Delete Data --------|\n");
			printf("---------------------------------\n");
			pop();
			break;
			case 3:printf("---------------------------------\n");
				printf("|----------- Show Data ------------|\n");
				printf("---------------------------------\n");
			show();
			break;
			case 4: printf("---------------------------------\n");
			printf("|------- Exit Programe!! -------|\n");
			printf("---------------------------------\n");
			break;
			default:printf("|-------- Input Number 1-4! ------|\n");
		}
		count++;
	}while(age2!=4);
	return 0;
}

void push(int age){
	if(top==SIZE){
		printf("Full Stack\n");
	}else{
		info[top].age = age;
		top++;
	}
}

void pop(){
	if(top!=0){
		top--;
		printf("info[%d]=> %d",top,info[top].age);
		printf("\n");
	}else{
		printf("Empty Stack\n");
	}
}
void show(){
	int i;
	if(top==0){
		printf("Empty Stack\n");
	}else{
		for(i=0;i<top; i++){
			printf("info[%d]=> %d\n",i,info[i].age);
		}
	}
}
