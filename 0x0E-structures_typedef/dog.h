#ifndef creating_struct_dog_H
#define creating_struct_dog_H

/**
 * struct - creating a struct for dog
 * @name: write the dog name
 * @age: define the dog's age
 * @owner: see who is owner of the dog
 *
 * Description: struct for dogs
 *
 * Return: always return 0
 */
struct dog /* dog struct */
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* creating_struct_dog_H */
