#include "dog.h"

/**
*free_dog - Start
*@d: Specifies the dog to be freed
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
