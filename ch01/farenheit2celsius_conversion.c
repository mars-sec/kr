#include <stdio.h>

void print_dashes(int n) {
	int i;
	for (i = 0; i< n; i++) {
		putchar('-');
	}
}

void print_header(const char *col1, const char *col2, int w1, int w2) {
	printf("%*s %*s\n", w1, col1, w2, col2);
	print_dashes(w1);
	putchar(' ');
	print_dashes(w2);
	putchar('\n');

}





int main() {
	float far, cel;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	print_header("F", "C", 3, 6);

	far = upper;
	while (far >= lower) {
		cel = (5.0/9.0) * (far-32.0);
		printf("%3.0f %6.1f\n", far, cel);
		far = far - step;
	}
}
