#ifndef dog_h
#define dog_h

/**
 * struct dog - defines new type
 * @name: takes pointer
 * @age: float
 * @owner: takes pointer
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
