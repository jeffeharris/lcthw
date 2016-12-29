#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("ERROR: You need one argument.\n");
		// this is how you abort a program
		return 1;
	}

	int j = 1;
	for (j = 1; j != argc; j++) {
		printf("Word %d: %s\n", j, argv[j]);
		int i = 0;

		for (i = 0; argv[j][i] != '\0'; i++) {			
			char letter =",";			
			letter = argv[j][i];

			switch (letter) {
				case 'a': // fallthrough
				case 'e': // fallthrough
				case 'i': // fallthrough
				case 'o': // fallthrough
				case 'u': // make lowercase vowels upppercase and print them
					letter = letter - 32;
					printf("%d: '%c'\n", i, letter);
					break;			

				case 'A': // fallthrough
				case 'E': // fallthrough
				case 'I': // fallthrough
				case 'O': // fallthrough
				case 'U': // print letter and place in word
					printf("%d: '%c'\n", i, letter);
					break;

				case 'y':
				case 'Y':
					if (i > 2) {
						// it's only sometimes Y
						printf("%d: 'Y'\n", i);
						break;
					}

				default:
					printf("%d: %c is not a vowel\n", i, letter);
			}
		}
	}

	return 0;
}
