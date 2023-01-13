#include <stdio.h>
int main(){
	int total;
	scanf("%d", &total);
	int a[total];
	for (int i = 0; i < total; ++i)
	{
		scanf("%d", &a[i]);
	}
	int sum=0, count=0;
	for (int i = 0; i < total-1; ++i){
		for (int j = 0; j < total-1; ++j)
		{
			if(a[i]>a[j+1]){
				a[i]=a[j+1];
			}
		}
	}
	int sum2=0;
	for (int i = 0; i < total; ++i){
		sum2+=a[i];
		sum2=sum2/2;
	}
	for (int i = 0; i <total-1; --i){
		sum+=a[i];
		count++;
		printf("%d\n", sum);
		if (sum>sum2){
			break;
		}
		printf("%d\n", count);
	}
	return 0;
}