#include <stdio.h>

int main(){
	int array[10], size;
	printf("\n Enter the size of array:");
	scanf("%d", &size);
	printf("Enter %d elements \n", size);
		for (int i = 0; i < size; ++i)
		{
			scanf("%d", &array[i]);
		}
		printf("\n Even numbers in array:");
		for (int i=0; i<size; i++){
			if (array[i]%2==0){
				printf("%d \n", array[i]);
			}
		}
		printf("\n Odd numbers in array:");
		for (int i=0; i<size; i++){
			if (array[i]%2!=0){
				printf("%d \n", array[i]);
			}
		}
return 0;
}