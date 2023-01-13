//word = "kcasvknaekvjcasndcaskj"
//srting has a 22 characters
//how many "cas" is there in the string
//dLen = 22

#include <stdio.h>
#include <string.h>
int main(){
	char sWord [22] = "kcasvknaekvjcasndcaskj";
	int dLen = 22;
	int n = 0;
	for (int i=0; i<n-3; i++){
		if (sWord[i]== 'c' && sWord[i+1]=='a' && sWord[i+2]=='s'){
			n++;
		}
	}
	printf("\n number of 'cas' %d in word", n);
	return 0;
}

