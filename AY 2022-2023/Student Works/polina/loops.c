#include <stdio.h>

int main(){
	int dNum1;
	printf("\n Please enter a number between 1 and 10: ");
	scanf("%d", &dNum1);
	//will count how many levels

	for (int i=0; i<dNum1; i++){ 
		for (int j=0; j<i; j++){
			printf(" ");
		} 
		for (int k=dNum1; k>i; k--){
			printf("*"); 
		}
		
	printf("\n");
	}
	return 0;	
}
