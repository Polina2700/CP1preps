//to enter 5 integers in array. Print how many even even elems are in array

#include <stdio.h>

int main(){
	//declare my array
	int dArr[5], dEvenCount=0;

	//let use the for loop to repeatedly ask the user for an input
	for( int dCtr=0; dCtr<5; dCtr++ ){
		printf("\n Enter number %d: ", dCtr+1);
		scanf("%d", &dArr[dCtr]); //we store the integers int the slot represented by dCtr in dArr
	if( dArr[dCtr]%2==0 ){
			dEvenCount++;
		}
	}
	printf("\n You have entered %d even elements in the array. \n", dEvenCount);
	return 0;
}
