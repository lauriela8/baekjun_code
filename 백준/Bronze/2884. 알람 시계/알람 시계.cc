#include <stdio.h>

int main(void)
{
	int H, M;
	scanf("%d %d", &H, &M);

	if (1 <= H && H <= 23) {
		if (M < 45) {
			H = H - 1;
			M = 45 - M;
			M = 60 - M;
		}
		else if (45 <= M && M <= 59) {
			M = M - 45;
		}
		else
			M = 60 - M;
		printf("%d %d\n", H, M);
	}
	else if (H == 0) {
			if (M < 45) {
				H = 23;
				M = 45 - M;
				M = 60 - M;
			}
			else if (45 <= M && M <= 59) {
				M = M - 45;
			}
			else
				M = 60 - M;
			printf("%d %d\n", H, M);
	}
}