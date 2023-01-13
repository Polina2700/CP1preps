#include <stdio.h>
#include <string.h>

//define structures
struct champion{
	char sName[10], cRole;
	int dDiff, dHP, dMP;
	double fArmor, fMagRes;
	struct champion *c;
	struct champion *d;
};  //I want to declare local versions of it later on

//function prototypes
void printChampionRef();
void printChampionVal();

int main(){
	//I want to have local copies
	struct champion head, tail, c1, c2, c3[100];
	//ask the user to input the details pf the champion 
	printf("\n Enter champion name: ");
	scanf("%s", c1.sName); // no & 
	printf("\n Enter the role of %s : ", c1.sName);
	scanf(" %c", &c1.cRole);
	printf("\n Enter difficulty level of %s : ", c1.sName);
	scanf("%d", &c1.dDiff);
	printf("\n Enter armor value of %s : ", c1.sName);
	scanf("%lf", &c1.fArmor);

	c1.d = &head;

	//ask the user to input the details pf the champion 
	printf("\n Enter champion name: ");
	scanf("%s", c2.sName); // no & 
	printf("\n Enter the role of %s : ", c2.sName);
	scanf(" %c", &c2.cRole);
	printf("\n Enter difficulty level of %s : ", c2.sName);
	scanf("%d", &c2.dDiff);
	printf("\n Enter armor value of %s : ", c2.sName);
	scanf("%lf", &c2.fArmor);

	//Im going to use pointers to connect c1 and c2
	c1.c = &c2;

	//im going to a print function outside main
	//thus i need to pass the values by ref or by val
	printChampionRef( &c1 );
	//printChampionVal( c1 );
	printChampionRef( c1.c );

	return 0;
}//endmain

//function definitions go here
void printChampionRef(struct champion *c){
	printf("\n Champion name: %s ", c->sName);
	printf("\n Champion role: %c ", c->cRole);
	printf("\n Champion difficulty: %d ", c->dDiff);
	printf("\n Champion armor value: %.lf \n ", c->fArmor);
}
void printChampionVal(struct champion c){
	printf("\n Champion name: %s ", c.sName);
	printf("\n Champion role: %c ", c.cRole);
	printf("\n Champion difficulty: %d ", c.dDiff);
	printf("\n Champion armor value: %.lf \n ", c.fArmor);
}