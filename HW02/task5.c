#include <stdio.h>
#include <stdlib.h>
#include "output.h"

int sortfunc (const void * a, const void * b) {
   return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Only one command line argument permitted.\n");
		exit(1);
	}
	int i;
	int n = atoi(argv[1]);
	if (n < 0 || n > 100) {
		printf("Argument has to be between 0 and 100.\n");
		exit(1);
	}
	int *nArray = malloc((n+1) * sizeof(int));
	for (i = n; i >= 0; --i) {
		nArray[i] = n - i;
	}
	qsort(nArray, n+1, sizeof(int), sortfunc);
	outputT5(nArray,n+1);
	free(nArray);
	return 0;
}