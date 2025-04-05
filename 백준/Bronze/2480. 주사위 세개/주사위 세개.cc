#include <stdio.h>

int main(void)
{
	int a, b, c;
	int sum;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c) {
		sum = 10000 + (a * 1000);
		printf("%d\n", sum);
	}
	else if (a == b || a == c) {
		sum = 1000 + (a * 100);
		printf("%d\n", sum);
	}
	else if (b == c) {
		sum = 1000 + (b * 100);
		printf("%d\n", sum);
	}
	else
		if (a > b && a > c) {
			printf("%d", a * 100);
		}
		else if (b > c && b > a) {
			printf("%d", b * 100);
		}
		else
			printf("%d", c * 100);
}