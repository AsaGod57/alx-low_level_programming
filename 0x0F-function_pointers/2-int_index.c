#include "function_pointers.h"

/**
*int_index - Start point
*@array: Specifies the array containing elements
*@size: Specifies the number of elements in array
*@cmp: Specifies the function which compare values
*Return: -1 if no element match (Ends)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;

if (array == NULL || cmp == NULL)
return (-1);

for (; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}

return (-1);

}
