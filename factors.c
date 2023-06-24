#include <math.h>
#include <stdio.h>

unsigned long factorize(unsigned long num) {
	unsigned long i;

	for (i = 53; i <= num; i++)
		if (num % i == 0)
			return i;
	return 0;
}
