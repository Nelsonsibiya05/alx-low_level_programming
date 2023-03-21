#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - This struct creates a new type
 * @name: First member, char poiter
 * @age: Second member, float
 * @owner: Third member, char poiter
 *
 * Description: This struct has three elements and is a new type dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog - Typdef for dog type
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void priny_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(doh_t *d);

#endif /* _DOG_H_ */

