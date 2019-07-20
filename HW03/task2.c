#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "output.h"

void fillvec (double* vector) {
	int i;
	for (i = 0; i < 1000; ++i) {
		if (i % 2 == 0) {
			vector[i] = 0.5;
		} else {
			vector[i] = -0.5;
		}
	}
}

double L2norm (double* vector) {
	int i;
	double sum = 0;
	for (i=0;i<(sizeof(vector)/sizeof(double));++i) {
		sum += pow(vector[i],2);
	}
	return sqrt(sum);
}

int main(int argc, char *argv[]) {
	clock_t start, end;
	double cpu_time_used;
	int i,k,norm;

	double b[1000];
	double c[1000];
	fillvec(b);
	double *A = malloc(1000000 * sizeof(double));
	randomT2(A);
	start = clock();
	for (i=0;i<1000;++i) {
		for (k=0;k<1000;++k) {
			c[i] += A[i*1000+k] * b[k];
		}
	}
	norm = L2norm(c);
	end = clock();
	cpu_time_used = ((double) (end - start)) / (CLOCKS_PER_SEC/1000);
	outputT2(norm,cpu_time_used);
	free(A);
}