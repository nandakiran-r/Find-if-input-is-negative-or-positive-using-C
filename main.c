#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter a number");
	scanf("%d", &num);
	if (num > 0) {
		printf("Number is positive");
	}
	else {
		printf("Number is negative");
	}

	return EXIT_SUCCESS;
}
