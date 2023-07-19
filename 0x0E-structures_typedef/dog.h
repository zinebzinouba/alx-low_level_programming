#ifndef DOG_H
#define DOG_H
/**
  *struct dog- so
  *@name: nom
  *@age: age
  *@owner: propr
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
