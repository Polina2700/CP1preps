#include <stdio.h>
#include <string.h>
int main(){
	char sAnimals [] = {'dog', 'cat', 'bird', 'other', '\0'};
	int cost;
	char neutered [] = {'Y', 'N'};
	printf("\n Insert the animal: (dog/cat/bird/reptile/other)");
	scanf("%s, sAnimals");
	printf("\n Neutered or not neutered: Y/N");
	scanf("%s, neutered");
	printf("The cost will be:");
	if (sAnimals==dog && neutered==Y){
		printf(%d, "50");
	}
	else{
		printf("80");
	}
	if (sAnimals==cat && neutered==Y){
		printf("40");
	}
	else{
		printf("60");
	}
	if (sAnimals==bird || sAnimals==reptile){
		printf("nothing");
	}
	if (sAnimals==other)
	{
		printf("error");
	}

	return 0;
}