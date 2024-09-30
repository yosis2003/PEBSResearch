#include <stdlib.h>
#include <stdio.h>

#define MAXELEMS 100000
#define FIND 2000

void generateRandoms(int *randoms, int *targets)
{
    for (int i = 0; i < MAXELEMS; i++)
    {
        randoms[i] = rand();
    }
    for (int i = 0; i < FIND; i++)
    {
        targets[i] = rand() % (20 + 1 - 2) + 2;
    }
}

int main()
{
    int randoms[MAXELEMS];
    int targets[FIND];
    // just the number of hits found per random number
    int amountFound = 0;

    // to ensure that the same numbers get generated every time
    srand(42);
    generateRandoms(randoms, targets);

    for (int i = 0; i < FIND; i++)
    {
        int lookFor = targets[i];
        amountFound = 0;

        for (int j = 0; j < MAXELEMS; j++)
        {
            if (randoms[i] % lookFor == 0)
            {
                randoms[i] = rand();
                amountFound += 1;
            }
        }
    }
        

}