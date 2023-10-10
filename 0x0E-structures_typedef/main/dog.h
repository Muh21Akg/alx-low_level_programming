#ifndef HED
#define HED

/**
 * struct dog - a structure nqmed dog
 * @name: name od the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: a data structure for storing dogs by their age, name and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedefinition of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
