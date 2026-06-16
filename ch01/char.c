#include <stdio.h>

int main() {
	char c;

	printf("%d is the equivelant of getchar() != EOF.", (getchar() != EOF));

	while ((c = getchar()) != EOF) {
		putchar(c);
		c = getchar();
	}
}
