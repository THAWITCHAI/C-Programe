#include <stdio.h>
int i;

int main() {
    char str;
    printf("Do you want to play games Y or N ?\n");
    printf("Select =>");
    scanf("%c",&str);
    
    if(str == 'Y' || str == 'y'){
    	printf("Welcome\n");
    	int num;
    	do{
    		printf("\n");
    		printf("-------------------------\n");
    		printf("15 + 12 =?\n");
	    	printf("Ans:");
	    	scanf("%d",&num);
	    	if(num==27){
	    		printf("\n");
	    		printf("-------------------------\n");
	    		printf("|-------Very Good-------|\n");
	    		printf("-------------------------\n");
			}else{
				printf("\n");
				printf("-------------------------\n");
				printf("|---------Saddd---------|\n");
				printf("-------------------------\n");
			}
		}while(num!=27);
		do{
    		printf("\n");
    		printf("-------------------------\n");
    		printf("250 + 48 =?\n");
	    	printf("Ans:");
	    	scanf("%d",&num);
	    	if(num==298){
	    		printf("\n");
	    		printf("-------------------------\n");
	    		printf("|-------Very Good-------|\n");
	    		printf("-------------------------\n");
			}else{
				printf("\n");
				printf("-------------------------\n");
				printf("|---------Saddd---------|\n");
				printf("-------------------------\n");
			}
		}while(num!=298);
	}else{
		printf("Exit!\n");
	}
    
    return 0;
}

