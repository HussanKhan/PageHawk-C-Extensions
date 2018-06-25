#ifndef WORDSTATS
#define WORDSTATS
#include <stdio.h>
#include <stdlib.h>

// ALL STRINGS ARE JUST A LIST OF CHARACTERS

// This counts the number of words, by counting the spaces between word.
int wordcount(char *word) {
	int i;
	int count = 0;

	for (i = 0; word[i] != '\0'; ++i) {
		if (word[i] == ' ') {
			++count;
		};
	}

	return count + 1;
};

// This counts numbers of sentences by counting periods. 
int sentencecount(char *sent) {
	int j;
	int count = 0;

	for (j = 0; sent[j] != '\0'; ++j) {
		if (sent[j] == '.' && (sent[j + 1] == ' ' || sent[j + 1] == '\0')) {
			++count;
		};

	}
	return count;
};
#endif