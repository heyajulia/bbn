#ifndef CLOX_CHUNK_H_
#define CLOX_CHUNK_H_

#include "common.h"
#include "value.h"

typedef enum {
    OP_CONSTANT,
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

void chunk_init(Chunk* chunk);
void chunk_write(Chunk* chunk, uint8_t byte, int line);
void chunk_free(Chunk* chunk);
int add_constant(Chunk* chunk, Value value);

#endif  // CLOX_CHUNK_H_
