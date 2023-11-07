#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*struct dog - a new type of data
*representing a dog
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*/
struct dog
{
char *name;
float age;
char *owner;
};

/**
*dog_t - Start
*/
typedef struct dog dog_t;
