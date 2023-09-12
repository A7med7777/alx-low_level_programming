#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Description: Define a new type struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
