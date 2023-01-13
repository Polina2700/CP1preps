#include <stdio.h>

int main(){
	int dNum;
	printf("\n Insret n:");
	scanf("%d", &dNum);
		for (int i = 0; i < dNum; ++i){
			for (int j = 0; j < i; ++j){
				printf(" ");
			}
			for (int k = dNum; k>i; k--){
				printf("*");
			}
			printf("\n");
		}
	return 0;
}