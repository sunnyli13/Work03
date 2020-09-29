#include <stdio.h>
#include <stdlib.h>

int main() {

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