#include <stdio.h>
#include "output.h"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Only one command line argument permitted.\n");
	} else {
		int i;
		int n = atoi(argv[1]);
		if (n < 0) {
			printf("Argument has to be positive.\n");
		} else {
			for (i = 0; i <= n; i++) {
				outputT2(i);
			}
		}
		
	}
	return 0;
}
