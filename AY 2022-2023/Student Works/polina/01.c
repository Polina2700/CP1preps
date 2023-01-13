#include <stdio.h>
int main(){
	int size;
	scanf("%d", &size);
	int arr[size];
	for (int i = 0; i<size; ++i){
		scanf("%d", & arr[i]);
	}
	int k=0;
	for (int i = 2; i < size-1; ++i){
		if (arr[i]==0 && arr[i-1]==1 && arr[i+1]){
			k++;
			arr[i+1]=0;
		}
	}
	printf("%d \n", k);
	return 0;
}