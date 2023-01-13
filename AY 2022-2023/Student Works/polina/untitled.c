#include <stdio.h>

int main(){
	//declare variables
	int dNum1;
	float fNum2, fSum;
	double fNum3;
	
	//ask the user for an input
	printf("\n Give me an integer: ");
	scanf("%d", &dNum1);

	printf("\n Give me a float: ");
	scanf("%f", &fNum2);

	printf("\n Give me a double: ");
	scanf("%lf", &fNum3);

	fSum = dNum1 + fNum2 + fNum3;

	printf("\n The sum of %d, %.1f and %.2f is %.3f \n", dNum1, fNum2, fNum3, fSum);

	return 0;

}