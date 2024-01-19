#define CLOVE_SUITE_NAME VectorTest
#include "clove-unit.h"
#include "vector.h"

CLOVE_TEST(CreateNewEmptyVector)
{
    vector_t* vector = vector_new();
    CLOVE_NOT_NULL(vector);

    bool is_empty = vector_is_empty(vector);
    CLOVE_IS_TRUE(is_empty);

    vector_destroy(vector);
}