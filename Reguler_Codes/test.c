#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum_of_odd_digits(int n) {

	int i, sum = 0;
	char str[100];

	// converting n to string and storing the string in str[]
	itoa(n, str, 10);

	// reading each character of str[]
	for (i = 0; i < strlen(str); ++i) {

		// if str[i] is odd, add str[i] to sum
		// we are substracting '0' from str[i]
		// to convert character to integer digit
		if ((str[i] - '0') % 2 == 1) {
			sum = sum + (str[i] - '0');
		}

	}

	return sum;

}

int main() {

	int n;
	printf("Enter a Number: ");
	scanf("%d", &n);

	printf("Sum of Odd Digits: %d", sum_of_odd_digits(n));

}
