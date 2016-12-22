#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	argc--;

	if (argc == 0) {
		printf("You have no arguments. You suck.\n");
	} else if (argc == 1) {
		printf("You only have one argument. You suck.\n");
	} else if (argc > 1 && argc < 4) {
		printf("Here's your arguments:\n");

		for (i = 1; i < argc+1; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else {
		printf("You have too many arguments, only 3 allowed. You suck.\n");
	}

	return 0;
}
