#include "vector.h"
#include <stdlib.h>

vector_t* vector_new()
{
    vector_t* vector = (vector_t*)malloc(sizeof(vector_t));

    return vector;
}

void vector_destroy(vector_t* vector)
{
    free(vector);
}

bool vector_is_empty(vector_t* vector)
{
    return true;
}