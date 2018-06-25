#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int * keywordDensity (char maintext[]) {

	printf("\n- Program Started...\n");
	printf("\n- Allocating Memory...\n");

	int i = 0;
	int word_end;
	int word_start = 0;
	/////////////////////////////////////////////
	//First convert all words to lower
	//If first letter lowered, just skip ahead
	
	//Checks to see if character lowered
	//Returns true if lowered
	//Checks using ascii code
	printf("\n- Creating Needed Functions...\n");
	int isLowered(char letter) {
		if (letter > 96 && letter < 123) {
			return 1;
		} else if (letter > 64 && letter < 91) {
			return 2;
		}
	}

	printf("\n- Lowercasing all words...\n");
	//This loop makes all words lowercase
	for (i = 0; maintext[i] != '\0'; i++) {
		if (maintext[i] == ' ') {
			word_end = i;
			//If first letter is lowered, just skip whole word
			int lowercheck = isLowered(maintext[word_start]);
			if (lowercheck == 1) {
				i =  word_end + 1;
			} else if (lowercheck == 2) {
				//Else make into lower and skip ahead
				maintext[word_start] = tolower(maintext[word_start]);
				i =  word_end + 1;
			}
		//Saves end index of last word + 1
		word_start = word_end + 1;
		}
	}
	
	//Now remove stopwords from text, and replace with spaces

	printf("\n- COMPLETE\n");

	return 0;
}
