#include <stdio.h>

int main(){
	//declare some variable
	int dFactor1=1;

	//lets use a loop to print the statement
	//for( ; dFactor<=10; dFactor++){
			//printf("\n %d * %d = %d \n", dFactor, dFactor, dFactor*dFactor);

	for( ; dFactor1<=10; dFactor1++ ){
		for( int dFactor2 = 1; dFactor2<=dFactor1; dFactor2++ ){
			printf(" %d ", dFactor1*dFactor2);
		}
		printf("\n");
	}
	return 0;
}