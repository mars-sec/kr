#include <stdio.h>

main() {
	int nl = 0, t = 0, b = 0, c;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}
		if (c == '\t') {
			++t;
		}
		if (c == ' ') {
			++b;
		}
		printf("\n\nNew lines: %d\nTabs: %d\nBlank spaces: %d\n\n", nl, t, b);
	}
}
