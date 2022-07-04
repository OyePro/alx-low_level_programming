#include "dog.h"
/**
 * init_dog - initialize a variable of type structure
 * @d: pointer to a structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d->owner = owner;
d->age = age;
}
else
return;
}
