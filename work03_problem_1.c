#include <stdio.h>

int main() {

	int sum = 0;
	int i;

	for (int i = 1; i < 1000; i++) {
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}

	printf("The sum of all the multiples of 3 or 5 below 1000 is %d\n", sum);

	return 0;
}