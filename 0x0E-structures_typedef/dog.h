#ifndef DOG
#define DOG

/**
 * struct dog - dog class
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initializes a dog struct
 *
 * @d: Pointer to dog struct
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints dog information
 *
 * @d: Pointer to dog struct
 */
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * new_dog - creates a new dog struct
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees a dog struct
 *
 * @d: Pointer to dog struct to be freed
 */
void free_dog(dog_t *d);

#endif

