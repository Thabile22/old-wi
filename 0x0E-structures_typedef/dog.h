#ifndef DOG_H
#define DOG_H

/**
 * struct dog - entry point
 * @name: 1st input value
 * @age: 2nd input value
 * @owner: 3rd input value
 * Description - Define dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
