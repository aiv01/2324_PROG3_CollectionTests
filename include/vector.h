#ifndef VECTOR_H
#define VECTOR_H

#include <stdbool.h>

typedef struct vector_t
{

} vector_t;

/// @brief Create a new empty vector
/// @return a vector_t pointer 
vector_t* vector_new();

/// @brief Destroy a vector
/// @param vector the vector to be destroyed
void vector_destroy(vector_t* vector);

/// @brief Chech if a vector is empty
/// @param vector the vector to be checked
/// @return true if empty, false otherwise
bool vector_is_empty(vector_t* vector);

#endif //VECTOR_H