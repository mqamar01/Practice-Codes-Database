#include <stdlib.h>

#include "A.h"
#include "B.h"

int clock();

int *ptr ;

int main ()
{
    ptr = malloc(sizeof(int));
    clock();
    return 0;
}
int clock()
{
    a_process(ptr);
    b_process(ptr);
}