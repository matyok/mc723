#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PRECISION 9
int A[9] = { 2, 3, 5, 7, 11, 13, 17, 19, 23 };

int factorBy2(int n) {

	if (n % 2 == 0) {
		return 1 + factorBy2(n / 2);
	} else {
		return 0;
	}
}

int possiblePrime(int n) {
	int i, j, x, a, r, aux, d;

	r = factorBy2(n - 1);
	d = (n - 1) / (pow(2, r));

	for (i = 0; i < PRECISION; i++) {
		a = A[i];
		if (a > n - 2)
			break;

		x = (int) pow(a, d) % n;

		if (x == 1 || x == (n - 1))
			continue;

		aux = 1;

		for (j = 0; j < r - 1; j++) {
			x = (int) pow(x, 2) % n;

			if (x == 1)
				return 0;

			if (x == (n - 1)) {
				aux = 0;
				break;
			}
		}

		if (aux)
			return 0;
	}
	return 1;
}

int primo_opt(int n) {
	int *primes;
	int i, j, k = 0, p, aux;

	if (n == 1)
		return 2;

	primes = (int*) malloc(n * sizeof(int));

	primes[0] = 2;
	k++;

	for (i = 3;; i += 2) {
//		if (!possiblePrime(i))
//			continue;
		p = 1;

		for (j = 0; j < k; j++) {
			if (primes[j] > sqrt(i))
				break;
			aux = primes[j];

			if (i % aux == 0) {
				p = 0;
				break;
			}
		}

		if (p) {
			primes[k] = i;

			k++;

			if (k == n) {
				return i;
			}
		}
	}

	return 0;
}
