#ifndef creating_struct_dog_H
#define creating_struct_dog_H

/**
 * struct dog - creating a struct for dog
 * @name: write the dog name
 * @age: define the dog's age
 * @owner: see who is owner of the dog
 *
 * Description: struct for dogs
 *
 * Return: always return 0
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* creating_struct_dog_H */
