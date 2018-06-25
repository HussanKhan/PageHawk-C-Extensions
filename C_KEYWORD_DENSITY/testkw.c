#include <stdio.h>
#include <stdlib.h>
#include "keyword_dense.h"

int main () {
	char text[] = "The decision surprised almost everyone — not necessarily that AT&T and Time Warner had won, but that Judge Leon allowed the merger to go through with no conditions or prohibitions on their behavior at all. In fact, Judge Leon’s opinion seems downright excited for the two companies, while systematically discounting the government’s case at every turn. Honestly, it’s a little strange.";

	keywordDensity(text);

	printf("\nResult: %s\n", text);
	return 0;
}