#include <stdio.h>
void swap(int *a, int *b){
	int temp;
	temp= *a;
	*a=*b;
	*b=temp;
}
int main(){
	int num1=5;
	int num2=10;
	swap( &num1, &num2);
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);

	return 0;
}