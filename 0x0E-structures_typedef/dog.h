#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structures dogs and Poppies
 * @name: name of pointer element
 * @age: float value for element
 * @owner: pointer value for element
 *
 * Return : nothing to return
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);
#endif
