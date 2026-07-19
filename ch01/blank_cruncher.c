#include <stdio.h>

int main() {
	int c;
	int prevCharWasSpace = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (prevCharWasSpace == 0) {
				putchar(c);
				prevCharWasSpace = 1;
			}
		} else {
			putchar(c);
			prevCharWasSpace = 0;
		}	
	}
}
