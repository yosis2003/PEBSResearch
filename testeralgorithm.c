#include <stdlib.h>
#include <stdio.h>

#define MAXELEMS 100000
#define PATTERN 20



int generateSomePattern(int *pattern)
{
    for (int i = 0; i < PATTERN; i++)
    {
        pattern[i] = rand() % (10 + 1 - 0) + 0;
    }
}


int main()
{
    int array[MAXELEMS];
    int pattern[PATTERN];

    generateSomePattern(pattern);

    for (int i = 0; i < MAXELEMS; i++)
    {
        array[i] = rand();
        printf("%d\n", array[i]);
    }
    
        

}