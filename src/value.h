#ifndef CLOX_VALUE_H_
#define CLOX_VALUE_H_

#include "common.h"

typedef double Value;

typedef struct {
    int capacity;
    int count;
    Value* values;
} ValueArray;

void value_array_init(ValueArray* array);
void value_array_write(ValueArray* array, Value value);
void value_array_free(ValueArray* array);
void value_print(Value value);

#endif  // CLOX_VALUE_H_
