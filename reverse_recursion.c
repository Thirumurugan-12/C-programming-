#include <stdio.h>

void reverseSentence();


int main() {
	printf("Enter a sentence\n");
	reverseSentence();
	return 0;
}


void reverseSentence() {

	char c;
	scanf("%c",&c);

	if (c!='\n') {
		printf("%c\n",c);
		reverseSentence();
		printf("%c",c);
	}
}