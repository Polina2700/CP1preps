#include <stdio.h>
#include <string.h>
int main(){
	//declare variables
	char sWord[13];
	int dVowels=0, dLen=0;

	//strlen = return the current size of the srting

	//prompt the user for an input
	printf("\n Hello human this is Chat GTP-1, give me a word: ");
	scanf("%s", sWord); //no ampersant &

	//print the word 
	printf("\n You have entered th word: %s. ", sWord);
	dLen=strlen(sWord);
	printf("\n The word has %d characters. ", dLen);

	//scan the word array
	for (int i=0; i<dLen; i++){
		switch(sWord[i]){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':	
			dVowels++;
			sWord[i] = 'X';
			break;
		case '\0': break;
		default: break;
		}//end switch
	}//end for	
	printf("\n The word has %d vowels.", dVowels);
	printf("\n The allergic to vowels so I censored them for you.");
	printf("\n Your word is now %s. ", sWord);
	return 0;
}
