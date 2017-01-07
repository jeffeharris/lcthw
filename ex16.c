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

// define a pointer to a Person Struct called Person_create that
// that takes several variables. 
struct Person *Person_create(char *name, int age, int height,
	int weight)
{
	// define a pointer to a Person struct named who and
	// allocate the required amount of memory for it
	struct Person *who = malloc(sizeof(struct Person));
	// ensure NULL was not returned (a NULL address)
	assert(who != NULL);

	// assign values to the Person attributes
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	// return the created Person named who
	return who;
}

// define a function that clears the memory allocated for a Person struct
void Person_destroy(struct Person *who)
{
	// ensure the Person passed in is not NULL
	assert(who != NULL);

	// release the memory that had been allocated for the Person
	free(who->name);
	free(who);
}

// define a function that prints to the screen the Person attributes
void Person_print(struct Person *who)
{
	// print the Persons attributes
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

// define Main function
int main(int argc, char *argv[])
{
	// make two people structures
	struct Person *joe = Person_create("Joe Alex", 32, 64, 140);

	struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

	// print them out and where they are in memory
	printf("Joe is at memory location %p:\n", joe);
	Person_print(joe);

	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);

	// make everyone age 20 years and print them again
	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;
	Person_print(joe);

	frank->age += 20;
	frank->weight += 20;
	Person_print(frank);

	// destroy them both so we clean up
	Person_destroy(joe);
	Person_destroy(frank);

	return 0;
}
