#include <stdio.h>

int main(){
	//declare my array
	int dArr[10];
	for( int i=0; i<10; ++i ){
		printf("\n Enter number %d: ", i);
		scanf("%d", &dArr[i]);
		
	}
	printf("\n Content of array is %d: ", dArr[i] );
	return 0;
}
