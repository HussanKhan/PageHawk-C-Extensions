#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int keywordDensity (char *maintext, char *cleaned_text) {

	int i =0;
	int word_start = 0;
	int word_end = 0;

	/////////////////////////////////////////////
	//First convert all words to lower
	//If first letter lowered, just skip ahead
	
	//Checks to see if character lowered
	//Returns true if lowered
	//Checks using ascii code
	int isLowered(char *letter) {
		if (letter > 96) {
			return 1;
		} else {
			return 0;
		}
	}

	//This loop makes all words lowercase
	for (i = 0; maintext[i] != '\0'; i++) {
		if (maintext[i] == ' ') {
			word_end = i;
			word_start = word_start;

			int wordlength = ((word_end - word_start) - 1);

			char *firstletter = maintext[word_start];

			//If first letter is lowered, just skip whole word
			if (isLowered(firstletter)) {
				i = i + wordlength;
			} else {
				//Else make into lower and skip ahead
				maintext[i] = toLower(maintext[i]);
				i = i + wordlength;
			}
		}
		//Saves end index of last word + 1
		word_start = word_end + 1;
	}



	return 0;
}