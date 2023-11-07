#include "dog.h"

/**
* init_dog - Start 
*@d: Specifies dog identification
*@name: Specifies the name of dog
*@age: Specifies the age of dog
*@owner: Specifeis the owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
