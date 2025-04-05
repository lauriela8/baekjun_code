#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	a += c / 60;
	b += c % 60;

	if (b >= 60) {
		a += 1;
		b -= 60;
	}
	if(a>=24){
		a -= 24;
	}
	printf("%d %d\n", a, b);
}