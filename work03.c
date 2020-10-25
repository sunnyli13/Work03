#include <stdio.h>
#include <stdlib.h>

int prob1() {

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

int prob2() {

	// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
	int cur = 1;
	int prev = 1;
	int sum = 0;

	while(cur < 4000000) {
		cur += prev;
		prev = cur - prev;
		if (cur % 2 == 0)
			sum += cur;
	}

	printf("The sum of the even-valued terms in the Fibonacci sequence is %d\n", sum);

	return 0;

}

int main() {
	prob1();
	prob2();

	return 0;
}