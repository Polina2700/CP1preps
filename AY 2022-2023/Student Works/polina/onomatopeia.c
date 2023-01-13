#include <stdio.h>
#include <string.h>
int main(){
	char sWord[25];
	scanf("\n %s", sWord);
	int dCounter;
	int dInput, 
	int dLen = strlen(sWord);
	printf("\n How many characters do you wnat to scan:");
	scanf("\n %d", dInput );
	for (int i=0; i<dLen-dInput, i++){
		for (int j=i; j<i+dInput; j++){
			printf("\n %c", sWord[j] );
		}
			dCounter++;
			printf(", ");
	}
	printf("\n %d", dCounter);
	return 0;
}