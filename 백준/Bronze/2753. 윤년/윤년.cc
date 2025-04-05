#include <stdio.h>

int main() 
{
	int year;
	scanf("%d", &year);

	if (year <= 0 || 4000 < year) {
		return 0;
	}
	int leap;

	if (year % 400 == 0) leap = 1;
	else if (year % 100 == 0) leap = 0;
	else if (year % 4 == 0) leap = 1;
	else leap = 0;

	printf("%d", leap);

	return 0;
}