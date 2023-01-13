#include <stdio.h>
#define HOURLY_RATE 5.21

int main(){
	//declare variables
	float fSalary=0.0;
	int dHours=0, dDay=0;

	//ask user how many days they worked and how many hours they worked for that day
	printf("\n How many days did you work: ");
	scanf("%d", &dDay);

	for(int dCtr=1; dCtr<=dDay; dCtr++){
	printf("\n How many hours dod you work on day %d? ", dCtr);
	scanf("%d", &dHours);
	//fSalary = fSalary + dHours*HOURLY_RATE;
	fSalary+=dHours*HOURLY_RATE;
	printf("\n You earned %.2f in Day %d. ", dHours*HOURLY_RATE, dCtr);
	}
	//print the final salary
	printf("\n For a total of %d days, you earned %.2f. ", dDay, fSalary);
	return 1;
}