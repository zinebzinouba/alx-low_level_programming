#include "dog.h"
/**
  *init_dog- so
  *@d: dog
  *@name: nom
  *@age: age
  *@owner: propr
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
