#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** main - Start point
 * Keygen Software: Based on 101-crackme
 * Return : Void (Ends) 
 */
int main(void)
{
    char password[84];
    int index = 0, sum = 0, diff_half1, diff_half2;
    srand(time(0));

    while (sum < 2772)
    {
        password[index] = 33 + rand() % 94;
        sum += password[index];
        index++;
    }

    diff_half1 = (sum - 2772);
    diff_half2 = (sum - 2772);

    if ((sum - 2772) % 2 != 0)
    {
        diff_half1++;
    }

    for (index = 0; password[index]; index++)
    {
        if (password[index] >= (33 + diff_half1))
        {
            password[index] -= diff_half1;
        }
    }

    for (index = 0; password[index]; index++)
    {
        if (password[index] >= (33 + diff_half2))
        {
            password[index] -= diff_half2;
        }
    }

    printf("%s", password);
    return 0;
}

