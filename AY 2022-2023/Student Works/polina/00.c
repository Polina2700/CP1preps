#include <stdio.h>
int main(){
	//declaring variable test
	int test;

	while(test--){
	//defining the length of array
		int n;
		scanf("%d", &n);
	//initializing the array with n elements
		int a[n];
		//populating the array
		for(int i=0; i<n, i++){
			scanf("%d", &a[i]);
		}
		int size=n;
	//sorting the array (asending)
	for (int i=0; i<size; i++){
		for (int j=0; j<size-1; j++){
			int c=a[i];
			int n=a[j+1];
			if (c>n){
				a[j]=n;
				a[j+1]=c;
			}
		}
	}
	//comparing neighboring elements
	int breaking=1;
	for (int i=1; i<=n; i++){
		//exiting if difference higher than 1(condition)
		if (a[i]-a[i-1]>1){
			//breaking if and only if the difference is greater than 1
			breaking=0;
			printf("NO\n");
			break;
			}
		}
		if (breaking==1){
			printf("YES\n");
	}
}
	return 0;
}