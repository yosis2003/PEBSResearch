#include <stdlib.h>
#include <stdio.h>

#define MAXELEMS 100000
#define FIND 20



int generateSomePattern(int *pattern)
{

}


int main()
{
    int array[MAXELEMS];
    int pattern[FIND];
    int amountFound = 0;

    // to ensure that the same numbers get generated every time
    srand(42);
    for (int i = 0; i < FIND; i++)
    {
        pattern[i] = rand() % (10 + 1 - 1) + 1;
        printf("%d\n", pattern[i]);
    }

    // generateSomePattern(pattern);

    for (int i = 0; i < MAXELEMS; i++)
    {
        array[i] = rand();
        // printf("%d\n", array[i]);
    }

    for (int i = 0; i < FIND; i++)
    {
        int lookFor = pattern[i];
        amountFound = 0;

        for (int j = 0; j < MAXELEMS; j++)
        {
            if (array[i] % lookFor == 0)
            {
                array[i] = rand();
                amountFound += 1;
            }
            
        }
        printf("%d\n", amountFound);
    }
        

}