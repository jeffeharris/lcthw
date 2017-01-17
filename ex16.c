#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

// create a struct named Person
struct Person {
	// create attributes for the Struct
	char *name;
	int age;
	int height;
	int weight;
};

// define a function that prints to the screen the Person attributes
void Person_print(struct Person who)
{
	// print the Persons attributes
	printf("Name: %s\n", who.name);
	printf("\tAge: %d\n", who.age);
	printf("\tHeight: %d\n", who.height);
	printf("\tWeight: %d\n", who.weight);
}

// define Main function
int main(int argc, char *argv[])
{
	// make two people structures
	struct Person joe;
	joe.name = "Joe Alex";
	joe.age = 32;
	joe.height = 64;
	joe.weight = 140;

	struct Person frank;
	frank.name = "Frank Blank";
	frank.age = 20;
	frank.height = 72;
	frank.weight = 180;

	// print them out and where they are in memory
	printf("Joe is at memory location %p:\n", &joe);
	Person_print(joe);

	printf("Frank is at memory location %p:\n", &frank);
	Person_print(frank);

	// make everyone age 20 years and print them again
	joe.age += 20;
	joe.height -= 2;
	joe.weight += 40;
	Person_print(joe);

	frank.age += 20;
	frank.weight += 20;
	Person_print(frank);

	return 0;
}
