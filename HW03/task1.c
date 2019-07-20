#include <stdio.h>
#include <stdlib.h>
#include "output.h"

int strlength (char string[]) {
	int i = 0;
	while (string[i] != '\0') {
		++i;
	}
	return i;
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Only one command line argument permitted.\n");
		exit(1);
	}
	char *input = argv[1];
	outputT1(strlength(input));
	return 0;
}