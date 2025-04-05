#include <stdio.h>

int main(void)
{
	int x, y;
	int quadrant;
	scanf("%d %d", &x, &y);


	if (0 < x && 0 < y) {
		quadrant = 1;
	}
	else if (x < 0 && 0 < y) {
		quadrant = 2;
	}
	else if (x < 0 && y < 0) {
		quadrant = 3;
	}
	else if (0 < x && y < 0) {
		quadrant = 4;
	}
	printf("%d\n", quadrant);
}