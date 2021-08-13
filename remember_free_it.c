/**
 * GNU/Linux
 * Written by Ryan Martin <?>
 */

#include <stdlib.h>

void *lmalloc(int);

int main()
{
    int *ptr;
    ptr = lmalloc(4);
    free(ptr); /* free */
    return 0;
}

void *lmalloc(int siz)
{
    return (void *) malloc(siz);
}
