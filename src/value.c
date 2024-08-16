#include "value.h"

#include <stdio.h>

#include "memory.h"

void value_array_init(ValueArray* array) {
    array->values = NULL;
    array->capacity = 0;
    array->count = 0;
}

void value_array_write(ValueArray* array, Value value) {
    if (array->capacity < array->count + 1) {
        int oldCapacity = array->capacity;
        array->capacity = GROW_CAPACITY(oldCapacity);
        array->values = GROW_ARRAY(Value, array->values, oldCapacity, array->capacity);
    }

    array->values[array->count] = value;
    array->count++;
}

void value_array_free(ValueArray* array) {
    FREE_ARRAY(Value, array->values, array->capacity);
    value_array_init(array);
}

void value_print(Value value) { printf("%g", value); }
